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
      'rules_19' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'After profile information is created redirect to profile',
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
              'label' => 'Created content is Personal Information',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'personal' => 'personal',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'path' => 'profile/[author:uid]',
              'query' => '',
              'fragment' => '',
              'force' => 1,
              'immediate' => 0,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'path' => array(
                    '0' => 'author',
                    '1' => ':global',
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
          ),
          '1' => array(
            '#info' => array(
              'label' => 'Show a configurable message on the site',
              'module' => 'System',
              'eval input' => array(
                '0' => 'message',
              ),
            ),
            '#name' => 'rules_action_drupal_message',
            '#settings' => array(
              'message' => 'Your profile is now complete! Please use the links on the left to configure your profile picture and additional information about you!',
              'error' => 0,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'rules_26' => array(
        '#type' => 'rule',
        '#set' => 'event_init',
        '#label' => 'Redirect profile to profile/uid',
        '#active' => 1,
        '#weight' => '-9',
        '#categories' => array(
          '0' => 'piropublic_community',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'path' => 'profile',
              'op' => 'equal',
            ),
            '#name' => 'pathrules_checkpath',
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
            '#weight' => 0,
          ),
          '1' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'User has role(s)',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'User',
                ),
              ),
              'module' => 'User',
            ),
            '#name' => 'rules_condition_user_hasrole',
            '#settings' => array(
              'roles' => array(
                '0' => 2,
              ),
              'operation' => 'OR',
              '#argument map' => array(
                'user' => 'user',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#info' => array(
              'label' => 'Page redirect',
              'module' => 'System',
              'eval input' => array(
                '0' => 'path',
                '1' => 'query',
                '2' => 'fragment',
              ),
            ),
            '#name' => 'rules_action_drupal_goto',
            '#settings' => array(
              'path' => 'profile/[user:uid]',
              'query' => '',
              'fragment' => '',
              'force' => 1,
              'immediate' => 0,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'path' => array(
                    '0' => 'user',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'rules_check_person_info_is_set' => array(
        '#type' => 'rule',
        '#set' => 'event_init',
        '#label' => 'Check person info is set',
        '#active' => 1,
        '#weight' => '-8',
        '#categories' => array(
          '0' => 'piropublic_community',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#negate' => 1,
            '#info' => array(
              'label' => 'Acting user has his Personal Information created',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'User',
                ),
              ),
              'module' => 'Content Profile',
            ),
            '#name' => 'content_profile_user_has_profile_condition',
            '#type' => 'condition',
            '#settings' => array(
              'type' => 'personal',
              '#argument map' => array(
                'user' => 'user',
              ),
            ),
          ),
          '1' => array(
            '#type' => 'condition',
            '#settings' => array(
              'path' => 'profile/[user:uid]',
              'op' => 'starts',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'path' => array(
                    '0' => 'user',
                    '1' => ':global',
                  ),
                  'op' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'pathrules_checkpath',
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
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'path' => 'node/add/personal',
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
          '1' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Show a configurable message on the site',
              'module' => 'System',
              'eval input' => array(
                '0' => 'message',
              ),
            ),
            '#name' => 'rules_action_drupal_message',
            '#settings' => array(
              'message' => 'If this is your first time logging in or if you have not set up a profile yet please complete the profile setup so we can get you involved in your local, regional and state communities!',
              'error' => 0,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'rules_redirect_content_profiles_to_profile' => array(
        '#type' => 'rule',
        '#set' => 'event_node_view',
        '#label' => 'Redirect content profile subtypes to profile',
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
              'label' => 'Viewed content is Personal Information or Profile or Profile Picture or Settings',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'personal' => 'personal',
                'profile' => 'profile',
                'profpic' => 'profpic',
                'settings' => 'settings',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'path' => 'profile/[node:author-uid]',
              'query' => '',
              'fragment' => '',
              'force' => 1,
              'immediate' => 1,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'path' => array(
                    '0' => 'node',
                    '1' => ':global',
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
      'rules_redirect_logn' => array(
        '#type' => 'rule',
        '#set' => 'event_user_login',
        '#label' => 'Redirect login',
        '#active' => 1,
        '#weight' => '-10',
        '#categories' => array(
          '0' => 'piropublic_community',
        ),
        '#status' => 'default',
        '#conditions' => array(),
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
      'rules_redirect_user_page_to_profile' => array(
        '#type' => 'rule',
        '#set' => 'event_user_view',
        '#label' => 'Redirect user page to profile',
        '#active' => 1,
        '#weight' => '-10',
        '#categories' => array(
          '0' => 'piropublic_community',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#info' => array(
              'label' => 'Page redirect',
              'module' => 'System',
              'eval input' => array(
                '0' => 'path',
                '1' => 'query',
                '2' => 'fragment',
              ),
            ),
            '#name' => 'rules_action_drupal_goto',
            '#settings' => array(
              'path' => 'profile/[account:uid]',
              'query' => '',
              'fragment' => '',
              'force' => 1,
              'immediate' => 1,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'path' => array(
                    '0' => 'account',
                    '1' => ':global',
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
            '#type' => 'action',
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
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
