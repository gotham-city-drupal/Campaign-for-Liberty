<?php
// $Id$

/**
 * @file
 * Administrative page callbacks for the qachecklist module.
 */

/**
 * Define the settings form.
 */
function qachecklist_admin_settings() {
  global $user;

  $form['save_above'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  // Fetch modules and groups from database.
  $query = "SELECT id, name, description FROM {qa_group} ORDER BY id";

  $result = db_query($query);
  $group_id = 0;

  // Every group is a fieldset.
  while ($data = db_fetch_object($result)) {
    $group_id = intval($data->id);

    $form['group_' . $group_id] = array(
      '#type' => 'fieldset',
      '#title' => t($data->name),
      '#collapsible' => TRUE,
      '#description' => t($data->description),
      '#group' => 'qachecklist',
    );

    $res = db_query("SELECT download, enable, configure, module, completed, id, name, uid FROM {qa_checklist} WHERE group_id = %d ORDER BY order_id", $group_id);
    while ($row = db_fetch_object($res)) {
      $row->links = array();

      if ($row->completed) {
        // Show when and who completed this task.
        $row->links[] = t('Completed on %date by !username', array('%date' => format_date($row->completed, 'small'), '!username' => theme('username', user_load($row->uid))));
      }
      else {
        // Show non-completed sub-tasks.
        if ($row->download) {
          $row->links[] = l(t('Download'), $row->download, array('attributes' => array('target' => '_blank')));
        }
        if ($row->enable) {
          $row->links[] = l(t('Enable'), $row->enable);
        }
      }

      if ($row->configure && (!$row->module || module_exists($row->module))) {
        // Show the link to configure if this isn't a module or module is enabled.
        $row->links[] = l(t('Configure'), $row->configure);
      }

      $task = $form['group_' . $group_id]['qachecklist_task_' . $row->id] = array(
        '#type' => 'checkbox',
        '#title' => t($row->name),
        '#default_value' => $row->completed || ($row->module && module_exists($row->module)),
        '#description' => join(' | ', $row->links),
      );
      if (strpos($row->name, 'Clean URLs') === 0) {
        $task['#disabled'] = !variable_get('clean_url', 0);
        $task['#default_value'] |= variable_get('clean_url', 0);
      }
    }
  }

  $form['extras'] = array(
    '#type' => 'fieldset',
    '#title' => t('Extras'),
    '#collapsible' => TRUE,
    '#group' => 'qachecklist',
  );
  $form['extras']['qa_checklist_link'] = array(
    '#type' => 'checkbox',
    '#title' => t('Link to InteractiveQA to thank them for this module.'),
    '#default_value' => variable_get('qa_checklist_link', 0),
    '#description' => t('A small link will appear at the very bottom of your website. You can disable it at any time by un-checking this box. We really appreciate it!'),
  );
  $form['extras']['qa_checklist_thanks'] = array(
    '#type' => 'checkbox',
    '#title' => t('Thank you for using the QA Checklist. If you need professional QA for your site, contact us at <a href="@iqa">@iqa</a>.', array('@iqa' => 'interactiveqa.com')),
    '#default_value' => variable_get('qa_checklist_thanks', 0),
    '#description' => t(''),
  );

  $form['save'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#weight' => 100,
  );

  if (module_exists('vertical_tabs')) {
    $form['#pre_render'][] = 'vertical_tabs_form_pre_render';
    $form['save_above']['#attributes']['class'] = 'js-hide';
  }
  else {
    drupal_set_message(t('Your QA Checklist interface (in addition to your content and content type edit pages) will be greatly enhanced by installing the <a href="@vertical-tabs">Vertical Tabs module</a>.', array('@vertical-tabs' => 'http://drupal.org/project/vertical_tabs')), 'status', FALSE);
  }

  return $form;
}

/**
 * Submit callback for qachecklist_admin_settings().
 */
function qachecklist_admin_settings_submit($form, &$form_state) {
  global $user;

  $count = 0;
  foreach ($form_state['values'] as $key => $value) {
    if (preg_match('/qachecklist_task_/', $key)) {
      $key = explode('_', $key);
      $key = $key[2];
      $current = (bool) db_result(db_query("SELECT completed FROM {qa_checklist} WHERE id = %d", $key));
      if ($current != $value) {
        // If the checkbox changed states, update the record.
        db_query("UPDATE {qa_checklist} SET completed = %d, uid = %d WHERE id = %d", ($value ? time() : 0), $user->uid, $key);
        $count++;
      }
    }
  }

  // Special values not in database.
  variable_set('qa_checklist_link', $form_state['values']['qa_checklist_link']);
  variable_set('qa_checklist_thanks', $form_state['values']['qa_checklist_thanks']);

  drupal_set_message(format_plural($count, 'Updated @count task successfully.', 'Updated @count tasks successfully.'));
}
