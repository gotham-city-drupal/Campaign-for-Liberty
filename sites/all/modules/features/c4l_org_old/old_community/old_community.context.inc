<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function old_community_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_blocks';
  $context->description = 'Blocks for group pages';
  $context->tag = 'old_community';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'country' => 'country',
        'county' => 'county',
        'region' => 'region',
        'state' => 'state',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-group-block_1' => array(
          'module' => 'views',
          'delta' => 'group-block_1',
          'region' => 'left_top',
          'weight' => 0,
        ),
        'views-group-block_2' => array(
          'module' => 'views',
          'delta' => 'group-block_2',
          'region' => 'left_top',
          'weight' => 1,
        ),
        'views-group-block_3' => array(
          'module' => 'views',
          'delta' => 'group-block_3',
          'region' => 'left_top',
          'weight' => 2,
        ),
        'views-group_members-block_1' => array(
          'module' => 'views',
          'delta' => 'group_members-block_1',
          'region' => 'left',
          'weight' => 0,
        ),
        'views-group_coordinators-block_1' => array(
          'module' => 'views',
          'delta' => 'group_coordinators-block_1',
          'region' => 'left',
          'weight' => 1,
        ),
        'views-group_subgroups-block_1' => array(
          'module' => 'views',
          'delta' => 'group_subgroups-block_1',
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views-group_subgroups-block_2' => array(
          'module' => 'views',
          'delta' => 'group_subgroups-block_2',
          'region' => 'right_top',
          'weight' => 1,
        ),
      ),
    ),
    'breadcrumb' => 'node/197',
    'menu' => 'node/197',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for group pages');
  t('old_community');

  $export['group_blocks'] = $context;
  return $export;
}
