<?php

/**
 * Implementation of hook_content_default_fields().
 */
function old_community_content_default_fields() {
  $fields = array();

  // Exported field: field_og_2abbrev
  $fields['country-field_og_2abbrev'] = array(
    'field_name' => 'field_og_2abbrev',
    'type_name' => 'country',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '2',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_og_2abbrev][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Abbreviation (2 Letter)',
      'weight' => '-3',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_og_3abbrev
  $fields['country-field_og_3abbrev'] = array(
    'field_name' => 'field_og_3abbrev',
    'type_name' => 'country',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '5',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_og_3abbrev][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Abbreviation (3 Letter)',
      'weight' => '-2',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_og_des
  $fields['country-field_og_des'] = array(
    'field_name' => 'field_og_des',
    'type_name' => 'country',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '500',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_og_des][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Brief Description',
      'weight' => '-1',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_og_pic
  $fields['country-field_og_pic'] = array(
    'field_name' => 'field_og_pic',
    'type_name' => 'country',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'resolution' => '200x200',
      'enforce_ratio' => 1,
      'croparea' => '500x500',
      'enforce_minimum' => NULL,
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'country_group_pics',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '500K',
      'max_filesize_per_node' => '',
      'max_resolution' => '200x200',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 1,
      'collapsible' => '2',
      'label' => 'Country Picture',
      'weight' => '-4',
      'description' => '',
      'type' => 'imagefield_crop_widget',
      'module' => 'imagefield_crop',
    ),
  );

  // Exported field: field_og_3abbrev
  $fields['county-field_og_3abbrev'] = array(
    'field_name' => 'field_og_3abbrev',
    'type_name' => 'county',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '5',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_og_3abbrev][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Abbreviation (3 Letter)',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_og_civicrmhook
  $fields['county-field_og_civicrmhook'] = array(
    'field_name' => 'field_og_civicrmhook',
    'type_name' => 'county',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_og_civicrmhook][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'CiviCRM Hookin',
      'weight' => '3',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_og_des
  $fields['county-field_og_des'] = array(
    'field_name' => 'field_og_des',
    'type_name' => 'county',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '500',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_og_des][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Brief Description',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_og_grouplink
  $fields['county-field_og_grouplink'] = array(
    'field_name' => 'field_og_grouplink',
    'type_name' => 'county',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 1,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link to Official Site',
      'weight' => '-3',
      'description' => 'Provide a link to the official site associated with this group ie nh.gov for the state of New Hampshire.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_og_pic
  $fields['county-field_og_pic'] = array(
    'field_name' => 'field_og_pic',
    'type_name' => 'county',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'resolution' => '200x200',
      'enforce_ratio' => 1,
      'croparea' => '500x500',
      'enforce_minimum' => 1,
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'county_group_pics',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '500K',
      'max_filesize_per_node' => '',
      'max_resolution' => '200x200',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'usa.gif',
        'filepath' => 'sites/default/files/imagefield_default_images/usa.gif',
        'filemime' => 'image/gif',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/usa.gif',
        'filesize' => 19606,
        'uid' => '52350',
        'status' => 1,
        'timestamp' => 1296334507,
        'fid' => '2838',
      ),
      'use_default_image' => 1,
      'collapsible' => '2',
      'label' => 'County Picture',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_crop_widget',
      'module' => 'imagefield_crop',
    ),
  );

  // Exported field: field_og_state
  $fields['county-field_og_state'] = array(
    'field_name' => 'field_og_state',
    'type_name' => 'county',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'state' => 'state',
      'blog' => 0,
      'civicrmactivity' => 0,
      'country' => 0,
      'county' => 0,
      'faq' => 0,
      'farticle' => 0,
      'fauthor' => 0,
      'forum' => 0,
      'image' => 0,
      'lawmaker' => 0,
      'natblog' => 0,
      'page' => 0,
      'personal' => 0,
      'mediagall' => 0,
      'pr' => 0,
      'profile' => 0,
      'profpic' => 0,
      'region' => 0,
      'settings' => 0,
      'staff' => 0,
      'story' => 0,
      'video' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_og_state][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'State',
      'weight' => '2',
      'description' => 'Input the name of the state to which this group belongs',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_og_3abbrev
  $fields['region-field_og_3abbrev'] = array(
    'field_name' => 'field_og_3abbrev',
    'type_name' => 'region',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '5',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_og_3abbrev][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Abbreviation (5 Letter)',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_og_des
  $fields['region-field_og_des'] = array(
    'field_name' => 'field_og_des',
    'type_name' => 'region',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '500',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_og_des][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Brief Description',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_og_grouplink
  $fields['region-field_og_grouplink'] = array(
    'field_name' => 'field_og_grouplink',
    'type_name' => 'region',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 1,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link to Official Site',
      'weight' => '-3',
      'description' => 'Provide a link to the official site associated with this group ie nh.gov for the state of New Hampshire.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_og_pic
  $fields['region-field_og_pic'] = array(
    'field_name' => 'field_og_pic',
    'type_name' => 'region',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'resolution' => '200x200',
      'enforce_ratio' => 1,
      'croparea' => '500x500',
      'enforce_minimum' => 1,
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'regional_group_pics',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '500K',
      'max_filesize_per_node' => '',
      'max_resolution' => '200x200',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'regions.gif',
        'filepath' => 'sites/default/files/imagefield_default_images/regions.gif',
        'filemime' => 'image/gif',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/regions.gif',
        'filesize' => 9909,
        'uid' => '52350',
        'status' => 1,
        'timestamp' => 1296334900,
        'fid' => '2839',
      ),
      'use_default_image' => 1,
      'collapsible' => '2',
      'label' => 'Region Picture',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_crop_widget',
      'module' => 'imagefield_crop',
    ),
  );

  // Exported field: field_og_state
  $fields['region-field_og_state'] = array(
    'field_name' => 'field_og_state',
    'type_name' => 'region',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'state' => 'state',
      'blog' => 0,
      'civicrmactivity' => 0,
      'country' => 0,
      'county' => 0,
      'faq' => 0,
      'farticle' => 0,
      'fauthor' => 0,
      'forum' => 0,
      'image' => 0,
      'lawmaker' => 0,
      'natblog' => 0,
      'page' => 0,
      'personal' => 0,
      'mediagall' => 0,
      'pr' => 0,
      'profile' => 0,
      'profpic' => 0,
      'region' => 0,
      'settings' => 0,
      'staff' => 0,
      'story' => 0,
      'video' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_og_state][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'State',
      'weight' => '1',
      'description' => 'Input the name of the state to which this group belongs',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_og_2abbrev
  $fields['state-field_og_2abbrev'] = array(
    'field_name' => 'field_og_2abbrev',
    'type_name' => 'state',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '2',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_og_2abbrev][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Abbreviation (2 Letter)',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_og_grouplink
  $fields['state-field_og_grouplink'] = array(
    'field_name' => 'field_og_grouplink',
    'type_name' => 'state',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 1,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link to Official Site',
      'weight' => '-2',
      'description' => 'Provide a link to the official site associated with this group ie nh.gov for the state of New Hampshire.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_og_location
  $fields['state-field_og_location'] = array(
    'field_name' => 'field_og_location',
    'type_name' => 'state',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'location',
    'required' => '0',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'name' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '2',
          ),
          'street' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '4',
          ),
          'additional' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '6',
          ),
          'city' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '8',
          ),
          'province' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '10',
          ),
          'postal_code' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '12',
          ),
          'country' => array(
            'collect' => '1',
            'default' => 'us',
            'weight' => '14',
          ),
          'locpick' => array(
            'collect' => '0',
            'weight' => '20',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'locpick' => 'locpick',
          'province_name' => 'province_name',
          'country_name' => 'country_name',
          'map_link' => 'map_link',
          'coords' => 'coords',
          'name' => 0,
          'street' => 0,
          'additional' => 0,
          'city' => 0,
          'province' => 0,
          'postal_code' => 0,
          'country' => 0,
        ),
      ),
    ),
    'gmap_macro' => '[gmap ]',
    'gmap_marker' => 'letters',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'name' => '',
          'street' => '',
          'additional' => '',
          'country' => 'us',
          'locpick' => array(
            'user_latitude' => '',
            'user_longitude' => '',
          ),
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'lid' => array(
                  'default' => FALSE,
                ),
                'name' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 2,
                ),
                'street' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 4,
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 6,
                ),
                'city' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 8,
                ),
                'province' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 10,
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 12,
                ),
                'country' => array(
                  'default' => 'us',
                  'collect' => 1,
                  'weight' => 14,
                ),
                'locpick' => array(
                  'default' => FALSE,
                  'collect' => 1,
                  'weight' => 20,
                  'nodiff' => TRUE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
              ),
            ),
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'State Location',
      'weight' => '-3',
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_og_pic
  $fields['state-field_og_pic'] = array(
    'field_name' => 'field_og_pic',
    'type_name' => 'state',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'gallery_thumb_default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'gallery_thumb_default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'gallery_thumb_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'resolution' => '225x250',
      'enforce_ratio' => 1,
      'croparea' => '600x0',
      'enforce_minimum' => 1,
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'state_group_pics',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '500K',
      'max_filesize_per_node' => '',
      'max_resolution' => '1000x1000',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'states.jpg',
        'filepath' => 'sites/default/files/imagefield_default_images/states.jpg',
        'filemime' => 'image/jpeg',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/states.jpg',
        'filesize' => 12606,
        'uid' => '52350',
        'status' => 1,
        'timestamp' => 1296335252,
        'fid' => '2840',
      ),
      'use_default_image' => 1,
      'collapsible' => '2',
      'label' => 'State Picture',
      'weight' => '-1',
      'description' => '',
      'type' => 'imagefield_crop_widget',
      'module' => 'imagefield_crop',
    ),
  );

  // Exported field: field_og_prof
  $fields['state-field_og_prof'] = array(
    'field_name' => 'field_og_prof',
    'type_name' => 'state',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_og_prof][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'State Profile',
      'weight' => '1',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abbreviation (2 Letter)');
  t('Abbreviation (3 Letter)');
  t('Abbreviation (5 Letter)');
  t('Brief Description');
  t('CiviCRM Hookin');
  t('Country Picture');
  t('County Picture');
  t('Link to Official Site');
  t('Region Picture');
  t('State');
  t('State Location');
  t('State Picture');
  t('State Profile');

  return $fields;
}
