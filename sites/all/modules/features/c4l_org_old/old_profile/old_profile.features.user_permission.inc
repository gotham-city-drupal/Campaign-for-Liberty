<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function old_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
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

  // Exported permission: create settings content
  $permissions['create settings content'] = array(
    'name' => 'create settings content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
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

  // Exported permission: delete any settings content
  $permissions['delete any settings content'] = array(
    'name' => 'delete any settings content',
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

  // Exported permission: delete own settings content
  $permissions['delete own settings content'] = array(
    'name' => 'delete own settings content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any memblog content
  $permissions['edit any memblog content'] = array(
    'name' => 'edit any memblog content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'county coordinator',
      '2' => 'headquarters',
      '3' => 'region coordinator',
      '4' => 'staff',
      '5' => 'state coordinator',
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

  // Exported permission: edit any settings content
  $permissions['edit any settings content'] = array(
    'name' => 'edit any settings content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
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

  // Exported permission: edit own settings content
  $permissions['edit own settings content'] = array(
    'name' => 'edit own settings content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
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
