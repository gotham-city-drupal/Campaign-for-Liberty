<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function piropublic_community_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_all';
  $context->description = 'Common group elements for group home pages';
  $context->tag = 'piropublic_community';
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
        'views-group-block_3' => array(
          'module' => 'views',
          'delta' => 'group-block_3',
          'region' => 'left_top',
          'weight' => 1,
        ),
        'views-group_blogs-block_1' => array(
          'module' => 'views',
          'delta' => 'group_blogs-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
    'breadcrumb' => 'node/428',
    'menu' => 'node/428',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Common group elements for group home pages');
  t('piropublic_community');

  $export['group_all'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_coordinators';
  $context->description = 'context for coords';
  $context->tag = 'piropublic_community';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community/*/coordinators' => 'community/*/coordinators',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-group-block_1' => array(
          'module' => 'views',
          'delta' => 'group-block_1',
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views--exp-group_coordinators-page' => array(
          'module' => 'views',
          'delta' => '-exp-group_coordinators-page',
          'region' => 'right_top',
          'weight' => 1,
        ),
        'views-group-block_3' => array(
          'module' => 'views',
          'delta' => 'group-block_3',
          'region' => 'right_top',
          'weight' => 2,
        ),
      ),
    ),
    'breadcrumb' => 'node/428',
    'menu' => 'node/428',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('context for coords');
  t('piropublic_community');

  $export['group_coordinators'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_members';
  $context->description = 'group member context';
  $context->tag = 'piropublic_community';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community/*/members*' => 'community/*/members*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-group-block_1' => array(
          'module' => 'views',
          'delta' => 'group-block_1',
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views--exp-group_members-page' => array(
          'module' => 'views',
          'delta' => '-exp-group_members-page',
          'region' => 'right_top',
          'weight' => 1,
        ),
        'views-group-block_3' => array(
          'module' => 'views',
          'delta' => 'group-block_3',
          'region' => 'right_top',
          'weight' => 2,
        ),
      ),
    ),
    'breadcrumb' => 'node/428',
    'menu' => 'node/428',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('group member context');
  t('piropublic_community');

  $export['group_members'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mem_blog';
  $context->description = 'memblog context';
  $context->tag = 'piropublic_community';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'memblog' => 'memblog',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'profile/*/blog' => 'profile/*/blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-profile-block_1' => array(
          'module' => 'views',
          'delta' => 'profile-block_1',
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views-profile-block_3' => array(
          'module' => 'views',
          'delta' => 'profile-block_3',
          'region' => 'right_top',
          'weight' => 1,
        ),
        'views-profile_blogs-block_2' => array(
          'module' => 'views',
          'delta' => 'profile_blogs-block_2',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'breadcrumb' => 'profile',
    'menu' => 'profile',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('memblog context');
  t('piropublic_community');

  $export['mem_blog'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'other_group_pages_general';
  $context->description = 'Blocks for group sub pages';
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
        'node_form' => '2',
      ),
    ),
    'path' => array(
      'values' => array(
        'community/*/blog*' => 'community/*/blog*',
        'node/*/broadcast*' => 'node/*/broadcast*',
        'og/users/*/invite*' => 'og/users/*/invite*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-group-block_1' => array(
          'module' => 'views',
          'delta' => 'group-block_1',
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views-group-block_3' => array(
          'module' => 'views',
          'delta' => 'group-block_3',
          'region' => 'right_top',
          'weight' => 1,
        ),
      ),
    ),
    'breadcrumb' => 'node/428',
    'menu' => 'node/428',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for group sub pages');
  t('old_community');

  $export['other_group_pages_general'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'profile_blocks';
  $context->description = 'Blocks for the profile';
  $context->tag = 'piropublic_community';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'profile' => 'profile',
        'profile/*' => 'profile/*',
        'profile/*/blog' => 'profile/*/blog',
        '~profile/*/*' => '~profile/*/*',
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
        'views-profile_blogs-block_1' => array(
          'module' => 'views',
          'delta' => 'profile_blogs-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
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
    'menu' => 'profile',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for the profile');
  t('piropublic_community');

  $export['profile_blocks'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'regioncounty_context';
  $context->description = 'Blocks for regions and coutnies';
  $context->tag = 'old_community';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'county' => 'county',
        'region' => 'region',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-group_coordinators-block_1' => array(
          'module' => 'views',
          'delta' => 'group_coordinators-block_1',
          'region' => 'left',
          'weight' => 0,
        ),
        'views-group-block_4' => array(
          'module' => 'views',
          'delta' => 'group-block_4',
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views-group_members-block_1' => array(
          'module' => 'views',
          'delta' => 'group_members-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for regions and coutnies');
  t('old_community');

  $export['regioncounty_context'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'state_context';
  $context->description = 'Just for state groups';
  $context->tag = 'old_community';
  $context->conditions = array(
    'node' => array(
      'values' => array(
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
        'views-group_coordinators-block_1' => array(
          'module' => 'views',
          'delta' => 'group_coordinators-block_1',
          'region' => 'left',
          'weight' => 0,
        ),
        'views-group_members-block_1' => array(
          'module' => 'views',
          'delta' => 'group_members-block_1',
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
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Just for state groups');
  t('old_community');

  $export['state_context'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_edit';
  $context->description = 'blocks for user edit';
  $context->tag = 'piropublic_community';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'personal' => 'personal',
        'profile' => 'profile',
        'profpic' => 'profpic',
        'settings' => 'settings',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
    'path' => array(
      'values' => array(
        'user/*/edit*' => 'user/*/edit*',
        'user/*/notifications*' => 'user/*/notifications*',
        'users/*/contact' => 'users/*/contact',
        'user/*/delete' => 'user/*/delete',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-profile-block_1' => array(
          'module' => 'views',
          'delta' => 'profile-block_1',
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views-profile-block_2' => array(
          'module' => 'views',
          'delta' => 'profile-block_2',
          'region' => 'right_top',
          'weight' => 1,
        ),
        'views-profile-block_3' => array(
          'module' => 'views',
          'delta' => 'profile-block_3',
          'region' => 'right_top',
          'weight' => 2,
        ),
        'views-profile_my_groups-block_1' => array(
          'module' => 'views',
          'delta' => 'profile_my_groups-block_1',
          'region' => 'right_top',
          'weight' => 3,
        ),
      ),
    ),
    'breadcrumb' => 'profile',
    'menu' => 'profile',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks for user edit');
  t('piropublic_community');

  $export['user_edit'] = $context;
  return $export;
}
