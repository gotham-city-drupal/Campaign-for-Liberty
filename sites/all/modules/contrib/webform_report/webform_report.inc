<?php

// $Id: webform_report.inc,v 1.1.2.26 2010/03/29 17:21:03 jimbullington Exp $

/**
 * Search for nodes of type webform and returns their nids and titles
 * in an associative array.
 */
function _webform_report_get_webforms() {
  $webforms = array();
  $result = db_query(db_rewrite_sql("SELECT n.nid, n.title FROM {node} n WHERE n.type = 'webform'"));

  while ($row = db_fetch_object($result)) {
    $webforms[$row->nid] = t($row->title);
  }
  return $webforms;
}

/**
 * Get webform components.
 *
 * @param nid is the node id of a webform
 * @return an associative array of webform components
 */
function _webform_report_get_components($nid) {
  $components = array();
  $result = db_query("SELECT c.cid, c.name FROM {webform_component} c WHERE c.type <> 'fieldset' AND c.nid = %d ORDER BY c.weight", $nid);
  
  while ($row = db_fetch_object($result)) {
    $component_name = substr($row->name, 0, 65);
    if (strlen($row->name) > 65) {
      $component_name .= '...';
    }
    $components[$row->cid] = t($component_name);
  }
  
  return $components;
}


/**
 * Get data for the specified webform.
 *
 * @param node is the current node object
 * @return a database query result set
 */
