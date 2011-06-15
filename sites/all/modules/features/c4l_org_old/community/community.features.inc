<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function community_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function community_node_info() {
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
      'help' => t('<br />
'),
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
      'help' => t('<br />
'),
    ),
    'group_announcement' => array(
      'name' => t('Group Announcement'),
      'module' => 'features',
      'description' => t('Brief message to be posted at the top of group pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Message'),
      'min_word_count' => '0',
      'help' => t('Brief message to be posted at top of group pages.'),
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
      'help' => t('<br />
'),
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
      'help' => t('<br />
'),
    ),
  );
  return $items;
}
