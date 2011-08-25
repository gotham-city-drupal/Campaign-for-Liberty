<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function piropublic_media_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:media/featured_article
  $menu_links['primary-links:media/featured_article'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'media/featured_article',
    'router_path' => 'media/featured_article',
    'link_title' => 'Featured Articles',
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
    'parent_path' => 'node/6018',
    'parent_uuid' => '4e23ba37-cf29-11e0-be4c-a9b89ff3e49c',
  );
  // Exported menu link: secondary-links:featured_author
  $menu_links['secondary-links:featured_author'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'featured_author',
    'router_path' => 'featured_author',
    'link_title' => 'Featured Authors',
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
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Articles');
  t('Featured Authors');


  return $menu_links;
}
