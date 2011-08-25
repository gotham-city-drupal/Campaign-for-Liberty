<?php
// $Id: uc_single_page_checkout_panes.admin.inc,v 1.1.3 2011/08/23 00:59:08 kbell Exp $

/**
 * Utility function to be used in generating an array of form elements
 *
 * @param $item
 * an array of values to be processed and output as a drupal form OR
 * a number to use in creating a blank element in the form
 *
 * @return
 * an array of drupal form elements
 */
function _uc_single_page_checkout_gen_form_elems($item) {
  $collapsed = (is_numeric($item) || ($item['pid'] == '' || $item['nid'] == '')) ? FALSE : TRUE;
  $item = array(
    'lid' => ($item['lid']) ? $item['lid'] : ((is_array($item)) ? 0 : $item),
    'pid' => ($item['pid']) ? $item['pid'] : '',
    'nid' => ($item['nid']) ? $item['nid'] : '',
    'text' => ($item['text']) ? $item['text'] : '',
    'fieldset' => '',
  );
  $elems = array();
  foreach ($item as $id => $val) {
    switch ($id):
      case 'fieldset':
        $elems = array(
          '#type'   => 'fieldset',
          '#title'  => 'Ubercart Node Pane ' . $item['lid'],
          '#tree'   => TRUE,
          '#collapsible' => TRUE,
          '#collapsed' => $collapsed,
        );
      case 'pid':
        $elems['pid'] = array(
          '#type' => 'textfield',
          '#title' => t('Product purchased'),
          '#autocomplete_path' => 'uc-single-page-checkout/autocomplete-product', 
          '#description' => t('Type the title or the node ID of the product that you would like to trigger the display of this pane and select it from the dropdown (Required).'),
          '#default_value'  => $item['pid'],
        );
      case 'nid':
        $elems['nid'] = array(
          '#type' => 'textfield',
          '#title' => t('Node to show in the checkout pane'),
          '#autocomplete_path' => 'uc-single-page-checkout/autocomplete-node',
          '#description' => t('Type the title or the node ID of the node you would like to use in this checkout pane and select it from the dropdown (Required).'),
          '#default_value'  => check_plain($item['nid']),
        );
      case 'text':
        $elems['text'] = array(
          '#type'           => 'textarea',
          '#title'          => t('Text to use for the checkbox.'). $text['title'],
          '#description'    => t("The text to be placed next to this item's checkbox (optional).  To not use a checkbox just leave this blank."),
          '#default_value'  => check_plain($item['text']),
        );
    endswitch;
  }
  return $elems;
}

/**
 * Utility function for generating an array of form values from all of the db entries plus one blank element
 *
 * @return $elems
 * all the form elements ready to be placed in the form
 */
function _uc_single_page_checkout_gen_form_array() {
  $db_values  = _uc_single_page_checkout_panes_db();
  $elems = array();
  foreach ($db_values as $id => $elem) {
    $elem = _uc_single_page_checkout_gen_form_elems($elem);
    array_push($elems, $elem);
    $i = $id++;
  }
  array_push($elems, _uc_single_page_checkout_gen_form_elems($id));
  return $elems;
}

/**
 * Utility function to add another element to the existing form elements
 *
 * @param $form
 * the $form array
 *
 * @param $form_state
 * the current values in the form when this was called
 *
 * @return $elems
 * all the form elements ready to be placed in the form
 */
function _uc_single_page_checkout_add_another_pane($form, $form_state) {
  $elems = array();
  foreach ($form_state['values']['uc_single_page_checkout_panes']['texts'] as $id => $val) {
    $val['lid'] = (is_numeric($val['lid'])) ? $val['lid'] : $id;
    $elem = _uc_single_page_checkout_gen_form_elems($val);
    array_push($elems, $elem);
  }
  $lid = $val['lid'] + 1;
  array_push($elems, _uc_single_page_checkout_gen_form_elems($lid));
  return $elems;
}

/**
 * Utility function to convert the string in product and node fields into a simple node id
 *
 * @param $str
 * the string to process
 *
 * @return $nid
 * the node's id
 */
function _uc_single_page_checkout_str2nid($str) {
  return $nid = substr($str, (strrpos($str, '[') + 1), -1);
}


/**
 * Utility function to convert a node id into the format of 'Title [nid]'
 *
 * @param $nid
 * the nid to process
 *
 * @return $str
 * the formatted string in form of 'Title [nid]'
 */
function _uc_single_page_checkout_nid2str($nid) {
  $arr = db_fetch_array(db_query("SELECT title FROM {node} WHERE nid = %d LIMIT 1", $nid));
  $title = $arr['title'];
  return $str = $title . ' [' . $nid . ']';
}

/**
 * Get data from database.
 *
 * @param $field
 * Optionally, the field you'd like to retrieve
 *
 * @return $texts
 * An array of texts, in the form array(text_id => t('text name'))
 * If $field is set to 'lid', returns an array of those field values
 * If $field is set to 'lastid', returns the last lid in the table
 */
