<?php
// $Id: theme-settings.php, v 1.0 2011/4/28 00:32:00 pirog Exp $

/**
 * Implementation of THEMEHOOK_settings() function.
 *
 * @param $saved_settings
 *   An array of saved settings for this theme.
 * @return
 *   A form array.
 */
function phptemplate_settings($saved_settings) {

  $form['liberty_rebuild_registry'] = array(
    '#type' => 'checkbox',
    '#title' => t('Rebuild theme registry on every page.'),
    '#default_value' => isset($saved_settings['liberty_rebuild_registry']) ? $saved_settings['liberty_rebuild_registry'] : 0,
    '#description' => t('During theme development, it can be very useful to continuously <a href="!link">rebuild the theme registry</a>.<br/><strong>WARNING:</strong> this is a huge performance penalty and must be turned off on production websites.', array('!link' => 'http://drupal.org/node/173880#theme-registry')),
  );

  return $form;
}
