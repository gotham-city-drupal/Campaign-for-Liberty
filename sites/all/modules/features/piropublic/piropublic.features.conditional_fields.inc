<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function piropublic_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_frontpage_banner_type',
  'field_name' => 'field_frontpage_banner_btntxt',
  'type' => 'frontpage_banner',
  'trigger_values' => 
  array (
    'link' => 'link',
  ),
);
$items[] = array (
  'control_field_name' => 'field_frontpage_banner_type',
  'field_name' => 'field_frontpage_banner_img',
  'type' => 'frontpage_banner',
  'trigger_values' => 
  array (
    'link' => 'link',
  ),
);
$items[] = array (
  'control_field_name' => 'field_frontpage_banner_type',
  'field_name' => 'field_frontpage_banner_imgsrc',
  'type' => 'frontpage_banner',
  'trigger_values' => 
  array (
    'link' => 'link',
  ),
);
$items[] = array (
  'control_field_name' => 'field_frontpage_banner_type',
  'field_name' => 'field_frontpage_banner_link',
  'type' => 'frontpage_banner',
  'trigger_values' => 
  array (
    'link' => 'link',
  ),
);
$items[] = array (
  'control_field_name' => 'field_frontpage_banner_type',
  'field_name' => 'field_frontpage_banner_videotype',
  'type' => 'frontpage_banner',
  'trigger_values' => 
  array (
    'video' => 'video',
  ),
);
$items[] = array (
  'control_field_name' => 'field_frontpage_banner_type',
  'field_name' => 'group_frontpage_banner_lnkgrp',
  'type' => 'frontpage_banner',
  'trigger_values' => 
  array (
    'link' => 'link',
  ),
);
$items[] = array (
  'control_field_name' => 'field_frontpage_banner_type',
  'field_name' => 'group_frontpage_banner_vidgrp',
  'type' => 'frontpage_banner',
  'trigger_values' => 
  array (
    'video' => 'video',
  ),
);
$items[] = array (
  'control_field_name' => 'field_frontpage_banner_videotype',
  'field_name' => 'field_frontpage_banner_embed',
  'type' => 'frontpage_banner',
  'trigger_values' => 
  array (
    'other' => 'other',
  ),
);
$items[] = array (
  'control_field_name' => 'field_frontpage_banner_videotype',
  'field_name' => 'field_frontpage_banner_foxnews',
  'type' => 'frontpage_banner',
  'trigger_values' => 
  array (
    'foxnews' => 'foxnews',
  ),
);
$items[] = array (
  'control_field_name' => 'field_frontpage_banner_videotype',
  'field_name' => 'field_frontpage_banner_vidsrc',
  'type' => 'frontpage_banner',
  'trigger_values' => 
  array (
    'other' => 'other',
  ),
);
$items[] = array (
  'control_field_name' => 'field_frontpage_banner_videotype',
  'field_name' => 'field_frontpage_banner_youtube',
  'type' => 'frontpage_banner',
  'trigger_values' => 
  array (
    'youtube' => 'youtube',
  ),
);
return $items;
}
