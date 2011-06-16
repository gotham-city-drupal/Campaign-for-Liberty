<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function community_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:fa2f83a9-9446-11e0-88ba-e0e2cd5d67f0
  $menu_links['primary-links:fa2f83a9-9446-11e0-88ba-e0e2cd5d67f0'] = array(
    'menu_name' => 'primary-links',
    'router_path' => 'node/%',
    'link_title' => 'Community',
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
    'weight' => '-45',
    'uuid' => 'fa2f83a9-9446-11e0-88ba-e0e2cd5d67f0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Community');


  return $menu_links;
}
