<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function piropublic_default_fe_block_settings() {
  $export = array();

  // admin_theme
  $theme = array();

  $theme['block-footer_copyright'] = array(
    'module' => 'block',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
    'machine_name' => 'footer_copyright',
  );

  $theme['menu-menu-authheader'] = array(
    'module' => 'menu',
    'delta' => 'menu-authheader',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-menu-footer'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-menu-header'] = array(
    'module' => 'menu',
    'delta' => 'menu-header',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $export['admin_theme'] = $theme;

  // liberty
  $theme = array();

  $theme['block-footer_copyright'] = array(
    'module' => 'block',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '-24',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
    'machine_name' => 'footer_copyright',
  );

  $theme['menu-menu-authheader'] = array(
    'module' => 'menu',
    'delta' => 'menu-authheader',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '-26',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-menu-footer'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '27',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-menu-header'] = array(
    'module' => 'menu',
    'delta' => 'menu-header',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '-28',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $export['liberty'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
