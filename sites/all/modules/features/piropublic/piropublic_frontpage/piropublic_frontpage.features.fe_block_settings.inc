<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function piropublic_frontpage_default_fe_block_settings() {
  $export = array();

  // admin_theme
  $theme = array();

  $theme['block-get_involved'] = array(
    'module' => 'block',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'get_involved',
  );

  $theme['block-get_local'] = array(
    'module' => 'block',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Get Local',
    'cache' => '-1',
    'machine_name' => 'get_local',
  );

  $theme['block-social_media'] = array(
    'module' => 'block',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Stay Connected',
    'cache' => '-1',
    'machine_name' => 'social_media',
  );

  $theme['views-frontpage_banner-block_1'] = array(
    'module' => 'views',
    'delta' => 'frontpage_banner-block_1',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['admin_theme'] = $theme;

  // liberty
  $theme = array();

  $theme['block-get_involved'] = array(
    'module' => 'block',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '-3',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'get_involved',
  );

  $theme['block-get_local'] = array(
    'module' => 'block',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '-1',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Get Local',
    'cache' => '-1',
    'machine_name' => 'get_local',
  );

  $theme['block-social_media'] = array(
    'module' => 'block',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '4',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Stay Connected',
    'cache' => '-1',
    'machine_name' => 'social_media',
  );

  $theme['views-frontpage_banner-block_1'] = array(
    'module' => 'views',
    'delta' => 'frontpage_banner-block_1',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '6',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
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
