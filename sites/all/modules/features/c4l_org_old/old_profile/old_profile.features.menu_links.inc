<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function old_profile_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-authheader:messages
  $menu_links['menu-authheader:messages'] = array(
    'menu_name' => 'menu-authheader',
    'link_path' => 'messages',
    'router_path' => 'messages',
    'link_title' => 'Inbox',
    'options' => array(
      'attributes' => array(
        'title' => '<br />
',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-authheader:profile
  $menu_links['menu-authheader:profile'] = array(
    'menu_name' => 'menu-authheader',
    'link_path' => 'profile',
    'router_path' => 'profile',
    'link_title' => 'Profile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Inbox');
  t('Profile');


  return $menu_links;
}
