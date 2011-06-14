<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function piropublic_ctools_plugin_api() {
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
function piropublic_default_fe_nodequeue_queue() {
  $export = array();

  $fe_nodequeue_queue = new stdClass;
  $fe_nodequeue_queue->name = 'frontpage_banner_queue';
  $fe_nodequeue_queue->title = 'Frontpage Banner List';
  $fe_nodequeue_queue->subqueue_title = '';
  $fe_nodequeue_queue->size = '4';
  $fe_nodequeue_queue->link = 'add to front page banner';
  $fe_nodequeue_queue->link_remove = 'remove from banner';
  $fe_nodequeue_queue->owner = 'nodequeue';
  $fe_nodequeue_queue->show_in_ui = '1';
  $fe_nodequeue_queue->show_in_tab = '1';
  $fe_nodequeue_queue->show_in_links = '1';
  $fe_nodequeue_queue->reference = '0';
  $fe_nodequeue_queue->reverse = '1';
  $fe_nodequeue_queue->i18n = '0';
  $fe_nodequeue_queue->types = array(
    0 => 'frontpage_banner',
  );
  $fe_nodequeue_queue->roles = array(
    0 => '5',
    1 => '7',
  );
  $fe_nodequeue_queue->count = 0;
  $fe_nodequeue_queue->machine_name = 'frontpage_banner_queue';

  $export['frontpage_banner_queue'] = $fe_nodequeue_queue;

  return $export;
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function piropublic_imagecache_default_presets() {
  $items = array(
    'featured_block' => array(
      'presetname' => 'featured_block',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '165',
            'height' => '200',
          ),
        ),
      ),
    ),
    'frontpage_banner' => array(
      'presetname' => 'frontpage_banner',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '610',
            'height' => '350',
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
function piropublic_node_info() {
  $items = array(
    'featured_blocks' => array(
      'name' => t('Featured Blocks'),
      'module' => 'features',
      'description' => t('Images that jcarousel and link to other content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'frontpage_banner' => array(
      'name' => t('Frontpage Banner'),
      'module' => 'features',
      'description' => t('To add content to the front page banner'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('Provides a standard page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_rules_defaults().
 */
function piropublic_rules_defaults() {
  return array(
    'rules' => array(
      'rules_add_new_frontpage_banner_to_top_of_nodequeue' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'Add New Frontpage Banner to Top of Nodequeue',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'piropublic core',
          'piropublic' => 'piropublic',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'frontpage_banner' => 'frontpage_banner',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Created content is Frontpage Banner',
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
              'label' => 'Created content\'s field \'field_frontpage_banner_cycle\' has value',
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
              'field_name' => 'field_frontpage_banner_cycle',
              '#argument map' => array(
                'node' => 'node',
              ),
              'value' => array(
                '0' => array(
                  'value' => 'on',
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
          '2' => array(
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
          '3' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content is promoted to frontpage',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_promoted',
            '#settings' => array(
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
              'qids' => array(
                '1' => '1',
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
      'rules_redirect_featured_block_creation_to_frontpage' => array(
        '#type' => 'rule',
        '#set' => 'event_node_presave',
        '#label' => 'Redirect featured block creation to frontpage',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'piropublic core',
          'piropublic' => 'piropublic',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'featured_blocks' => 'featured_blocks',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Saved content is Featured Blocks',
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
              'path' => '<front>',
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
      'rules_redirect_frontpage_banner_creation_to_frontpage' => array(
        '#type' => 'rule',
        '#set' => 'event_node_presave',
        '#label' => 'Redirect frontpage banner creation to frontpage',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'piropublic core',
          'piropublic' => 'piropublic',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Saved content is Frontpage Banner',
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
                'frontpage_banner' => 'frontpage_banner',
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
              'path' => '<front>',
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
function piropublic_views_api() {
  return array(
    'api' => '2',
  );
}
