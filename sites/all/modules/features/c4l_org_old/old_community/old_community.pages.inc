<?php

/**
 * OG create admin form
 */
function old_profile_promote_member_confirm($form_state, $node, $account, $type) {
  $form['node'] = array('#type' => 'value', '#value' => $node);
  $form['account'] = array('#type' => 'value', '#value' => $account);

  // group type and associated role id
  $form['type'] = array('#type' => 'value', '#value' => $type);
  $form['rid'] = array('#type' => 'value', '#value' => array_search($type . ' coordinator', user_roles(), TRUE));

  return confirm_form($form,
           t('Are you sure you want to make !name a !type Coordinator of !title?', array('!name' => theme('username', $account), '!type' => ucwords($type), '!title' => $node->title)),
           "og/users/$node->nid",
           ' ',
           t('Confirm'),
           t('Cancel'));
  }

/**
 * Confirm og create admin form
 */
function old_profile_promote_member_confirm_submit($form, &$form_state) {
  $account = $form_state['values']['account'];
  $node = $form_state['values']['node'];
  $type = $form_state['values']['type'];
  $rid = $form_state['values']['rid'];

  if (!isset($account->roles[$rid])) {
    db_query('INSERT INTO {users_roles} (uid, rid) VALUES (%d, %d)', $account->uid, $rid);
  }

  og_save_subscription($node->nid, $account->uid, array('is_admin' => 1));

  if ($type == 'state') {
     print "yes";

     $settings_node = node_load(array('uid' => $account->uid, 'type' => 'settings', 'status' => 1));

     //NOW LETS INSERT ALL THOSE OTHERS
      $q = 'SELECT c.nid AS NID
        FROM content_field_og_state c, node n
        WHERE field_og_state_nid = ' . $node->nid . '
          AND c.nid = n.nid
          AND c.nid NOT IN (
          SELECT nid
          FROM og_uid
          WHERE uid = ' . $account->uid . ')';

      $result = db_query($q);

      while($row = db_fetch_object($result)){
        //| nid  | og_role | is_active | is_admin | uid  | created    | changed    |
        //$q2 = "INSERT INTO og_uid VALUES(" .  $row->NID . ", 0, 1, 1, " . $user_id . ", " . time() . ", " . time() .")";
        //$r2  = db_query($q2);
        print_r($row);
      }
   }
   else {

   }


  drupal_set_message($fuck.t('%name was promoted to <em>group administrator</em>.', array('%name' => $account->name)));

  $variables = array(
    '@group' => $node->title,
    '!group_url' => url("node/$node->nid", array('absolute' => TRUE)),
    '@username' => $account->name
  );

  $message = array(
    'subject' => _og_mail_text('og_new_admin_subject', $variables),
    'body' => _og_mail_text('og_new_admin_body', $variables)
  );

  module_invoke_all('og', 'admin new', $node->nid, $account->uid, $message);

  $form_state['#redirect'] = "og/users/$node->nid";
}

/**
 * OG remove admin form
 */
function old_profile_demote_member_confirm($form_state, $node, $account, $type) {
  $form['gid'] = array('#type' => 'value', '#value' => $node->nid);
  $form['account'] = array('#type' => 'value', '#value' => $account);


  // group type and associated role id
  $form['type'] = array('#type' => 'value', '#value' => $type);
  $form['rid'] = array('#type' => 'value', '#value' => array_search($type . ' coordinator', user_roles(), TRUE));

  return confirm_form($form,
    t('Are you sure you want to remove !name as a !type Coordinator of !title?', array('!name' => theme('username', $account), '!type' => ucwords($type), '!title' => $node->title)),
    "og/users/$node->nid",
    ' ',
    t('Remove'),
    t('Cancel')
  );
}

/**
 * Confirm og remove admin form
 */
function old_profile_demote_member_confirm_submit($form, &$form_state) {
  $account = $form_state['values']['account'];
  $gid = $form_state['values']['gid'];
  $type = $form_state['values']['type'];
  $rid = $form_state['values']['rid'];

  if (isset($account->roles[$rid])) {
    db_query('DELETE FROM {users_roles} WHERE uid = %d AND rid = %d', $account->uid, $rid);
  }

  og_save_subscription($gid, $account->uid, array('is_admin' => 0));

  if ($type == 'state') {
     print "yes";

     $settings_node = node_load(array('uid' => $account->uid, 'type' => 'settings', 'status' => 1));

     //NOW LETS INSERT ALL THOSE OTHERS
      $q = 'SELECT c.nid AS NID
        FROM content_field_og_state c, node n
        WHERE field_og_state_nid = ' . $node->nid . '
          AND c.nid = n.nid
          AND c.nid NOT IN (
          SELECT nid
          FROM og_uid
          WHERE uid = ' . $account->uid . ')';

      $result = db_query($q);

      while($row = db_fetch_object($result)){
        //| nid  | og_role | is_active | is_admin | uid  | created    | changed    |
        //$q2 = "INSERT INTO og_uid VALUES(" .  $row->NID . ", 0, 1, 1, " . $user_id . ", " . time() . ", " . time() .")";
        //$r2  = db_query($q2);
        print_r($row);
      }
   }
   else {

   }


  drupal_set_message(t('%name is no longer a <em>group administrator</em>.', array('%name' => $account->name)));
  $form_state['redirect'] = "og/users/$gid";
}


