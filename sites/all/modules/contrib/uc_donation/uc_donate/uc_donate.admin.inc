<?php
// $Id: uc_donate.admin.inc,v 1.1.2.4 2009/02/04 17:55:50 greenskin Exp $

function uc_donate_settings() {
  $form['uc_donate_description'] = array(
    '#type' => 'textarea',
    '#title' => t('Message'),
    '#description' => t('Set a message for at the top of the Donate page.'),
    '#default_value' => variable_get('uc_donate_description', '')
  );
  $form['uc_donate_empty_group_message'] = array(
    '#type' => 'textarea',
    '#title' => t('Message to admins when group is empty'),
    '#description' => t('Set a message to be displayed to admins in a group when the group does not contain any donate items. To disable empty groups from showing leave this blank.'),
    '#default_value' => variable_get('uc_donate_empty_group_message', t('No donation products have been added to this group.'))
  );
  $form['uc_donate_add'] = array(
    '#type' => 'textfield',
    '#title' => t('Add to Cart Name'),
    '#description' => t('Set the button name for adding the donation products to the cart then going to the cart.'),
    '#default_value' => variable_get('uc_donate_add', t('Add to Cart')),
    '#required' => TRUE
  );
  $form['uc_donate_checkout'] = array(
    '#type' => 'textfield',
    '#title' => t('Checkout Name'),
    '#description' => t('Set the button name for adding the donation products to the cart then proceeding to checkout.'),
    '#default_value' => variable_get('uc_donate_checkout', t('Checkout')),
    '#required' => TRUE
  );
  return system_settings_form($form);
}

function uc_donate_manage() {
  cache_clear_all('uc_donate:items', 'cache');

  $form = array('#tree' => TRUE);
  if ($tree = uc_donate_load()) {
    foreach ($tree as $item) {
      $donate_id = 'donate-id:'. $item['donate_id'];
      if ($item['nid']) {
        $node = node_load($item['nid']);
        $alias = drupal_get_path_alias('node/'. $node->nid);
        $title = l($node->title, $alias);
        $form[$donate_id]['#attributes']['class'] = 'tabledrag-leaf';
      }
      else {
        $title = $item['title'];
        $form[$donate_id]['#attributes']['class'] = 'tabledrag-root';
      }

      $form[$donate_id]['#item'] = $item;
      $form[$donate_id]['title']['#value'] = $title;
      $form[$donate_id]['type']['#value'] = $item['type'];
      $form[$donate_id]['weight'] = array(
        '#type' => 'weight',
        '#delta' => 10,
        '#default_value' => $item['weight']
      );
      $form[$donate_id]['donate_id'] = array(
        '#type' => 'hidden',
        '#value' => $item['donate_id']
      );
      $form[$donate_id]['nid'] = array(
        '#type' => 'hidden',
        '#value' => $item['nid']
      );
      $form[$donate_id]['pid'] = array(
        '#type' => 'textfield',
        '#default_value' => $item['pid'],
        '#size' => 6
      );
    }
  }
  $form['save'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration')
  );
  return $form;
}

function uc_donate_manage_submit($form, &$form_state) {
  $order = array_flip(array_keys($form['#post']));
  $form = array_merge($order, $form);

  $updated_items = array();
  $fields = array('weight', 'pid');
  foreach (element_children($form) as $donate_id) {
    if (isset($form[$donate_id]['#item'])) {
      $element = $form[$donate_id];
      foreach ($fields as $field) {
        if ($element[$field]['#value'] != $element[$field]['#default_value']) {
          $element['#item'][$field] = $element[$field]['#value'];
          $updated_items[$donate_id] = $element['#item'];
        }
      }
    }
  }

  foreach ($updated_items as $item) {
    db_query("UPDATE {uc_donate} SET pid = %d, weight = %d WHERE donate_id = %d", $item['pid'], $item['weight'], $item['donate_id']);
  }
}

function uc_donate_donation() {
  $result = db_query("SELECT n.nid FROM {node} AS n WHERE n.type = '%s' AND n.nid NOT IN (SELECT d.nid FROM {uc_donate} AS d)", 'donation');
  $options = array();
  while ($data = db_fetch_object($result)) {
    $node = node_load($data->nid);
    $options[$node->nid] = $node->title;
  }
  if (empty($options)) {
    $form['item'] = array(
      '#type' => 'item',
      '#value' => t('There are no donation products available to add. Either all donation products have been added to the donate page or no donation products have been created.')
    );
    return $form;
  }
  $form['nid'] = array(
    '#type' => 'select',
    '#title' => t('Donation product'),
    '#description' => t('Select the donation product to add to the donate page.'),
    '#options' => $options,
    '#required' => TRUE
  );
  $form['add'] = array(
    '#type' => 'submit',
    '#value' => t('Add')
  );
  return $form;
}

function uc_donate_donation_submit($form, &$form_state) {
  db_query("INSERT INTO {uc_donate} (nid, pid, type, weight) VALUES (%d, %d, '%s', %d)", $form_state['values']['nid'], 0, 'donation', 0);
  $form_state['redirect'] = 'admin/store/settings/donate/manage';
}

function uc_donate_group_form($form_state, $donate_id = FALSE) {
  if ($donate_id && is_numeric($donate_id)) {
    $edit = db_fetch_array(db_query("SELECT * FROM {uc_donate} WHERE donate_id = %d", $donate_id));
  }
  else {
    $edit = array('title' => '', 'pid' => '');
  }
  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#description' => t('Title for donate group.'),
    '#default_value' => $edit['title'],
    '#required' => TRUE
  );
  $form['donate_id'] = array(
    '#type' => 'hidden',
    '#value' => $edit['donate_id']
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => ($donate_id) ? t('Save') : t('Add')
  );
  return $form;
}

