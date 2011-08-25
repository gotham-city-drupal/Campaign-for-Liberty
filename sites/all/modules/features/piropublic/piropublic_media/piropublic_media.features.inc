<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function piropublic_media_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function piropublic_media_node_info() {
  $items = array(
    'farticle' => array(
      'name' => t('Featured Article'),
      'module' => 'features',
      'description' => t('To add a featured article'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'fauthor' => array(
      'name' => t('Featured Author'),
      'module' => 'features',
      'description' => t('Add a featured author. This is to be used if the featured article author does not have a user account.'),
      'has_title' => '1',
      'title_label' => t('Author Name'),
      'has_body' => '1',
      'body_label' => t('Full Bio'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_rules_defaults().
 */
function piropublic_media_rules_defaults() {
  return array(
    'rules' => array(
      'rules_featured_article_to_nodequeue' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'Featured Article to Nodequeue',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'piropublic_media',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content is Featured Article',
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
                'farticle' => 'farticle',
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
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
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
                '8' => '8',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'action',
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
function piropublic_media_views_api() {
  return array(
    'api' => '2',
  );
}
