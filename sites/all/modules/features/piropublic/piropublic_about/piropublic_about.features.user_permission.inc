<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function piropublic_about_user_default_permissions() {
  $permissions = array();

  // Exported permission: create faq content
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: create staff content
  $permissions['create staff content'] = array(
    'name' => 'create staff content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: delete any faq content
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: delete any staff content
  $permissions['delete any staff content'] = array(
    'name' => 'delete any staff content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: delete own faq content
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own frontpage_banner content
  $permissions['delete own frontpage_banner content'] = array(
    'name' => 'delete own frontpage_banner content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own staff content
  $permissions['delete own staff content'] = array(
    'name' => 'delete own staff content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any faq content
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: edit any staff content
  $permissions['edit any staff content'] = array(
    'name' => 'edit any staff content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: edit own faq content
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own frontpage_banner content
  $permissions['edit own frontpage_banner content'] = array(
    'name' => 'edit own frontpage_banner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own staff content
  $permissions['edit own staff content'] = array(
    'name' => 'edit own staff content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'staff',
      '2' => 'state coordinator',
    ),
  );

  // Exported permission: manage board of directors page
  $permissions['manage board of directors page'] = array(
    'name' => 'manage board of directors page',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: manage staff page
  $permissions['manage staff page'] = array(
    'name' => 'manage staff page',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: view imagecache staff_header_image
  $permissions['view imagecache staff_header_image'] = array(
    'name' => 'view imagecache staff_header_image',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache staff_image
  $permissions['view imagecache staff_image'] = array(
    'name' => 'view imagecache staff_image',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  return $permissions;
}
