<?php

/**
 * Implementation of hook_default_fe_nodequeue_queue().
 */
function piropublic_frontpage_default_fe_nodequeue_queue() {
  $export = array();

  $fe_nodequeue_queue = new stdClass;
  $fe_nodequeue_queue->name = 'frontpage_center';
  $fe_nodequeue_queue->title = 'Frontpage Center Column';
  $fe_nodequeue_queue->subqueue_title = '';
  $fe_nodequeue_queue->size = '3';
  $fe_nodequeue_queue->link = 'Add to front page center column';
  $fe_nodequeue_queue->link_remove = 'Remove from front page center column';
  $fe_nodequeue_queue->owner = 'nodequeue';
  $fe_nodequeue_queue->show_in_ui = '1';
  $fe_nodequeue_queue->show_in_tab = '1';
  $fe_nodequeue_queue->show_in_links = '1';
  $fe_nodequeue_queue->reference = '0';
  $fe_nodequeue_queue->reverse = '1';
  $fe_nodequeue_queue->i18n = '0';
  $fe_nodequeue_queue->types = array(
    0 => 'memblog',
  );
  $fe_nodequeue_queue->roles = array(
    0 => '7',
  );
  $fe_nodequeue_queue->count = 0;
  $fe_nodequeue_queue->machine_name = 'frontpage_center';

  $export['frontpage_center'] = $fe_nodequeue_queue;

  $fe_nodequeue_queue = new stdClass;
  $fe_nodequeue_queue->name = 'member_posts';
  $fe_nodequeue_queue->title = 'Member Posts';
  $fe_nodequeue_queue->subqueue_title = '';
  $fe_nodequeue_queue->size = '8';
  $fe_nodequeue_queue->link = 'Add to member posts';
  $fe_nodequeue_queue->link_remove = 'Remove from member posts';
  $fe_nodequeue_queue->owner = 'nodequeue';
  $fe_nodequeue_queue->show_in_ui = '1';
  $fe_nodequeue_queue->show_in_tab = '1';
  $fe_nodequeue_queue->show_in_links = '1';
  $fe_nodequeue_queue->reference = '0';
  $fe_nodequeue_queue->reverse = '1';
  $fe_nodequeue_queue->i18n = '0';
  $fe_nodequeue_queue->types = array(
    0 => 'memblog',
  );
  $fe_nodequeue_queue->roles = array(
    0 => '7',
  );
  $fe_nodequeue_queue->count = 0;
  $fe_nodequeue_queue->machine_name = 'member_posts';

  $export['member_posts'] = $fe_nodequeue_queue;

  $fe_nodequeue_queue = new stdClass;
  $fe_nodequeue_queue->name = 'national_blog';
  $fe_nodequeue_queue->title = 'National Blog';
  $fe_nodequeue_queue->subqueue_title = '';
  $fe_nodequeue_queue->size = '8';
  $fe_nodequeue_queue->link = 'Add to national blog';
  $fe_nodequeue_queue->link_remove = 'Remove from national blog';
  $fe_nodequeue_queue->owner = 'nodequeue';
  $fe_nodequeue_queue->show_in_ui = '1';
  $fe_nodequeue_queue->show_in_tab = '1';
  $fe_nodequeue_queue->show_in_links = '1';
  $fe_nodequeue_queue->reference = '0';
  $fe_nodequeue_queue->reverse = '1';
  $fe_nodequeue_queue->i18n = '0';
  $fe_nodequeue_queue->types = array(
    0 => 'memblog',
  );
  $fe_nodequeue_queue->roles = array(
    0 => '7',
  );
  $fe_nodequeue_queue->count = 0;
  $fe_nodequeue_queue->machine_name = 'national_blog';

  $export['national_blog'] = $fe_nodequeue_queue;

  return $export;
}

/**
 * Implementation of hook_views_api().
 */
function piropublic_frontpage_views_api() {
  return array(
    'api' => '2',
  );
}
