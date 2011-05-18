<?php
// $Id: hosting_stats.report.inc,v 1.1.2.4 2010/06/17 12:46:13 chrisyates Exp $

/**
 * @file hosting_stats.report.inc
 * Report settings
 */

/**
 * Provide admin settings form
 */
function hosting_stats_reporting() {
  $form = array();

  if (user_access('administer hosting stats')) {
    if (variable_get('hosting_stats_logging', 0)) {
      drupal_set_message(t('Performance logging is currently running. <a href="@link">Disable here</a>.', array('@link' => url('admin/settings/hosting_stats'))), 'error', FALSE);
    }
    else {
      drupal_set_message(t('Performance logging is disabled. <a href="@link">Enable here</a>.', array('@link' => url('admin/settings/hosting_stats'))), 'status', FALSE);
    }
  }

  // Get environmental information
  $cacheopts = array("Disabled", "Normal", "Aggressive");
  $env = array(
    array('MySQL version', db_version()),
    array('PHP version', phpversion()),
    array('Drupal caching', $cacheopts[variable_get('cache', 0)]),
    array('Preprocess CSS', variable_get('preprocess_css', 0) ? "On" : "Off"),
    array('Preprocess javascript', variable_get('preprocess_js', 0) ? "On" : "Off"),
  );
  $form['env'] = array(
    '#type' => 'fieldset',
    '#title' => t('Environment'),
  );
  variable_set('hosting_stats_env', serialize($env));

  if (!module_exists('systeminfo')) {
    $form['env']['#description'] = t('For more detailed information about Drupal, MySQL and PHP configuration, please install and enable the <a href="http://drupal.org/project/systeminfo">System Info</a> module.');
  }
  else {
    $form['env']['#description'] = t('For more detailed information about Drupal, MySQL and PHP configuration, view the <a href="/@url">System Info</a> module output.', array('@url' => 'admin/reports/systeminfo'));
  }

  $form['env']['report'] = array(
    '#type' => 'markup',
    '#value' => theme_table(array('', ''), $env)
  );
  $form['env']['ini'] = array(
    '#type' => 'fieldset',
    '#title' => t('PHP Configuration'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE
  );

  $ini = ini_get_all();
  $initable = array();
  foreach ($ini as $key => $value) {
    array_push($initable, array($key, $value['global_value'], $value['local_value']));
  }
  $form['env']['ini']['ini'] = array(
    '#type' => 'markup',
    '#value' => theme_table(array('', 'Global Value', 'Local Value'), $initable)
  );

  // Run/display performance metrics
  $form['perf'] = array(
    '#type' => 'fieldset',
    '#title' => t('Performance'),
    '#description' => t('Be aware that calculation of statistics will take some time. It is advisable to run during off-peak traffic hours.'),
  );
  if (variable_get('cache', 0) == 2) {
    $form['perf']['#description'] .= t('<br/><strong>Note!</strong> Because your site has Aggresive caching enabled, these statistics will be innacurate for anonymous users.');
  }
  $form['perf']['report'] = array(
    '#type' => 'markup',
    '#value' => theme_table(array('', ''), unserialize(variable_get('hosting_stats_perf', 'a:0:{}'))),
    '#suffix' => t('<div class="description"><strong>*</strong> Minimum and maximum time values of collected data, but not necessarily contiguous if recording was stopped and started.</div>')
  );
  if (user_access('administer hosting stats')) {
    $form['perf']['hosting_stats_update'] = array(
      '#type' => 'submit',
      '#value' => t('Calculate performance statistics'),
      '#submit' => array('hosting_stats_perf_stats'),
    );
  }

  // Run/display database metrics
  $form['db'] = array(
    '#type' => 'fieldset',
    '#title' => t('Database'),
    '#description' => t('Running calculations on very large databases may cause this page to fail. Run at off-peak hours.'),
  );
  $form['db']['report'] = array(
    '#type' => 'markup',
    '#value' => theme_table(array('', ''), unserialize(variable_get('hosting_stats_db', 'a:0:{}'))),
  );
  if (user_access('administer hosting stats')) {
    $form['db']['hosting_stats_update'] = array(
      '#type' => 'submit',
      '#value' => t('Calculate database statistics'),
      '#submit' => array('hosting_stats_db_stats'),
    );
  }

  // Run/display filesystem metrics
  $form['file'] = array(
    '#type' => 'fieldset',
    '#title' => t('Filesystem'),
    '#description' => t('Running calculations on very large file systems may cause this page to fail. Run at off-peak hours.'),
  );
  $form['file']['report'] = array(
    '#type' => 'markup',
    '#value' => theme_table(array('', ''), unserialize(variable_get('hosting_stats_file', 'a:0:{}'))),
  );
  if (user_access('administer hosting stats')) {
    $form['file']['hosting_stats_update'] = array(
      '#type' => 'submit',
      '#value' => t('Calculate filesystem statistics'),
      '#submit' => array('hosting_stats_file_stats'),
    );

    // Run all calculations
    $form['hosting_stats_allstats'] = array(
      '#type' => 'submit',
      '#value' => t('Calculate all statistics'),
      '#submit' => array('hosting_stats_perf_stats', 'hosting_stats_db_stats', 'hosting_stats_file_stats'),
    );

    // Send report
    $form['hosting_stats_send'] = array(
      '#type' => 'button',
      '#value' => t('Send data to host'),
      '#ahah' => array(
        // 'event' => 'click',
        'path' => 'admin/reports/hosting_stats/summary',
        // 'method' => 'replace',
        'wrapper' => 'hosting-stats-emailed',
        'progress' => array('type' => 'bar', 'message' => t('Please wait...')),
      )
    );

    // Clear hosting_stats_log table
    $form['hosting_stats_clear'] = array(
      '#type' => 'submit',
      '#value' => t('Clear performance log'),
      '#submit' => array('hosting_stats_clearlog'),
    );

    // AHAH wrapper
    $form['hosting_stats_result'] = array(
      '#type' => 'markup',
      '#value' => '<div id="hosting-stats-emailed"></div>'
    );

  }

  return $form;
}

/**
 * Calculate performance statistics and save to variable.
 * TODO: Split these into chunks with db_query_range and aggregate to avoid
 * timeouts? Works OK so far with < 1 million rows.
 */
function hosting_stats_perf_stats() {
  // Get number of requests per second from log table
  $result = db_query("SELECT COUNT(*) AS req FROM {hosting_stats_log} GROUP BY timestamp");
  $reqs = array();
  while ($row = db_fetch_object($result)) {
    array_push($reqs, $row->req);
  }

  // Get requests per user type: anonymous vs authenticated
  $result = db_query("SELECT usertype, COUNT(*) AS req FROM {hosting_stats_log} GROUP BY usertype");
  $usercounts = array(0, 0);
  while ($row = db_fetch_object($result)) {
    if ($row->usertype == 0) {
      $usercounts[0] = $row->req;
    }
    else {
      $usercounts[1] = $row->req;
    }
  }

  // Total requests recorded
  $totalreqs = db_result(db_query("SELECT count(*) from {hosting_stats_log}"));
  $starttime = db_result(db_query("SELECT MIN(timestamp) from {hosting_stats_log}"));
  $endtime = db_result(db_query("SELECT MAX(timestamp) from {hosting_stats_log}"));

  $stats = array();
  array_push(
    $stats,
    array('Logging window *', date("D, j M, Y, G:i:s", $starttime) . ' - ' . date("D, j M, Y, G:i:s", $endtime)),
    array('Total logging time', round(sizeof($reqs) / 60 / 60, 2) . " hours"),
    array('Logged requests', $totalreqs)
  );
  if ($usercounts[0]) {
    array_push(
      $stats,
      array('Anonymous requests', $usercounts[0] . " (" . round($usercounts[0] / $totalreqs * 100, 2) . "%)")
    );
  }
  if ($usercounts[1]) {
    array_push(
      $stats,
      array('Authenticated requests', $usercounts[1] . " (" . round($usercounts[1] / $totalreqs * 100, 2) . "%)")
    );
  }
  if ($reqs) {
    array_push(
      $stats,
      array('Maximum load', max($reqs) . " req/sec"),
      array('Minimum load', min($reqs) . " req/sec"),
      array('Average load', round(array_sum($reqs) / sizeof($reqs), 1) . " req/sec")
    );
  }
  variable_set("hosting_stats_perf", serialize($stats));
}

/**
 * Calculate DB statistics and save to variable
 */
function hosting_stats_db_stats() {
  // Node & user counts
  $ncount = db_result(db_query("SELECT COUNT(*) FROM {node}"));
  $ucount = db_result(db_query("SELECT COUNT(*) FROM {users}"));
  // Database size and missing indexes
  $noindex = array();
  $dbsize = 0;
  $query = db_query("SHOW TABLE STATUS");
  while ($row = db_fetch_array($query)) {
    if ($row['Name'] != 'hosting_stats_log') {
      $dbsize += $row['Index_length'];
      $dbsize += $row['Data_length'];
      // Check indicies
      if (!db_result(db_query("SHOW INDEX FROM %s", $row['Name']))) {
        array_push($noindex, $row['Name']);
      }
    }
  }

  // Stats array to return
  $stats = array();

  $query = db_query("SHOW STATUS");
  while ($row = db_fetch_array($query)) {
    if (in_array($row['Variable_name'], array('Slow_queries', 'Threads_running', 'Queries', 'Uptime', 'Questions', 'Open_tables'))) {
      array_push($stats, array(str_replace("_", " ", $row['Variable_name']), $row['Value']));
    }
  }

  array_push(
    $stats,
    array('Total nodes', $ncount),
    array('Total users', $ucount),
    array('Database size (excluding hosting stats table)', round($dbsize / 1024 / 1024, 2) . " MB"),
    array('Tables without index', implode(", ", $noindex))
  );
  variable_set("hosting_stats_db", serialize($stats));
}

/**
 * Calculate filesystem statistics and save to variable.
 */
function hosting_stats_file_stats() {
  // File size and count, supporting drush too
  $files = file_scan_directory(file_directory_path(), ".*");
  $fsize = 0;
  $fcount = 0;
  foreach ($files as $file) {
    try {
      $fsize += filesize($file->filename);
      $fcount++;
    } catch (Exception $e) {
      
    }
  }
  $stats = array();
  array_push(
    $stats,
    array('Total Files', $fcount),
    array('Total File Size', round($fsize / 1024 / 1024, 2) . " MB")
  );
  variable_set("hosting_stats_file", serialize($stats));
}

/**
 * Clear contents of log table
 */
function hosting_stats_clearlog() {
  db_query("TRUNCATE TABLE {hosting_stats_log}");
}