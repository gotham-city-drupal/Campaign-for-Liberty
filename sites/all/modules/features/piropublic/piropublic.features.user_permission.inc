<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function piropublic_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: access site-wide contact form
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer mollom
  $permissions['administer mollom'] = array(
    'name' => 'administer mollom',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: administer redirects
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: administer site-wide contact form
  $permissions['administer site-wide contact form'] = array(
    'name' => 'administer site-wide contact form',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: bypass mollom protection
  $permissions['bypass mollom protection'] = array(
    'name' => 'bypass mollom protection',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

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

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'administrator',
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

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
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

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
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

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
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

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'staff',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      '0' => 'administrator',
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

  // Exported permission: manipulate queues
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
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

  // Exported permission: view original images
  $permissions['view original images'] = array(
    'name' => 'view original images',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
