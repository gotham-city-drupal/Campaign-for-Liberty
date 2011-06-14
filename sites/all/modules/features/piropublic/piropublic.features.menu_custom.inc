<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function piropublic_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-authheader
  $menus['menu-authheader'] = array(
    'menu_name' => 'menu-authheader',
    'title' => 'Auth Header',
    'description' => 'this is the header menu for authenticated users',
  );
  // Exported menu: menu-footer
  $menus['menu-footer'] = array(
    'menu_name' => 'menu-footer',
    'title' => 'Footer Menu',
    'description' => 'This menu controls the small menu places in the site footer',
  );
  // Exported menu: menu-header
  $menus['menu-header'] = array(
    'menu_name' => 'menu-header',
    'title' => 'Anon Header',
    'description' => 'This menu contains the header links for anonymous users',
  );
  // Exported menu: primary-links
  $menus['primary-links'] = array(
    'menu_name' => 'primary-links',
    'title' => 'Primary links',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Anon Header');
  t('Auth Header');
  t('Footer Menu');
  t('Primary links');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');
  t('This menu contains the header links for anonymous users');
  t('This menu controls the small menu places in the site footer');
  t('this is the header menu for authenticated users');


  return $menus;
}
