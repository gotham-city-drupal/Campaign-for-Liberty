<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function piropublic_community_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

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

  // Exported permission: create memblog content
  $permissions['create memblog content'] = array(
    'name' => 'create memblog content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create personal content
  $permissions['create personal content'] = array(
    'name' => 'create personal content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create profile content
  $permissions['create profile content'] = array(
    'name' => 'create profile content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create profpic content
  $permissions['create profpic content'] = array(
    'name' => 'create profpic content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
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

  // Exported permission: create settings content
  $permissions['create settings content'] = array(
    'name' => 'create settings content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
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

  // Exported permission: delete any memblog content
  $permissions['delete any memblog content'] = array(
    'name' => 'delete any memblog content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: delete any personal content
  $permissions['delete any personal content'] = array(
    'name' => 'delete any personal content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any profile content
  $permissions['delete any profile content'] = array(
    'name' => 'delete any profile content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any profpic content
  $permissions['delete any profpic content'] = array(
    'name' => 'delete any profpic content',
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

  // Exported permission: delete any settings content
  $permissions['delete any settings content'] = array(
    'name' => 'delete any settings content',
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

  // Exported permission: delete own memblog content
  $permissions['delete own memblog content'] = array(
    'name' => 'delete own memblog content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete own personal content
  $permissions['delete own personal content'] = array(
    'name' => 'delete own personal content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own profile content
  $permissions['delete own profile content'] = array(
    'name' => 'delete own profile content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own profpic content
  $permissions['delete own profpic content'] = array(
    'name' => 'delete own profpic content',
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

  // Exported permission: delete own settings content
  $permissions['delete own settings content'] = array(
    'name' => 'delete own settings content',
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

  // Exported permission: edit any memblog content
  $permissions['edit any memblog content'] = array(
    'name' => 'edit any memblog content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'county coordinator',
      '2' => 'headquarters',
      '3' => 'local coordinator',
      '4' => 'region coordinator',
      '5' => 'staff',
      '6' => 'state coordinator',
    ),
  );

  // Exported permission: edit any personal content
  $permissions['edit any personal content'] = array(
    'name' => 'edit any personal content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: edit any profile content
  $permissions['edit any profile content'] = array(
    'name' => 'edit any profile content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: edit any profpic content
  $permissions['edit any profpic content'] = array(
    'name' => 'edit any profpic content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
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

  // Exported permission: edit any settings content
  $permissions['edit any settings content'] = array(
    'name' => 'edit any settings content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
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

  // Exported permission: edit member blogs
  $permissions['edit member blogs'] = array(
    'name' => 'edit member blogs',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
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

  // Exported permission: edit own memblog content
  $permissions['edit own memblog content'] = array(
    'name' => 'edit own memblog content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own personal content
  $permissions['edit own personal content'] = array(
    'name' => 'edit own personal content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own profile content
  $permissions['edit own profile content'] = array(
    'name' => 'edit own profile content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own profpic content
  $permissions['edit own profpic content'] = array(
    'name' => 'edit own profpic content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
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

  // Exported permission: edit own settings content
  $permissions['edit own settings content'] = array(
    'name' => 'edit own settings content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
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

  // Exported permission: maintain own subscriptions
  $permissions['maintain own subscriptions'] = array(
    'name' => 'maintain own subscriptions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: manage county coordinators
  $permissions['manage county coordinators'] = array(
    'name' => 'manage county coordinators',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
      '3' => 'state coordinator',
    ),
  );

  // Exported permission: manage local coordinators
  $permissions['manage local coordinators'] = array(
    'name' => 'manage local coordinators',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'county coordinator',
      '2' => 'headquarters',
      '3' => 'staff',
      '4' => 'state coordinator',
    ),
  );

  // Exported permission: manage own subscriptions
  $permissions['manage own subscriptions'] = array(
    'name' => 'manage own subscriptions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: manage region coordinators
  $permissions['manage region coordinators'] = array(
    'name' => 'manage region coordinators',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
      '3' => 'state coordinator',
    ),
  );

  // Exported permission: manage state coordinators
  $permissions['manage state coordinators'] = array(
    'name' => 'manage state coordinators',
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

  // Exported permission: subscribe to content
  $permissions['subscribe to content'] = array(
    'name' => 'subscribe to content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: subscribe to content in groups
  $permissions['subscribe to content in groups'] = array(
    'name' => 'subscribe to content in groups',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache groupprof_pic
  $permissions['view imagecache groupprof_pic'] = array(
    'name' => 'view imagecache groupprof_pic',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache profile_pic
  $permissions['view imagecache profile_pic'] = array(
    'name' => 'view imagecache profile_pic',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache sidebar_thumb
  $permissions['view imagecache sidebar_thumb'] = array(
    'name' => 'view imagecache sidebar_thumb',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  return $permissions;
}
