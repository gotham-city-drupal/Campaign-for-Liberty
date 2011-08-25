<?php

/**
 * Implementation of hook_strongarm().
 */
function piropublic_media_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_farticle';
  $strongarm->value = '0';

  $export['comment_anonymous_farticle'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_fauthor';
  $strongarm->value = '0';

  $export['comment_anonymous_fauthor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_farticle';
  $strongarm->value = '3';

  $export['comment_controls_farticle'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_fauthor';
  $strongarm->value = '3';

  $export['comment_controls_fauthor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_farticle';
  $strongarm->value = '4';

  $export['comment_default_mode_farticle'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_fauthor';
  $strongarm->value = '4';

  $export['comment_default_mode_fauthor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_farticle';
  $strongarm->value = '1';

  $export['comment_default_order_farticle'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_fauthor';
  $strongarm->value = '1';

  $export['comment_default_order_fauthor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_farticle';
  $strongarm->value = '50';

  $export['comment_default_per_page_farticle'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_fauthor';
  $strongarm->value = '50';

  $export['comment_default_per_page_fauthor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_farticle';
  $strongarm->value = '2';

  $export['comment_farticle'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fauthor';
  $strongarm->value = '0';

  $export['comment_fauthor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_farticle';
  $strongarm->value = '0';

  $export['comment_form_location_farticle'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_fauthor';
  $strongarm->value = '0';

  $export['comment_form_location_fauthor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_farticle';
  $strongarm->value = '0';

  $export['comment_preview_farticle'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_fauthor';
  $strongarm->value = '1';

  $export['comment_preview_fauthor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_farticle';
  $strongarm->value = '0';

  $export['comment_subject_field_farticle'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_fauthor';
  $strongarm->value = '1';

  $export['comment_subject_field_fauthor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_farticle';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '2',
    'comment_settings' => '3',
    'menu' => '5',
    'path' => '4',
    'print' => '6',
    'nodewords' => '1',
  );

  $export['content_extra_weights_farticle'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_fauthor';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '2',
    'comment_settings' => '5',
    'menu' => '1',
    'path' => '3',
    'print' => '4',
    'nodewords' => '6',
  );

  $export['content_extra_weights_fauthor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_farticle';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_farticle'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fauthor';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_fauthor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_farticle_pattern';
  $strongarm->value = 'media/featured_article/[field_pub_date-yyyy]/[field_pub_date-mm]/[field_pub_date-dd]/[field_fathor_node-title-raw]/[title-raw]';

  $export['pathauto_node_farticle_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_fauthor_pattern';
  $strongarm->value = 'featured_author/[title-raw]';

  $export['pathauto_node_fauthor_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_farticle';
  $strongarm->value = '0';

  $export['upload_farticle'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_fauthor';
  $strongarm->value = '0';

  $export['upload_fauthor'] = $strongarm;
  return $export;
}
