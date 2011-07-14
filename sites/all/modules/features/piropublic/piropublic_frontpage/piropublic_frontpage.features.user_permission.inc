<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function piropublic_frontpage_user_default_permissions() {
  $permissions = array();

  // Exported permission: create featured_blocks content
  $permissions['create featured_blocks content'] = array(
    'name' => 'create featured_blocks content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: create frontpage_banner content
  $permissions['create frontpage_banner content'] = array(
    'name' => 'create frontpage_banner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: delete any featured_blocks content
  $permissions['delete any featured_blocks content'] = array(
    'name' => 'delete any featured_blocks content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: delete any frontpage_banner content
  $permissions['delete any frontpage_banner content'] = array(
    'name' => 'delete any frontpage_banner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: delete own featured_blocks content
  $permissions['delete own featured_blocks content'] = array(
    'name' => 'delete own featured_blocks content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any featured_blocks content
  $permissions['edit any featured_blocks content'] = array(
    'name' => 'edit any featured_blocks content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: edit any frontpage_banner content
  $permissions['edit any frontpage_banner content'] = array(
    'name' => 'edit any frontpage_banner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: edit own featured_blocks content
  $permissions['edit own featured_blocks content'] = array(
    'name' => 'edit own featured_blocks content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'staff',
    ),
  );

  // Exported permission: manage frontpage_banner cycle order
  $permissions['manage frontpage_banner cycle order'] = array(
    'name' => 'manage frontpage_banner cycle order',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: view imagecache featured_block
  $permissions['view imagecache featured_block'] = array(
    'name' => 'view imagecache featured_block',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache frontpage_banner
  $permissions['view imagecache frontpage_banner'] = array(
    'name' => 'view imagecache frontpage_banner',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  return $permissions;
}
