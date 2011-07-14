<?php

/**
 * Implementation of hook_strongarm().
 */
function piropublic_frontpage_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_anim_speed_featured_blocks';
  $strongarm->value = 'slow';

  $export['c_fields_anim_speed_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_anim_speed_frontpage_banner';
  $strongarm->value = 'slow';

  $export['c_fields_anim_speed_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_animation_featured_blocks';
  $strongarm->value = '2';

  $export['c_fields_animation_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_animation_frontpage_banner';
  $strongarm->value = '2';

  $export['c_fields_animation_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_edit_featured_blocks';
  $strongarm->value = '1';

  $export['c_fields_edit_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_edit_frontpage_banner';
  $strongarm->value = '1';

  $export['c_fields_edit_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_js_featured_blocks';
  $strongarm->value = '1';

  $export['c_fields_js_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_js_frontpage_banner';
  $strongarm->value = '1';

  $export['c_fields_js_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_reset_default_featured_blocks';
  $strongarm->value = 1;

  $export['c_fields_reset_default_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_reset_default_frontpage_banner';
  $strongarm->value = 1;

  $export['c_fields_reset_default_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_show_all_featured_blocks';
  $strongarm->value = 0;

  $export['c_fields_show_all_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_show_all_frontpage_banner';
  $strongarm->value = 0;

  $export['c_fields_show_all_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_view_featured_blocks';
  $strongarm->value = '1';

  $export['c_fields_view_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_view_frontpage_banner';
  $strongarm->value = '1';

  $export['c_fields_view_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_featured_blocks';
  $strongarm->value = 0;

  $export['comment_anonymous_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_frontpage_banner';
  $strongarm->value = 0;

  $export['comment_anonymous_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_featured_blocks';
  $strongarm->value = '3';

  $export['comment_controls_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_frontpage_banner';
  $strongarm->value = '3';

  $export['comment_controls_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_featured_blocks';
  $strongarm->value = '4';

  $export['comment_default_mode_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_frontpage_banner';
  $strongarm->value = '4';

  $export['comment_default_mode_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_featured_blocks';
  $strongarm->value = '1';

  $export['comment_default_order_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_frontpage_banner';
  $strongarm->value = '1';

  $export['comment_default_order_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_featured_blocks';
  $strongarm->value = '50';

  $export['comment_default_per_page_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_frontpage_banner';
  $strongarm->value = '50';

  $export['comment_default_per_page_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_featured_blocks';
  $strongarm->value = '0';

  $export['comment_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_featured_blocks';
  $strongarm->value = '0';

  $export['comment_form_location_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_frontpage_banner';
  $strongarm->value = '1';

  $export['comment_form_location_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_frontpage_banner';
  $strongarm->value = '0';

  $export['comment_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_featured_blocks';
  $strongarm->value = '1';

  $export['comment_preview_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_frontpage_banner';
  $strongarm->value = '0';

  $export['comment_preview_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_featured_blocks';
  $strongarm->value = '1';

  $export['comment_subject_field_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_frontpage_banner';
  $strongarm->value = '0';

  $export['comment_subject_field_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_featured_blocks';
  $strongarm->value = 0;

  $export['content_profile_use_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_frontpage_banner';
  $strongarm->value = 0;

  $export['content_profile_use_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_featured_blocks';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_frontpage_banner';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_frontpage_banner'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_featured_blocks_pattern';
  $strongarm->value = 'featuredblock/[title-raw]';

  $export['pathauto_node_featured_blocks_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_frontpage_banner_pattern';
  $strongarm->value = 'frontpagebanner/[yyyy]/[mm]/[dd]/[title-raw]';

  $export['pathauto_node_frontpage_banner_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'front';

  $export['site_frontpage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_featured_blocks';
  $strongarm->value = '1';

  $export['upload_featured_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_frontpage_banner';
  $strongarm->value = '1';

  $export['upload_frontpage_banner'] = $strongarm;
  return $export;
}
