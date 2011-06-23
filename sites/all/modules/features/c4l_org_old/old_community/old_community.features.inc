<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function old_community_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function old_community_imagecache_default_presets() {
  $items = array(
    'group_thumb' => array(
      'presetname' => 'group_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '60',
            'height' => '60',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function old_community_node_info() {
  $items = array(
    'country' => array(
      'name' => t('Country Group'),
      'module' => 'features',
      'description' => t('To add a country group'),
      'has_title' => '1',
      'title_label' => t('Country Name'),
      'has_body' => '1',
      'body_label' => t('Country Profile'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'county' => array(
      'name' => t('County Group'),
      'module' => 'features',
      'description' => t('To add a county group'),
      'has_title' => '1',
      'title_label' => t('County Name'),
      'has_body' => '1',
      'body_label' => t('County Profile'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'region' => array(
      'name' => t('Regional Group'),
      'module' => 'features',
      'description' => t('To add a regional group'),
      'has_title' => '1',
      'title_label' => t('Region Name'),
      'has_body' => '1',
      'body_label' => t('Region Profile'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'state' => array(
      'name' => t('State Group'),
      'module' => 'features',
      'description' => t('to add a state group'),
      'has_title' => '1',
      'title_label' => t('State Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function old_community_views_api() {
  return array(
    'api' => '2',
  );
}
