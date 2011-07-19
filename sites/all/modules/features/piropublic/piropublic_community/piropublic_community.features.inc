<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function piropublic_community_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function piropublic_community_imagecache_default_presets() {
  $items = array(
    'group_thumb' => array(
      'presetname' => 'group_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '60',
            'height' => '60',
          ),
        ),
      ),
    ),
    'groupprof_pic' => array(
      'presetname' => 'groupprof_pic',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '225',
            'height' => '250',
          ),
        ),
      ),
    ),
    'profile_pic' => array(
      'presetname' => 'profile_pic',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '225',
            'height' => '250',
          ),
        ),
      ),
    ),
    'sidebar_thumb' => array(
      'presetname' => 'sidebar_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '60',
            'height' => '60',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function piropublic_community_node_info() {
  $items = array(
    'country' => array(
      'name' => t('Country Group'),
      'module' => 'features',
      'description' => t('To add a country group'),
      'has_title' => '1',
      'title_label' => t('Country Name'),
      'has_body' => '1',
      'body_label' => t('Country Profile'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'county' => array(
      'name' => t('County Group'),
      'module' => 'features',
      'description' => t('To add a county group'),
      'has_title' => '1',
      'title_label' => t('County Name'),
      'has_body' => '1',
      'body_label' => t('County Profile'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'memblog' => array(
      'name' => t('Member Blog'),
      'module' => 'features',
      'description' => t('Content type for member blog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'personal' => array(
      'name' => t('Personal Information'),
      'module' => 'features',
      'description' => t('Contains the user\'s personal information.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'profile' => array(
      'name' => t('Profile'),
      'module' => 'features',
      'description' => t('The user\'s profile bio'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Profile'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'profpic' => array(
      'name' => t('Profile Picture'),
      'module' => 'features',
      'description' => t('Form to upload a profile picture'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'region' => array(
      'name' => t('Regional Group'),
      'module' => 'features',
      'description' => t('To add a regional group'),
      'has_title' => '1',
      'title_label' => t('Region Name'),
      'has_body' => '1',
      'body_label' => t('Region Profile'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'settings' => array(
      'name' => t('Settings'),
      'module' => 'features',
      'description' => t('A users settings'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'state' => array(
      'name' => t('State Group'),
      'module' => 'features',
      'description' => t('to add a state group'),
      'has_title' => '1',
      'title_label' => t('State Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_rules_defaults().
 */
function piropublic_community_rules_defaults() {
  return array(
    'rules' => array(
      'rules_redirect_user_edit_to_profile' => array(
        '#type' => 'rule',
        '#set' => 'event_user_update',
        '#label' => 'Redirect user edit to profile',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'piropublic_community',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Compare two users',
              'arguments' => array(
                'user1' => array(
                  'type' => 'user',
                  'label' => 'User account 1',
                ),
                'user2' => array(
                  'type' => 'user',
                  'label' => 'User account 2',
                ),
              ),
              'module' => 'User',
            ),
            '#name' => 'rules_condition_user_comparison',
            '#settings' => array(
              '#argument map' => array(
                'user1' => 'user',
                'user2' => 'account',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'path' => 'profile',
              'query' => '',
              'fragment' => '',
              'force' => 1,
              'immediate' => 0,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'path' => array(
                    '0' => ':global',
                  ),
                  'query' => array(
                    '0' => ':global',
                  ),
                  'fragment' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_drupal_goto',
            '#info' => array(
              'label' => 'Page redirect',
              'module' => 'System',
              'eval input' => array(
                '0' => 'path',
                '1' => 'query',
                '2' => 'fragment',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'rules_22' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'Update default user prof pic',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          'piropublic_community' => 'piropublic_community',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'profpic' => 'profpic',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Created content is Profile Picture',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Execute custom PHP code',
              'module' => 'PHP',
              'eval input' => array(
                '0' => 'code',
              ),
            ),
            '#name' => 'rules_action_custom_php',
            '#settings' => array(
              'code' => 'if (isset($node->field_prof_pic[0][\'filepath\'])) {
$cck_image = $node->field_prof_pic[0][\'filepath\'];
}
else {
$cck_image = \'sites/default/files/defprof.jpg\';
}

db_query(\'UPDATE {users} SET picture = "%s" WHERE uid = %d\', $cck_image, $node->uid);',
              'vars' => array(
                '0' => 'node',
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'rules_23' => array(
        '#type' => 'rule',
        '#set' => 'event_node_update',
        '#label' => 'Update default user prof pic on update',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          'piropublic_community' => 'piropublic_community',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'profpic' => 'profpic',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Created content is Profile Picture',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Execute custom PHP code',
              'module' => 'PHP',
              'eval input' => array(
                '0' => 'code',
              ),
            ),
            '#name' => 'rules_action_custom_php',
            '#settings' => array(
              'code' => 'if (isset($node->field_prof_pic[0][\'filepath\'])) {
$cck_image = $node->field_prof_pic[0][\'filepath\'];
}
else {
$cck_image = \'sites/default/files/defprof.jpg\';
}

db_query(\'UPDATE {users} SET picture = "%s" WHERE uid = %d\', $cck_image, $node->uid);',
              'vars' => array(
                '0' => 'node',
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'rules_34' => array(
        '#type' => 'rule',
        '#set' => 'event_init',
        '#label' => 'Settings to user edit',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          'piropublic_community' => 'piropublic_community',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Check path',
              'arguments' => array(
                'path' => array(
                  'type' => 'string',
                  'label' => 'Path to check',
                ),
                'op' => array(
                  'type' => 'string',
                  'label' => 'Op',
                ),
              ),
              'module' => 'System',
            ),
            '#name' => 'pathrules_checkpath',
            '#settings' => array(
              'path' => 'profile/settings',
              'op' => 'equal',
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'path' => 'user/[user:uid]/edit',
              'query' => '',
              'fragment' => '',
              'force' => 0,
              'immediate' => 0,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'path' => array(
                    '0' => 'user',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_drupal_goto',
            '#info' => array(
              'label' => 'Page redirect',
              'module' => 'System',
              'eval input' => array(
                '0' => 'path',
                '1' => 'query',
                '2' => 'fragment',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function piropublic_community_views_api() {
  return array(
    'api' => '2',
  );
}
