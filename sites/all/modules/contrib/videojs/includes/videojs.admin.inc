<?php

/**
 * @file
 * Administrative pages for the videojs module.
 */

/**
 * Menu callback; Provides the videojs settings form.
 */
function videojs_settings_form() {
  $form = array();

  $form['videojs_directory'] = array(
    '#type' => 'textfield',
    '#title' => t('videojs file directory'),
    '#default_value' => variable_get('videojs_directory', 'sites/all/libraries/video-js'),
    '#description' => t('Specify the path that contains the videojs library. The videojs.js file should be in the root of this directory.'),
  );

  $form['options'] = array(
    '#type' => 'fieldset',
    '#title' => t('VideoJS Options'),
    '#collapsible' => FALSE,
  );

  $form['options']['videojs_autoplay'] = array(
    '#type' => 'checkbox',
    '#title' => t('Auto-play files on page load'),
    '#description' => t('Use caution when combining this option with multiple players on the same page.'),
    '#default_value' => variable_get('videojs_autoplay', ''),
  );

  $form['options']['videojs_width'] = array(
    '#type' => 'textfield',
    '#title' => t('Player width'),
    '#default_value' => variable_get('videojs_width', 640),
  );

  $form['options']['videojs_height'] = array(
    '#type' => 'textfield',
    '#title' => t('Player height'),
    '#default_value' => variable_get('videojs_height', 264),
  );

  $options = array(0 => 'Defaul', 'tube-css' => 'Youtube', 'vim-css' => 'Vimeo', 'hu-css' => 'Hulu');
  $form['options']['videojs_skin'] = array(
    '#type' => 'select',
    '#title' => t('Player skin'),
    '#options' => $options,
    '#default_value' => variable_get('videojs_skin', 'default'),
  );

  $form['thumbnails'] = array(
    '#type' => 'fieldset',
    '#title' => t('VideoJS Thumbnails'),
    '#collapsible' => FALSE,
    '#description' => t('Thumbnail settings for videojs widget'),
  );

  foreach (_videojs_settings_thumbnail_fields() as $node_type => $value) {
    $form['thumbnails']['videojs_' . $node_type] = array(
      '#type' => 'select',
      '#title' => t($value['video_js_field'] . ' in ' . $value['description']),
      '#default_value' => variable_get('videojs_' . $node_type, module_exists('video') ? 'video_module' : $value['filefields'][0]),
      '#options' => module_exists('video') ? array('video_module' => t('Video Module')) + $value['filefields'] : $value['filefields'],
    );
  }

  $form = system_settings_form($form);
  $form['#validate'][] = 'videojs_settings_form_validate';
  $form['#submit'][] = 'videojs_settings_form_submit';
  return $form;
}

/**
 * Validation function to validate the videojs_settings_form() form.
 */
function videojs_settings_form_validate($form, &$form_state) {
  $form_state['videojs_version'] = videojs_get_version($form_state['values']['videojs_directory']);
  if (!$form_state['videojs_version']) {
    form_error($form['videojs_directory'], t('The directory specified does not seem to contain the videojs library. Check to make sure that the video.js file is located within this directory.'));
  }
}

/**
 * Submit handler for the videojs_settings_form() form.
 */
function videojs_settings_form_submit($form, &$form_state) {
  drupal_set_message(t('The videojs library (version @version) successfully found in the %directory directory.', array('@version' => $form_state['videojs_version'], '%directory' => $form_state['values']['videojs_directory'])));
}

/**
 * Generate list of content types with filefield widget set to 'videojs' and possible filefields for thumbnails
 * 
 * @return
 *   Returns array in format [node_type]=>array('description','video_js_field',filefields=>array('filefield'=>'filefield description'))
 */
function _videojs_settings_thumbnail_fields() {
  $video_js_node_types = array();

  // Iterate through all node_types
  foreach (array_map('check_plain', node_get_types('names')) as $node_type => $description) {
    // Iterate through all filefield field types in the current node type
    foreach (filefield_get_field_list($node_type) as $field) {
      // If widget format of the field is 'videojs' - generate structure containing node_type, videojs field name and list of possible options for thumbnails
      if ($field['display_settings']['full']['format'] == 'videojs') {
        $video_js_node_types[$node_type] = array(
          'node_type' => $field['type_name'],
          'description' => $description,
          'video_js_field' => $field['field_name'],
          'filefields' => array()
        );
        // Get all filefield type fields except 'videojs' field (should we check only compatible extentions allowed in some widgets?)
        foreach (filefield_get_field_list($node_type) as $thumbnail_field) {
          if ($thumbnail_field['display_settings']['full']['format'] != 'videojs')
            $video_js_node_types[$node_type]['filefields'][$thumbnail_field['field_name']] = t($thumbnail_field['field_name']);
        }
      }
    }
  }
  return $video_js_node_types;
}
