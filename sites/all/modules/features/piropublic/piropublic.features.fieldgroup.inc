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

  // Exported group: group_frontpage_banner_lnkgrp
  $groups['frontpage_banner-group_frontpage_banner_lnkgrp'] = array(
    'group_type' => 'standard',
    'type_name' => 'frontpage_banner',
    'group_name' => 'group_frontpage_banner_lnkgrp',
    'label' => 'Link Settings',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '2',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
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
    'weight' => '2',
    'fields' => array(
      '0' => 'field_frontpage_banner_link',
      '1' => 'field_frontpage_banner_img',
      '2' => 'field_frontpage_banner_imgsrc',
      '3' => 'field_frontpage_banner_btntxt',
    ),
  );

  // Exported group: group_frontpage_banner_vidgrp
  $groups['frontpage_banner-group_frontpage_banner_vidgrp'] = array(
    'group_type' => 'standard',
    'type_name' => 'frontpage_banner',
    'group_name' => 'group_frontpage_banner_vidgrp',
    'label' => 'Video Settings',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '0',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
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
    'weight' => '1',
    'fields' => array(
      '0' => 'field_frontpage_banner_videotype',
      '1' => 'field_frontpage_banner_youtube',
      '2' => 'field_frontpage_banner_foxnews',
      '3' => 'field_frontpage_banner_embed',
      '4' => 'field_frontpage_banner_vidsrc',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Feature As');
  t('Link Settings');
  t('Video Settings');

  return $groups;
}
