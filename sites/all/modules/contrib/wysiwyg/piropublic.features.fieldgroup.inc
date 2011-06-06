<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function piropublic_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_promote
  $groups['featured_blocks-group_promote'] = array(
    'group_type' => 'standard',
    'type_name' => 'featured_blocks',
    'group_name' => 'group_promote',
    'label' => 'Feature As',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
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
        'label' => 'above',
      ),
    ),
    'weight' => '-1',
    'fields' => array(
      '0' => 'field_legislative',
      '1' => 'field_events',
      '2' => 'field_store',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Feature As');

  return $groups;
}