function _uc_single_page_checkout_panes_db($field = 'all') {
  $texts = array();
  $row    = NULL; 
  switch ($field):
    case 'all':
      $result = db_query("SELECT * FROM {uc_single_page_checkout}");
      while ($row = db_fetch_array($result)) {
        $texts[$row['lid']] = array(
          'lid' => $row['lid'],
          'pid' => _uc_single_page_checkout_nid2str($row['pid']),
          'nid' => _uc_single_page_checkout_nid2str($row['nid']),
          'text' => t($row['text']),
        );
      }
      break;
    case 'lid':
      $result = db_query("SELECT lid FROM {uc_single_page_checkout} ORDER BY lid");
      while ($row = db_fetch_array($result)) {
        array_push($texts, $row['lid']);
      }
      break;
    case 'lastid':
      while ($row = db_fetch_array(db_query("SELECT lid FROM {uc_single_page_checkout} ORDER BY lid DESC LIMIT 1"))) {
        return $row['lid'];
      }
      break;
  endswitch;
  return $texts;
}
 
/**
 * Implementation of hook_admin_settings() for configuring the module
 */
function uc_single_page_checkout_panes_admin_settings_form(&$form_state) {
  // check for ahah_helper since our add more button requires it
  if (!module_exists('ahah_helper')){
    drupal_set_message(t("Ubercart Single Page Checkout requires the AHAH Helper module.  Please install and enable the AHAH Helper module from the module administration page before setting up Ubercart Single Page Checkout."), 'warning');
    return;
  }

  // setup our form array and give it a submit function
  $form = array(
    '#submit' => array('uc_single_page_checkout_panes_admin_settings_form_submit'),
  );
  // register the ahah helper for this form
  ahah_helper_register($form, $form_state);

  // some instructions if you will...
  $form['uc_single_page_checkout_foreword'] = array(
    '#value' => '<p>' . t("To remove a pane just delete one of it's required fields before saving.  Clicking 'Add Another Pane' does not save the post, so be sure to click save when finished.") . '</p><p>' . t("Please be aware that both Product and Node ID's are needed in order to save a pane, if you leave one of these fields blank then it will be removed from the entries.") . '</p>',
  );
  // a wrapper for the add more, this is required to know what part of the form to manipulate with ahah
  $form['uc_single_page_checkout_panes'] = array(
    '#prefix' => '<div id="uc-single-page-checkout-panes-wrapper">',
    '#suffix' => '</div>',
    '#tree'   => TRUE,
  );

  // initial load of a form spit out the regular db entries +plus 1 empty one
  if (!$form_state['values']) {
    $form['uc_single_page_checkout_panes']['texts'] = _uc_single_page_checkout_gen_form_array();
  }
  else {
    // check state of the edit-save button to be sure of whether we are saving or adding more rows
    if ($form_state['clicked_button']['#id'] != 'edit-save') $form['uc_single_page_checkout_panes']['texts'] = _uc_single_page_checkout_add_another_pane($form, $form_state);
    else $form['uc_single_page_checkout_panes']['texts'] = _uc_single_page_checkout_gen_form_array();
  }

  // ahah enabled add another pane button
  $form['add_text'] = array(
    '#type'   => 'button',
    '#value'  => t('Add another pane'),
    '#ahah'   => array(
      'path'      => ahah_helper_path(array('uc_single_page_checkout_panes')),
      'method'    => 'replace',
      'wrapper'   => 'uc-single-page-checkout-panes-wrapper',
    )
  );
  
  // save, save the day!
  $form['save'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  return $form;
}

/**
 * Implementation of hook_admin_settings_form_submit()
 *
 * does all processing of our form and inserts/updates/deletes in the db
 */
function uc_single_page_checkout_panes_admin_settings_form_submit($form_id, &$form) {
  // check to be sure they actually clicked save. If not, "then git awn outta hea!" Otherwise, "proceed my padwan..."
  if ($form['clicked_button']['#id'] != 'edit-save') return;

  $values = $form['values']['uc_single_page_checkout_panes']['texts']; // values from panes section
  $exists = _uc_single_page_checkout_panes_db('lid'); // array of lid's that exist in db

  // loop through all our form values inserting/updating/deleting
  foreach ($values as $id => $val) {
    $val['lid'] = $id; // assure lid is set
    $val['nid'] = _uc_single_page_checkout_str2nid($val['nid']); // convert strings to nid and pid
    $val['pid'] = _uc_single_page_checkout_str2nid($val['pid']);
    $val['text'] = ($val['pid']) ? $val['text'] : ''; // if text is null then set it blank
    
    // inserts/updates/deletes
    if (!is_numeric($val['pid']) || !is_numeric($val['nid'])) { // non-numeric pid or nid
      // do nothing, this item is likely just there from the add more button
      if (!in_array($val['lid'], $exists)) return;
      // delete, since either the pid or nid was empty
      else db_query("DELETE FROM {uc_single_page_checkout} WHERE lid = %d", $val['lid']);
    }
    else { 
      // add new, the item doesn't exist add it
      if (!in_array($val['lid'], $exists)) db_query("INSERT INTO {uc_single_page_checkout} (lid, nid, pid, text) VALUES ('%d', '%d', '%d', '%s')", $val['lid'], $val['nid'], $val['pid'], $val['text']);
      // update, item already in db so just update
      else db_query("UPDATE {uc_single_page_checkout} SET nid = '%d', pid = '%d', text = '%s' WHERE lid = %d", $val['nid'], $val['pid'], $val['text'], $val['lid']);
    }
  }
  return;
}