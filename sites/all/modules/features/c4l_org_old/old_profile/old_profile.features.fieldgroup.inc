<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function old_profile_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_video_links
  $groups['memblog-group_video_links'] = array(
    'group_type' => 'standard',
    'type_name' => 'memblog',
    'group_name' => 'group_video_links',
    'label' => 'Video Links',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-2',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_embed_video',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Video Links');

  return $groups;
}
