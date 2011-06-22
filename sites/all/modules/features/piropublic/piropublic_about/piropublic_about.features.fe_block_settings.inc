<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function piropublic_about_default_fe_block_settings() {
  $export = array();

  // admin_theme
  $theme = array();

  $theme['block-faq'] = array(
    'module' => 'block',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Have a Question? ',
    'cache' => '-1',
    'machine_name' => 'faq',
  );

  $theme['block-faq_question'] = array(
    'module' => 'block',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '2',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Don\'t See Your Question? ',
    'cache' => '-1',
    'machine_name' => 'faq_question',
  );

  $theme['block-mission_statement'] = array(
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
    'machine_name' => 'mission_statement',
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
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

  $theme['views--exp-faq-default'] = array(
    'module' => 'views',
    'delta' => '-exp-faq-default',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['views--exp-faq-page_1'] = array(
    'module' => 'views',
    'delta' => '-exp-faq-page_1',
    'theme' => 'admin_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Filter by Question Type',
    'cache' => '1',
  );

  $export['admin_theme'] = $theme;

  // liberty
  $theme = array();

  $theme['block-faq'] = array(
    'module' => 'block',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '-6',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Have a Question? ',
    'cache' => '-1',
    'machine_name' => 'faq',
  );

  $theme['block-faq_question'] = array(
    'module' => 'block',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '5',
    'region' => '',
    'custom' => '2',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Don\'t See Your Question? ',
    'cache' => '-1',
    'machine_name' => 'faq_question',
  );

  $theme['block-mission_statement'] = array(
    'module' => 'block',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '13',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'mission_statement',
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'liberty',
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

  $theme['views--exp-faq-default'] = array(
    'module' => 'views',
    'delta' => '-exp-faq-default',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '-8',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['views--exp-faq-page_1'] = array(
    'module' => 'views',
    'delta' => '-exp-faq-page_1',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '-7',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Filter by Question Type',
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
