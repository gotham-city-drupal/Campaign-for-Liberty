<?php

/**
 * OG create admin form
 */
function piropublic_community_promote_member_confirm($form_state, $node, $account, $type) {
  $form['node'] = array('#type' => 'value', '#value' => $node);
  $form['account'] = array('#type' => 'value', '#value' => $account);

  // group type and associated role id
  $form['type'] = array('#type' => 'value', '#value' => $type);
  $form['rid'] = array('#type' => 'value', '#value' => array_search($type . ' coordinator', user_roles(), TRUE));

  return confirm_form($form,
           t('Are you sure you want to make !name a !type Coordinator for !title?', array('!name' => theme('username', $account), '!type' => ucwords($type), '!title' => $node->title)),
           "node/$node->nid",
           ' ',
           t('Confirm'),
           t('Cancel'));
}

/**
 * Confirm og create admin form
 */
function piropublic_community_promote_member_confirm_submit($form, &$form_state) {
  $account = $form_state['values']['account'];
  $node = $form_state['values']['node'];
  $type = $form_state['values']['type'];
  $rid = $form_state['values']['rid'];

  if (!isset($account->roles[$rid])) {
    db_query('INSERT INTO {users_roles} (uid, rid) VALUES (%d, %d)', $account->uid, $rid);
  }

  og_save_subscription($node->nid, $account->uid, array('is_admin' => 1, 'is_active' => 1));

  if ($type == 'state') {
    piropublic_community_promote_state_coordinator($node->nid, $account->uid);
  }

  drupal_set_message(t('%name is now a !type Coordinator for !title.', array('%name' => $account->name, '!type' => ucwords($type), '!title' => $node->title)));

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
  $form_state['#redirect'] = "$node->nid";
}

/**
 * OG remove admin form
 */
function piropublic_community_demote_member_confirm($form_state, $node, $account, $type) {
  $form['gid'] = array('#type' => 'value', '#value' => $node->nid);
  $form['title'] = array('#type' => 'value', '#value' => $node->title);
  $form['account'] = array('#type' => 'value', '#value' => $account);

  // group type and associated role id
  $form['type'] = array('#type' => 'value', '#value' => $type);
  $form['rid'] = array('#type' => 'value', '#value' => array_search($type . ' coordinator', user_roles(), TRUE));

  return confirm_form($form,
    t('Are you sure you want to remove !name as a !type Coordinator for !title?', array('!name' => theme('username', $account), '!type' => ucwords($type), '!title' => $node->title)),
    "$node->nid",
    ' ',
    t('Remove'),
    t('Cancel')
  );
}

/**
 * Confirm og remove admin form
 */
function piropublic_community_demote_member_confirm_submit($form, &$form_state) {
  $account = $form_state['values']['account'];
  $gid = $form_state['values']['gid'];
  $type = $form_state['values']['type'];
  $rid = $form_state['values']['rid'];
  $title = $form_state['values']['title'];

  if (isset($account->roles[$rid])) {
    db_query('DELETE FROM {users_roles} WHERE uid = %d AND rid = %d', $account->uid, $rid);
  }

  og_save_subscription($gid, $account->uid, array('is_admin' => 0, 'is_active' => 1));

  if ($type == 'state') {
    piropublic_community_remove_state_coordinator($gid, $account->uid);
  }

  drupal_set_message(t('%name is no longer a !type Coordinator for !title.', array('%name' => $account->name, '!type' => ucwords($type), '!title' => $title)));
  $form_state['redirect'] = "$node->nid";
}

/**
 * function for promoting a state coordinator
 *
 * adds member to all sub groups of state
 *
 */
function piropublic_community_promote_state_coordinator($nid, $uid) {
  //update subscriptions for state subgroups that user is already a member of
  $notin = 'SELECT c.nid, n.title
                    FROM content_field_og_state c, node n
                    WHERE field_og_state_nid = %d
                    AND c.nid = n.nid';
  $result = db_query($notin, $nid, $uid);

  while($row = db_fetch_object($result)) {
    og_save_subscription($row->nid, $uid, array('is_admin' => 1, 'is_active' => 1));
  }
}

/**
 * function for promoting a state coordinator
 *
 * adds member to all sub groups of state
 *
 */
function piropublic_community_remove_state_coordinator($nid, $uid) {
  //update subscriptions for state subgroups that user is already a member of

  $groups = 'SELECT c.nid, n.title, n.type
                  FROM content_field_og_state c, node n
                  WHERE field_og_state_nid = %d
                  AND c.nid = n.nid
                  AND c.nid
                  IN (SELECT nid FROM og_uid WHERE uid = %d)';
  $result = db_query($groups, $nid, $uid);

  $settings_node = node_load(array('uid' => $uid, 'type' => 'settings', 'status' => 1));

  while($row = db_fetch_object($result)) {
    if ($row->type=='region') {
      if (($row->nid)!=($settings_node->field_prof_region[0]['nid'])) {
        og_delete_subscription($row->nid, $uid);
      }
    }
    elseif ($row->type=='county') {
      if (($row->nid)!=($settings_node->field_prof_county[0]['nid'])) {
        og_delete_subscription($row->nid, $uid);
      }
    }
  }
}


