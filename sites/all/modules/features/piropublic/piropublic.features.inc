<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function piropublic_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_default_fe_nodequeue_queue().
 */
function piropublic_default_fe_nodequeue_queue() {
  $export = array();

  $fe_nodequeue_queue = new stdClass;
  $fe_nodequeue_queue->name = 'frontpage_banner_queue';
  $fe_nodequeue_queue->title = 'Frontpage Banner List';
  $fe_nodequeue_queue->subqueue_title = '';
  $fe_nodequeue_queue->size = '4';
  $fe_nodequeue_queue->link = 'add to front page banner';
  $fe_nodequeue_queue->link_remove = 'remove from banner';
  $fe_nodequeue_queue->owner = 'nodequeue';
  $fe_nodequeue_queue->show_in_ui = '1';
  $fe_nodequeue_queue->show_in_tab = '1';
  $fe_nodequeue_queue->show_in_links = '1';
  $fe_nodequeue_queue->reference = '0';
  $fe_nodequeue_queue->reverse = '1';
  $fe_nodequeue_queue->i18n = '0';
  $fe_nodequeue_queue->types = array(
    0 => 'frontpage_banner',
  );
  $fe_nodequeue_queue->roles = array(
    0 => '5',
    1 => '7',
  );
  $fe_nodequeue_queue->count = 0;
  $fe_nodequeue_queue->machine_name = 'frontpage_banner_queue';

  $export['frontpage_banner_queue'] = $fe_nodequeue_queue;

  return $export;
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function piropublic_imagecache_default_presets() {
  $items = array(
    'featured_block' => array(
      'presetname' => 'featured_block',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '165',
            'height' => '200',
          ),
        ),
      ),
    ),
    'frontpage_banner' => array(
      'presetname' => 'frontpage_banner',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '610',
            'height' => '350',
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
function piropublic_node_info() {
  $items = array(
    'featured_blocks' => array(
      'name' => t('Featured Blocks'),
      'module' => 'features',
      'description' => t('Images that jcarousel and link to other content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'frontpage_banner' => array(
      'name' => t('Frontpage Banner'),
      'module' => 'features',
      'description' => t('To add content to the front page banner'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('Provides a standard page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function piropublic_views_api() {
  return array(
    'api' => '2',
  );
}