function uc_donate_group_form_submit($form, &$form_state) {
  if (!empty($form_state['values']['donate_id'])) {
    db_query("UPDATE {uc_donate} SET title = '%s' WHERE donate_id = %d", $form_state['values']['title'], $form_state['values']['donate_id']);
  }
  else {
    db_query("INSERT INTO {uc_donate} (nid, pid, type, title, weight) VALUES (%d, %d, '%s', '%s', %d)", 0, 0, 'group', $form_state['values']['title'], 0);
  }
  $form_state['redirect'] = 'admin/store/settings/donate/manage';
}

function uc_donate_add_queue() {
  $options = uc_donate_queues();
  
  if (isset($options[0])) {
    $form['info'] = array(
      '#type' => 'item',
      '#value' => 'Either no Node Queues have been created or all existing Node Queues have already been added. Go '.l(t('here'), 'admin/content/nodequeue/add').' to create a queue.'
    );
  } else {
    $form['queues'] = array(
      '#type' => 'select',
      '#title' => t('Node Queues'),
      '#description' => t('Select a queue to add to the Donate page.'),
      '#options' => $options
    );
    $form['add'] = array(
      '#type' => 'submit',
      '#value' => t('Add')
    );
  }
  
  return $form;
}

function uc_donate_add_queue_submit($form_id, $form_values) {
  if (isset($form_values['queues'])) {
    db_query("DELETE FROM {uc_donate} WHERE `group` = '%s'", $form_values['queues']);
    db_query("INSERT INTO {uc_donate} (nid, type) VALUES ('%s', '%s')", $form_values['queues'], 'queue');
  }
  return 'admin/store/settings/donate/manage';
}

function uc_donate_delete($form_state, $donate_id) {
  if (!is_numeric($donate_id)) {
    drupal_not_found();
    exit();
  }

  $item = db_fetch_array(db_query("SELECT * FROM {uc_donate} WHERE donate_id = %d", $donate_id));
  if ($item['nid'] > 0) {
    $node = node_load($item['nid']);
    $message = t("Are you sure you want to delete %name from the donate page?", array('%name' => $node->title));
  }
  else {
    $message = t("Are you sure you want to delete %name from the donate page? Any donation products inside this group will be preserved.", array('%name' => $item['title']));
  }
  $form['donate_id'] = array(
    '#type' => 'value',
    '#value' => $donate_id
  );

  return confirm_form($form,
    $message,
    'admin/store/settings/donate/manage',
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

function uc_donate_delete_submit($form, &$form_state) {
  db_query("UPDATE {uc_donate} SET pid = %d WHERE pid = %d", 0, $form_state['values']['donate_id']);
  db_query("DELETE FROM {uc_donate} WHERE donate_id = %d", $form_state['values']['donate_id']);
  drupal_set_message(t('Donate item deleted successfully.'));
  $form_state['redirect'] = 'admin/store/settings/donate/manage';
}

/*******************************************************************************
 * Theme Functions
 ******************************************************************************/

function theme_uc_donate_manage($form) {
  drupal_add_tabledrag('uc-donate-manage-table', 'match', 'parent', 'uc-donate-item-pid', 'uc-donate-item-pid', 'uc-donate-item-id');
  drupal_add_tabledrag('uc-donate-manage-table', 'order', 'sibling', 'uc-donate-item-weight');

  $headers = array(
    t('Title'),
    t('Type'),
    t('Weight'),
    t('Operations')
  );
  $rows = array();

  $links = array(
    'edit' => array(
      'title' => t('Edit'),
      'href' => ''
    ),
    'delete' => array(
      'title' => t('Delete'),
      'href' => ''
    )
  );

  foreach (element_children($form) as $donate_id) {
    if (isset($form[$donate_id]['weight'])) {
      $element = &$form[$donate_id];

      // Add classes for tabledrag.js
      $element['weight']['#attributes']['class'] = 'uc-donate-item-weight';
      $element['donate_id']['#attributes']['class'] = 'uc-donate-item-id';
      $element['pid']['#attributes']['class'] = 'uc-donate-item-pid';

      // Convert pid input type to hidden
      $element['pid']['#type'] = 'hidden';

      $row = array();
      $row[] = theme('indentation', ($element['pid']['#value']) ? 1 : 0) . drupal_render($element['title']);
      $row[] = drupal_render($element['type']);
      $row[] = drupal_render($element);

      // Make item specific changes to links before adding it to the row
      if ($element['nid']['#value'] > 0) {
        $links['edit']['href'] = 'node/'. $element['nid']['#value'] .'/edit';
        $links['edit']['query'] = drupal_get_destination();
        $links['delete']['href'] = 'admin/store/settings/donate/manage/delete/'. $element['donate_id']['#value'];
      }
      else {
        $links['edit']['href'] = 'admin/store/settings/donate/manage/group/'. $element['donate_id']['#value'];
        $links['delete']['href'] = 'admin/store/settings/donate/manage/delete/'. $element['donate_id']['#value'];
        if (isset($links['edit']['query'])) unset($links['edit']['query']);
      }
      $row[] = theme('links', $links);

      // Donation products can not have children and likewise groups can not have parents
      $class = ($element['nid']['#value'] > 0) ? 'draggable tabledrag-leaf' : 'draggable tabledrag-root';
      $rows[] = array(
        'data' => $row,
        'class' => $class
      );
    }
  }

  if (empty($rows)) {
    return t('No donate items have been added.');
  }

  $output = theme('table', $headers, $rows, array('id' => 'uc-donate-manage-table'));
  $output .= drupal_render($form);
  return $output;
}
