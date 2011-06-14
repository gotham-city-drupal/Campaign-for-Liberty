<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function piropublic_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-authheader:contact
  $menu_links['menu-authheader:contact'] = array(
    'menu_name' => 'menu-authheader',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
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
    'weight' => '4',
  );
  // Exported menu link: menu-authheader:logout
  $menu_links['menu-authheader:logout'] = array(
    'menu_name' => 'menu-authheader',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '<br />
',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-footer:9b0988d8-87f4-11e0-b28c-9f89cf71cba4
  $menu_links['menu-footer:9b0988d8-87f4-11e0-b28c-9f89cf71cba4'] = array(
    'menu_name' => 'menu-footer',
    'router_path' => 'node/%',
    'link_title' => 'Terms of Use',
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
    'weight' => '-50',
    'uuid' => '9b0988d8-87f4-11e0-b28c-9f89cf71cba4',
  );
  // Exported menu link: menu-footer:contact
  $menu_links['menu-footer:contact'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
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
    'weight' => '-47',
  );
  // Exported menu link: menu-footer:f4cd1ce6-87f7-11e0-b28c-9f89cf71cba4
  $menu_links['menu-footer:f4cd1ce6-87f7-11e0-b28c-9f89cf71cba4'] = array(
    'menu_name' => 'menu-footer',
    'router_path' => 'node/%',
    'link_title' => 'Privacy Policy',
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
    'weight' => '-49',
    'uuid' => 'f4cd1ce6-87f7-11e0-b28c-9f89cf71cba4',
  );
  // Exported menu link: menu-header:contact
  $menu_links['menu-header:contact'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
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
    'weight' => '4',
  );
  // Exported menu link: menu-header:user
  $menu_links['menu-header:user'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '<br />
',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: primary-links:<front>
  $menu_links['primary-links:<front>'] = array(
    'menu_name' => 'primary-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Home');
  t('Login');
  t('Logout');
  t('Privacy Policy');
  t('Terms of Use');


  return $menu_links;
}
