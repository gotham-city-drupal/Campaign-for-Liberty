<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function piropublic_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: create farticle content
  $permissions['create farticle content'] = array(
    'name' => 'create farticle content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: create fauthor content
  $permissions['create fauthor content'] = array(
    'name' => 'create fauthor content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: delete any farticle content
  $permissions['delete any farticle content'] = array(
    'name' => 'delete any farticle content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: delete any fauthor content
  $permissions['delete any fauthor content'] = array(
    'name' => 'delete any fauthor content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: delete own farticle content
  $permissions['delete own farticle content'] = array(
    'name' => 'delete own farticle content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: delete own fauthor content
  $permissions['delete own fauthor content'] = array(
    'name' => 'delete own fauthor content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: edit any farticle content
  $permissions['edit any farticle content'] = array(
    'name' => 'edit any farticle content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: edit any fauthor content
  $permissions['edit any fauthor content'] = array(
    'name' => 'edit any fauthor content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: edit own farticle content
  $permissions['edit own farticle content'] = array(
    'name' => 'edit own farticle content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: edit own fauthor content
  $permissions['edit own fauthor content'] = array(
    'name' => 'edit own fauthor content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  return $permissions;
}
