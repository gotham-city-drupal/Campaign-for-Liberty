<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function old_community_user_default_permissions() {
  $permissions = array();

  // Exported permission: broadcast to all groups
  $permissions['broadcast to all groups'] = array(
    'name' => 'broadcast to all groups',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: create country content
  $permissions['create country content'] = array(
    'name' => 'create country content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'state coordinator',
    ),
  );

  // Exported permission: create county content
  $permissions['create county content'] = array(
    'name' => 'create county content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'state coordinator',
    ),
  );

  // Exported permission: create region content
  $permissions['create region content'] = array(
    'name' => 'create region content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'state coordinator',
    ),
  );

  // Exported permission: create state content
  $permissions['create state content'] = array(
    'name' => 'create state content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'state coordinator',
    ),
  );

  // Exported permission: delete any country content
  $permissions['delete any country content'] = array(
    'name' => 'delete any country content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any county content
  $permissions['delete any county content'] = array(
    'name' => 'delete any county content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any region content
  $permissions['delete any region content'] = array(
    'name' => 'delete any region content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any state content
  $permissions['delete any state content'] = array(
    'name' => 'delete any state content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own country content
  $permissions['delete own country content'] = array(
    'name' => 'delete own country content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own county content
  $permissions['delete own county content'] = array(
    'name' => 'delete own county content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own region content
  $permissions['delete own region content'] = array(
    'name' => 'delete own region content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own state content
  $permissions['delete own state content'] = array(
    'name' => 'delete own state content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit all groups
  $permissions['edit all groups'] = array(
    'name' => 'edit all groups',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: edit any country content
  $permissions['edit any country content'] = array(
    'name' => 'edit any country content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: edit any county content
  $permissions['edit any county content'] = array(
    'name' => 'edit any county content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'county coordinator',
      '2' => 'headquarters',
      '3' => 'staff',
      '4' => 'state coordinator',
    ),
  );

  // Exported permission: edit any region content
  $permissions['edit any region content'] = array(
    'name' => 'edit any region content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'region coordinator',
      '3' => 'staff',
      '4' => 'state coordinator',
    ),
  );

  // Exported permission: edit any state content
  $permissions['edit any state content'] = array(
    'name' => 'edit any state content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
      '3' => 'state coordinator',
    ),
  );

  // Exported permission: edit own country content
  $permissions['edit own country content'] = array(
    'name' => 'edit own country content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'state coordinator',
    ),
  );

  // Exported permission: edit own county content
  $permissions['edit own county content'] = array(
    'name' => 'edit own county content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'state coordinator',
    ),
  );

  // Exported permission: edit own region content
  $permissions['edit own region content'] = array(
    'name' => 'edit own region content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'state coordinator',
    ),
  );

  // Exported permission: edit own state content
  $permissions['edit own state content'] = array(
    'name' => 'edit own state content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: invite to all groups
  $permissions['invite to all groups'] = array(
    'name' => 'invite to all groups',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: manage all coordinators
  $permissions['manage all coordinators'] = array(
    'name' => 'manage all coordinators',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: promote to my groups
  $permissions['promote to my groups'] = array(
    'name' => 'promote to my groups',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'county coordinator',
      '2' => 'local coordinator',
      '3' => 'region coordinator',
      '4' => 'state coordinator',
    ),
  );

  // Exported permission: remove from group
  $permissions['remove from group'] = array(
    'name' => 'remove from group',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: subscribe to content in groups
  $permissions['subscribe to content in groups'] = array(
    'name' => 'subscribe to content in groups',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
