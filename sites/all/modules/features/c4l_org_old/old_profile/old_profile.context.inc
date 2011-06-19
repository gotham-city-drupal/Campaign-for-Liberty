<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function old_profile_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'profile_blocks';
  $context->description = 'Blocks for the profile';
  $context->tag = 'old_profile';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'profile' => 'profile',
        'profile/*' => 'profile/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-profile-block_1' => array(
          'module' => 'views',
          'delta' => 'profile-block_1',
          'region' => 'left_top',
          'weight' => 0,
        ),
        'views-profile-block_2' => array(
          'module' => 'views',
          'delta' => 'profile-block_2',
          'region' => 'left_top',
          'weight' => 1,
        ),
        'views-profile-block_3' => array(
          'module' => 'views',
          'delta' => 'profile-block_3',
          'region' => 'left_top',
          'weight' => 2,
        ),
        'views-profile_my_groups-block_1' => array(
          'module' => 'views',
          'delta' => 'profile_my_groups-block_1',
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views-profile_my_admin_groups-block_1' => array(
          'module' => 'views',
          'delta' => 'profile_my_admin_groups-block_1',
          'region' => 'right_top',
          'weight' => 1,
        ),
      ),
    ),
    'breadcrumb' => 'profile',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for the profile');
  t('old_profile');

  $export['profile_blocks'] = $context;
  return $export;
}
