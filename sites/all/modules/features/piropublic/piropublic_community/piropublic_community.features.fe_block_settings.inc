<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function piropublic_community_default_fe_block_settings() {
  $export = array();

  // admin_theme
  $theme = array();

  $theme['views--exp-group_coordinators-page'] = array(
    'module' => 'views',
    'delta' => '-exp-group_coordinators-page',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Coordinator Search',
    'cache' => '1',
  );

  $theme['views--exp-group_members-page'] = array(
    'module' => 'views',
    'delta' => '-exp-group_members-page',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Member Search',
    'cache' => '1',
  );

  $export['admin_theme'] = $theme;

  // liberty
  $theme = array();

  $theme['views--exp-group_coordinators-page'] = array(
    'module' => 'views',
    'delta' => '-exp-group_coordinators-page',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '-16',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Coordinator Search',
    'cache' => '1',
  );

  $theme['views--exp-group_members-page'] = array(
    'module' => 'views',
    'delta' => '-exp-group_members-page',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '-12',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Member Search',
    'cache' => '1',
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