function _webform_report_get_data($node) {
  return db_query("
    SELECT w.nid, c.name, c.cid, c.type, d.nid, d.sid, d.data, s.uid, u.name as user, s.submitted, s.remote_addr
    FROM {webform} w
    LEFT JOIN {webform_submitted_data} d ON w.nid = d.nid
    LEFT JOIN {webform_component} c ON d.cid = c.cid
    LEFT JOIN {webform_submissions} s  ON d.sid = s.sid
    LEFT JOIN {users} u ON s.uid = u.uid
    WHERE d.nid = c.nid
    AND c.nid = s.nid
    AND s.nid = %d
    ORDER BY d.sid, c.cid, d.no DESC, c.name, d.data", $node->wnid);
}

/**
 * Get node body content for the specified webform report.
 *
 * @param data is a database query result set
 * @param node is the current node object
 * @param formatcsv if TRUE format the output as a CSV file
 * @return a string of text or a themed table
 */
function _webform_report_get_body_content($data, $node, $formatcsv = FALSE) {
  $output = '';
  if (!empty($data)) {
    $fields = array();
    $values = array();
    $last_value = 0;

    // Begin fields.
    $fields[-1] = array('data' => t('User'), 'field' => -1, 'sort' => $_GET['sort']);
    $fields[-2] = array('data' => t('Date'), 'field' => -2, 'sort' => $_GET['sort']);
    $fields[-3] = array('data' => t('Time'), 'field' => -3, 'sort' => $_GET['sort']);
    $fields[-4] = array('data' => t('IP Address'), 'field' => -4, 'sort' => $_GET['sort']);
    $fields[-5] = array('data' => t('Edit'), 'field' => -5, 'sort' => $_GET['sort']);
    while ($row = db_fetch_object($data)) {
      if (!isset($fields[$row->cid])) {
        $fields[$row->cid] = array('data' => check_plain($row->name), 'field' => $row->cid, 'sort' => $_GET['sort']);
      }
      // Begin data.
      // The value '0' means that a group of checkboxes has no selection.
      if (!empty($row->data)) {
        // This will comma-separate multiple selections from the same group of checkboxes in the same submission.
        if ($row->cid == $last_cid && $row->sid == $last_sid && !empty($last_value)) {
          $row->data .= ', ' . $last_value;
        }
        // Don't leave the user field blank if no matching user is found.
        if (empty($row->user)) {
          $row->user = t('Anonymous');
        }
        $values[$row->sid][-1] = array('data' => $row->user, 'field' => -1);
        $values[$row->sid][-2] = array('data' => date('Y-m-d', $row->submitted), 'field' => -2);
        $values[$row->sid][-3] = array('data' => date('H:s', $row->submitted), 'field' => -3);
        $values[$row->sid][-4] = array('data' => $row->remote_addr, 'field' => -4);
        $values[$row->sid][-5] = array('data' => l('edit', 'node/'. $row->nid . '/submission/' . $row->sid . '/edit'), 'field' => -5);
        // special handling for file uploads
        if ($row->type == 'file') {
          $tmp = unserialize($row->data);
          $link = '&nbsp;';
          if (!empty($tmp['filename'])) {
            $link = '<a href="' . base_path() . $tmp['filepath'] . '">' . 
                    $tmp['filename'] . ' (' . (int) ($tmp['filesize'] / 1024) .' KB)' . 
                    '</a>';
          }
          $values[$row->sid][$row->cid] = array('data' => $link, 'field' => $row->cid);
        }
        else {
          // The attribute 'field' is used to preserve the cid, as array_multisort re-indexes the array.
          $values[$row->sid][$row->cid] = array('data' => filter_xss($row->data), 'field' => $row->cid);
        }
      }
      else {
        // This will prevent empty table cells from being omitted by filling them with blanks.
        if (!$formatcsv) {
          $values[$row->sid][$row->cid] = array('data' => '&nbsp;', 'field' => $row->cid);
        }
      }

      // Override the report's sort column with the table sort column, if selected.
      if (isset($_GET['order'])) {
        if ($_GET['order'] == $row->name && $node->kcid != $row->cid) {
          $node->sort_col = $row->cid;
        }
      }
      else {
        // If 'order' is not specified, then no table sort link has been clicked yet.
        switch($node->kcid) {
          case -1:
            $_GET['order'] = t('User');
            break;
          case -2:
            $_GET['order'] = t('Date');
            break;
          case -3:
            $_GET['order'] = t('Time');
            break;
          case -4:
            $_GET['order'] = t('IP Address');
            break;
          case $row->cid:
            // Make the sort arrow marker appear in the corresponding table column header.
            $_GET['order'] = $row->name;
            break;
        }
      }
      $last_sid = $row->sid;
      $last_cid = $row->cid;
      $last_value = $row->data;
    }

    // Go to first element of the fields array.
    reset($fields);

    // Construct an array of columns for sorting.
    $column = array();
    foreach ($fields as $key1 => $field) {
      foreach ($values as $key2 => $value) {
        // Make sort order case-insensitive and remove spaces (and accents if accents module installed).
        if (module_exists('accents')) {
          $column[$key1][$key2] = trim(strtolower(accents_search_preprocess($value[$key1]['data'])));
        }
        else {
          $column[$key1][$key2] = trim(strtolower($value[$key1]['data']));
        }
      }
    }

    // Override the report's sort order with the table sort order, if selected.
    if (isset($_GET['sort'])) { 
      switch ($_GET['sort']) {
        case 'asc':
          $node->sort = SORT_ASC;
          break;

        case 'desc':
          $node->sort = SORT_DESC;
          break;
      }
    }
    else { // Otherwise, do the opposite.
      if ($node->sort == SORT_ASC) {
        $_GET['sort'] = 'asc';
      }
      else {
        $_GET['sort'] = 'desc';
      }
    }

    // Handle the sorting of meta, or non-component fields
    switch($_GET['order']) {
      case t('User'):
        $node->sort_col = -1;
        $sort = SORT_STRING;
        break;

      case t('Date'):
        $node->sort_col = -2;
        $sort = SORT_REGULAR;
        break;

      case t('Time'):
        $node->sort_col = -3;
        $sort = SORT_REGULAR;
        break;

      case t('IP Address'):
        $node->sort_col = -4;
        $sort = SORT_REGULAR;
        break;

      default:
        $sort = SORT_REGULAR;
    }

    if(empty($node->sort_col)) {
      $node->sort_col = $node->kcid;
    }

    if (is_array($column[$node->sort_col])) {
      // Sort the columns and their contents according to specified criteria.
      array_multisort($column[$node->sort_col], (int)$node->sort, $values);

      // Keep only fields requested in report criteria.
      _webform_report_prepare_report_data($fields, $values, $node);

      // Filter the table values.
      if ($node->filter_type != 0) {
        $values = _webform_report_filter_values($values, $node);
      }

      if ($formatcsv) {
        // format as csv
        $output = _webform_report_output_csv($fields, $values);
      }
      else {
        $values = _webform_report_add_data_links($fields, $values);
        // Display number of rows after description.
        $output .= filter_xss_admin($node->description) . 
                   ' (' . count($values) . ' ' . t('results') . ') ' . 
                   l(t('Download as CSV'), 'node/' . arg(1) . '/csv') . '</p>';
        $output .= _webform_report_pager($fields, $values, $node);
      }
    }
    else {
      $output = t('It appears that no criteria have been specified for this report. Please click on the Criteria tab to add webform data to your report.');
    }
  }
  // The selected webform has no submissions.
  else {
    $output = t('Note: There are no submissions for the selected webform.</b> Either the form
       has not yet been completed by anyone, or the results have been cleared. This will not
       prevent you from creating this report, but this message will be displayed on the report
       page until someone submits the selected webform.');
  }
  return $output;
}

/**
 * Rebuild result table fields and values arrays to match
 * report criteria.
 *
 * @param fields is a reference to an array of table fields
 * @param values is a reference to an array of table values
 */
function _webform_report_prepare_report_data(&$fields, &$values, $node) {
  if (is_array($node->components)) {
    $report_fields = array();
    $report_values = array();
    foreach($fields as $key1 => $field) {
      if (in_array($key1, $node->components)) {
        $report_fields[$key1] = $fields[$key1];
      }
      foreach($values as $key2 => $value) {
        if (in_array($value[$key1]['field'], $node->components)) {
          $report_values[$key2][$key1] = $value[$key1];
        }
      }
    }
    $fields = $report_fields;
    $values = $report_values;
  }
}

/**
 * Add links to relevant data fields.
 *
 * @param fields is an array of table fields
 * @param values is an array of table values
 * @return an array of table values
 */
function _webform_report_add_data_links($fields, $values) {
  foreach($fields as $key1 => $field) {
    foreach($values as $key2 => $value) {
      // This is to shorten access to the data element of the array, for the following statements.
      $data = &$values[$key2][$key1]['data'];

      if ($key1 == -1) {
        $data = l($data, 'user/' . _webform_report_get_uid_for_user($data));
      }
      else {
        if (valid_email_address($data)) {
          $data = l($data, 'mailto:' . $data);
        }
        else {
          if (valid_url($data, TRUE)) {
            $data = l($data, $data);
          }
        }
      }
    }
  }
  return $values;
}

/**
 * Filter an array of table values.
 *
 * @param values is an array of table values
 * @node is the current node object
 * @return a filtered array of table values
 */
function _webform_report_filter_values($values, $node) {
  $filtered_values = array();
  foreach($values as $key => $value) {
    switch($node->filter_type) {
      // Begins with x.
      case 1:
        if (substr(strtolower(trim($value[$node->kcid]['data'])), 0, strlen($node->filter_value)) == strtolower($node->filter_value)) {
          $filtered_values[] = $value;
        }
        break;
      // Does not begin with x.
      case 2:
        if (substr(strtolower(trim($value[$node->kcid]['data'])), 0, strlen($node->filter_value)) != strtolower($node->filter_value)) {
          $filtered_values[] = $value;
        }
        break;
      // Contains x.
      case 3:
        if (strpos(strtolower(trim($value[$node->kcid]['data'])), strtolower($node->filter_value)) !== FALSE) {
          $filtered_values[] = $value;
        }
        break;
      // Does not contain x.
      case 4:
        if (strpos(strtolower(trim($value[$node->kcid]['data'])), strtolower($node->filter_value)) === FALSE) {
          $filtered_values[] = $value;
        }
        break;
      // Equals x.
      case 5:
        if (strtolower(trim($value[$node->kcid]['data'])) == strtolower(trim($node->filter_value))) {
          $filtered_values[] = $value;
        }
        break;
      // Does not equal x.
      case 6:
        if (strtolower(trim($value[$node->kcid]['data'])) != strtolower(trim($node->filter_value))) {
          $filtered_values[] = $value;
        }
        break;
      // is empty
      case 7: 
        if (strlen(trim($value[$node->kcid]['data'])) == 0) {
          $filtered_values[] = $value;
        }
        break;
      // is not empty        
      case 8: 
        if (strlen(trim($value[$node->kcid]['data'])) != 0) {
          $filtered_values[] = $value;
        }
        break;
    }
  }

  return $filtered_values;
}

/**
 * Return the uid corresponding with a valid username.
 *
 * @param a string consisting of a valid username
 * @return a uid for the specified user
 */
function _webform_report_get_uid_for_user($name) {
  $result = db_query("SELECT uid FROM {users} WHERE name = '%s'", $name);
  $user = db_fetch_object($result);
  return $user->uid;
}

/**
 * Display a list of webform reports in the admin area.
 *
 * @return a themed table
 */
function _webform_report_page() {
  $output = NULL;
  if (user_access('access webform reports')) {
    $header = array(t('View'), t('Edit'), t('Delete'));

    $result = db_query(db_rewrite_sql("SELECT n.nid, n.title FROM {node} n WHERE n.type='webform_report'"));
   
    while ($node = db_fetch_object($result)) {
      $rows[] = array(l($node->title,'node/' . $node->nid),
                      l(t('edit'), 'node/'.$node->nid.'/edit'),
                      l(t('delete'), 'node/'.$node->nid.'/delete'));

    }
  
    $output = theme_table($header, $rows, array('class' => 'webform'));
    drupal_set_title(check_plain($node->title));
  }
  return $output;
}

/**
 * Paginate the webform report.
 *
 * @return a themed table with page links
 */
function _webform_report_pager($fields, $values, $node) {

  global $pager_page_array, $pager_total;

  // For backward compatibility to earlier versions.
  if (!$node->results_per_page) {
    $results_per_page = 20;
  }
  else {
    $results_per_page = $node->results_per_page;
  }
  // Add the css file for form display.
  drupal_add_css(drupal_get_path('module', 'webform_report') . '/webform_report.css');

  // Break the array into chunks for pagination.
  $pages = array_chunk($values, $results_per_page, TRUE); 
  
  // Grab the 'page' query parameter.
  // Taken from pager_query() in pager.inc
  $page = isset($_GET['page']) ? $_GET['page'] : '';
  
  // Convert comma-separated $page to an array, used by other functions.
  // Taken from pager_query() in pager.inc
  $pager_page_array = explode(',', $page);
    
  // format the table with the current page
  if ($page == '') $page = 0;
  $output = theme_table($fields, $pages[$page], array('class' => 'webform_report'));
    
  // Put some magic in the two global variables
  // Based on code in pager_query() in pager.inc
  $pager_total[0] = count($pages);
  $pager_page_array[0] =
    max(0, min(
      (int)$pager_page_array[0],
      ((int)$pager_total[0]) - 1)
    );
      
  // Add the pager to the output.
  $output .= theme('pager', NULL, $results_per_page, 0);

  return $output;
}

/**
 * Output a webform report in CSV format
 */
function webform_report_csv($node) {

  $data = _webform_report_get_data($node);  
  $output = _webform_report_get_body_content($data, $node, TRUE);
      
  $fname = 'wfr_export.csv';
  header('Content-Type: text/plain');
  header('Content-Length: ' . strlen($output));
  header('Content-Disposition: attachment; filename="' . $fname . '"');
  echo $output;
}

/**
 * Format webform report data as a CSV
 *
 * @return CSV output
 */
function _webform_report_output_csv($fields, $values) {

  $output = '';
  $tmp = array();
  foreach($fields as $cell) {
    $tmp[] .= _webform_report_format_csv_column($cell['data']);
  }
  $output .= implode(',', $tmp) . "\r\n";

  foreach($values as $row) {
    $tmp = array();
    foreach($row as $cell) {
      $tmp[] = _webform_report_format_csv_column($cell['data']);
    }
    $output .= implode(',', $tmp) . "\r\n";
  }

  return $output;
}

/**
 * Format a CSV column value
 *
 * @return CSV column
 */
function _webform_report_format_csv_column($value) {

    // if value contains a comma, it should be delimited by quotes
    if (strpos($value, ',')) {
        // if value contains quotes, double the quotes
        if (strpos($value, '"'))
            return '"' . str_replace('"', '""', $value) . '"';
        else
            return '"' . $value . '"';
    }
    return $value;
}
?>
