<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function piropublic_about_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:about/board
  $menu_links['primary-links:about/board'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'about/board',
    'router_path' => 'about/board',
    'link_title' => 'Directors',
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
    'weight' => '0',
    'parent_path' => 'node/84',
    'parent_uuid' => 'fa2e7bb7-9446-11e0-88ba-e0e2cd5d67f0',
  );
  // Exported menu link: primary-links:about/faq
  $menu_links['primary-links:about/faq'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'about/faq',
    'router_path' => 'about/faq',
    'link_title' => 'FAQ',
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
    'parent_path' => 'node/84',
    'parent_uuid' => 'fa2e7bb7-9446-11e0-88ba-e0e2cd5d67f0',
  );
  // Exported menu link: primary-links:about/staff
  $menu_links['primary-links:about/staff'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'about/staff',
    'router_path' => 'about/staff',
    'link_title' => 'Staff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/84',
    'parent_uuid' => 'fa2e7bb7-9446-11e0-88ba-e0e2cd5d67f0',
  );
  // Exported menu link: primary-links:fa2e7bb7-9446-11e0-88ba-e0e2cd5d67f0
  $menu_links['primary-links:fa2e7bb7-9446-11e0-88ba-e0e2cd5d67f0'] = array(
    'menu_name' => 'primary-links',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
    'uuid' => 'fa2e7bb7-9446-11e0-88ba-e0e2cd5d67f0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Directors');
  t('FAQ');
  t('Staff');


  return $menu_links;
}
