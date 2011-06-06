<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function piropublic_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer
  $menus['menu-footer'] = array(
    'menu_name' => 'menu-footer',
    'title' => 'Footer Menu',
    'description' => 'This menu controls the small menu places in the site footer',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu');
  t('This menu controls the small menu places in the site footer');


  return $menus;
}
