<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function piropublic_about_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_default_fe_nodequeue_queue().
 */
function piropublic_about_default_fe_nodequeue_queue() {
  $export = array();

  $fe_nodequeue_queue = new stdClass;
  $fe_nodequeue_queue->name = 'board_of_directors';
  $fe_nodequeue_queue->title = 'Board of Directors';
  $fe_nodequeue_queue->subqueue_title = '';
  $fe_nodequeue_queue->size = '0';
  $fe_nodequeue_queue->link = 'add to the board of directors';
  $fe_nodequeue_queue->link_remove = 'remove from board of directors';
  $fe_nodequeue_queue->owner = 'nodequeue';
  $fe_nodequeue_queue->show_in_ui = '1';
  $fe_nodequeue_queue->show_in_tab = '1';
  $fe_nodequeue_queue->show_in_links = '1';
  $fe_nodequeue_queue->reference = '0';
  $fe_nodequeue_queue->reverse = '0';
  $fe_nodequeue_queue->i18n = '0';
  $fe_nodequeue_queue->types = array(
    0 => 'staff',
  );
  $fe_nodequeue_queue->roles = array(
    0 => '7',
  );
  $fe_nodequeue_queue->count = 0;
  $fe_nodequeue_queue->machine_name = 'board_of_directors';

  $export['board_of_directors'] = $fe_nodequeue_queue;

  $fe_nodequeue_queue = new stdClass;
  $fe_nodequeue_queue->name = 'staff';
  $fe_nodequeue_queue->title = 'Staff';
  $fe_nodequeue_queue->subqueue_title = '';
  $fe_nodequeue_queue->size = '0';
  $fe_nodequeue_queue->link = 'add to staff';
  $fe_nodequeue_queue->link_remove = 'remove from staff';
  $fe_nodequeue_queue->owner = 'nodequeue';
  $fe_nodequeue_queue->show_in_ui = '1';
  $fe_nodequeue_queue->show_in_tab = '1';
  $fe_nodequeue_queue->show_in_links = '1';
  $fe_nodequeue_queue->reference = '0';
  $fe_nodequeue_queue->reverse = '0';
  $fe_nodequeue_queue->i18n = '0';
  $fe_nodequeue_queue->types = array(
    0 => 'staff',
  );
  $fe_nodequeue_queue->roles = array(
    0 => '7',
    1 => '8',
  );
  $fe_nodequeue_queue->count = 0;
  $fe_nodequeue_queue->machine_name = 'staff';

  $export['staff'] = $fe_nodequeue_queue;

  return $export;
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function piropublic_about_imagecache_default_presets() {
  $items = array(
    'staff_header_image' => array(
      'presetname' => 'staff_header_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '80',
            'height' => '98',
          ),
        ),
      ),
    ),
    'staff_image' => array(
      'presetname' => 'staff_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '160',
            'height' => '',
            'upscale' => 0,
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
function piropublic_about_node_info() {
  $items = array(
    'faq' => array(
      'name' => t('FAQ'),
      'module' => 'features',
      'description' => t('To add an FAQ question and answer to the about section.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'has_body' => '1',
      'body_label' => t('Answer'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'staff' => array(
      'name' => t('Staff/Board'),
      'module' => 'features',
      'description' => t('To add a campaign for liberty staff member'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'has_body' => '1',
      'body_label' => t('Bio'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_rules_defaults().
 */
function piropublic_about_rules_defaults() {
  return array(
    'rules' => array(
      'rules_place_new_directors_into_director_queue' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'Place new directors into director queue',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'piropublic about',
          'piropublic_about' => 'piropublic_about',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'staff' => 'staff',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Created content is Staff/Board',
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
          '1' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content is published',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_published',
            '#settings' => array(
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
          '2' => array(
            '#weight' => 0,
            '#type' => 'condition',
            '#settings' => array(
              'field_name' => 'field_staff_type',
              '#argument map' => array(
                'node' => 'node',
              ),
              'value' => array(
                '0' => array(
                  'value' => 'board',
                ),
              ),
              'code' => '',
              'vars' => array(),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'code' => array(
                    '0' => ':global',
                  ),
                  'value|0|value' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'content_rules_field_has_value',
            '#info' => array(
              'label' => 'Created content\'s field \'field_staff_type\' has value',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'eval input' => array(
                '0' => 'code',
                '1' => 'value|0|value',
              ),
              'module' => 'CCK',
            ),
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#info' => array(
              'module' => 'Node',
              'arguments' => array(
                'node' => array(
                  'label' => 'Content',
                  'type' => 'node',
                ),
              ),
              'label' => 'Add to Nodequeues',
              'base' => 'rules_core_action_execute',
              'action_name' => 'nodequeue_add_action',
              'configurable' => TRUE,
            ),
            '#name' => 'rules_core_nodequeue_add_action',
            '#settings' => array(
              'qids' => array(
                '3' => '3',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'action',
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'rules_place_new_staff_into_staff_queue' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'Place new staff into staff queue',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'piropublic about',
          'piropublic_about' => 'piropublic_about',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content is Staff/Board',
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
                'staff' => 'staff',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
          '1' => array(
            '#type' => 'condition',
            '#settings' => array(
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_published',
            '#info' => array(
              'label' => 'Created content is published',
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
          '2' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content\'s field \'field_staff_type\' has value',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'eval input' => array(
                '0' => 'code',
                '1' => 'value|0|value',
              ),
              'module' => 'CCK',
            ),
            '#name' => 'content_rules_field_has_value',
            '#settings' => array(
              'field_name' => 'field_staff_type',
              '#argument map' => array(
                'node' => 'node',
              ),
              'value' => array(
                '0' => array(
                  'value' => 'staff',
                ),
              ),
              'code' => '',
              'vars' => array(),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'code' => array(
                    '0' => ':global',
                  ),
                  'value|0|value' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'qids' => array(
                '4' => '4',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_core_nodequeue_add_action',
            '#info' => array(
              'module' => 'Node',
              'arguments' => array(
                'node' => array(
                  'label' => 'Content',
                  'type' => 'node',
                ),
              ),
              'label' => 'Add to Nodequeues',
              'base' => 'rules_core_action_execute',
              'action_name' => 'nodequeue_add_action',
              'configurable' => TRUE,
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'rules_redirect_help_to_faq' => array(
        '#type' => 'rule',
        '#set' => 'event_init',
        '#label' => 'Redirect Help to FAQ',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'piropublic about',
          'piropublic_about' => 'piropublic_about',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'path' => 'help',
              'op' => 'starts',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'path' => array(
                    '0' => ':global',
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
            '#weight' => 0,
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
              'path' => 'about/faq',
              'query' => '',
              'fragment' => '',
              'force' => 0,
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
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'rules_staff_manage_redirect' => array(
        '#type' => 'rule',
        '#set' => 'event_init',
        '#label' => 'Staff Manage Redirect',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'piropublic about',
          'piropublic_about' => 'piropublic_about',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Path has alias(es)',
              'module' => 'Path',
              'eval input' => array(
                '0' => 'src',
              ),
            ),
            '#name' => 'rules_condition_url_has_alias',
            '#settings' => array(
              'src' => 'about/staff/manage',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'src' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function piropublic_about_views_api() {
  return array(
    'api' => '2',
  );
}
