<?php

/**
 * Implementation of hook_views_default_views().
 */
function old_community_views_default_views() {
  $views = array();

  // Exported view: group
  $view = new view;
  $view->name = 'group';
  $view->description = 'Groups';
  $view->tag = 'old community';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'nid' => array(
      'label' => 'Nid',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'relationship' => 'none',
    ),
    'managelinkadmin_inherit' => array(
      'id' => 'managelinkadmin_inherit',
      'table' => 'og_uid',
      'field' => 'managelinkadmin_inherit',
    ),
  ));
  $handler->override_option('arguments', array(
    'nid' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'node',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '3' => 0,
        '4' => 0,
        '16' => 0,
        '8' => 0,
        '14' => 0,
        '6' => 0,
        '17' => 0,
        '13' => 0,
        '7' => 0,
        '9' => 0,
        '5' => 0,
        '12' => 0,
        '15' => 0,
        '10' => 0,
        '11' => 0,
      ),
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_image_size' => '_original',
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
      'image_size' => array(
        '_original' => '_original',
        'thumbnail' => 'thumbnail',
        'preview' => 'preview',
      ),
      'validate_argument_node_type' => array(
        'webform' => 0,
        'image' => 0,
        'blog' => 0,
        'forum' => 0,
        'civicrmactivity' => 0,
        'country' => 0,
        'county' => 0,
        'faq' => 0,
        'farticle' => 0,
        'fauthor' => 0,
        'lawmaker' => 0,
        'mediagall' => 0,
        'natblog' => 0,
        'page' => 0,
        'personal' => 0,
        'pr' => 0,
        'profile' => 0,
        'profpic' => 0,
        'region' => 0,
        'settings' => 0,
        'staff' => 0,
        'state' => 0,
        'story' => 0,
        'video' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '51' => 0,
        '2' => 0,
        '49' => 0,
        '47' => 0,
        '50' => 0,
        '46' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_node_flag_name' => '*relationship*',
      'validate_argument_node_flag_test' => 'flaggable',
      'validate_argument_node_flag_id_type' => 'id',
      'validate_argument_user_flag_name' => '*relationship*',
      'validate_argument_user_flag_test' => 'flaggable',
      'validate_argument_user_flag_id_type' => 'id',
      'validate_argument_is_member' => 'OG_VIEWS_DO_NOT_VALIDATE_MEMBERSHIP',
      'validate_argument_group_node_type' => array(
        'country' => 0,
        'county' => 0,
        'region' => 0,
        'state' => 0,
      ),
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'type_groups_all' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type_groups_all',
      'table' => 'og',
      'field' => 'type_groups_all',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'time',
    'results_lifespan' => 3600,
    'output_lifespan' => 3600,
  ));
  $handler->override_option('items_per_page', 1);
  $handler = $view->new_display('block', 'Group Photo', 'block_1');
  $handler->override_option('fields', array(
    'field_og_pic_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'image_plain',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_og_pic_fid',
      'table' => 'node_data_field_og_pic',
      'field' => 'field_og_pic_fid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('block_description', 'Group Photo');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'Group Info', 'block_2');
  $handler->override_option('fields', array(
    'description' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'description',
      'table' => 'og',
      'field' => 'description',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('block_description', 'Group Info');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'Group Options', 'block_3');
  $handler->override_option('fields', array(
    'group_broadcast' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'text' => 'Message this group',
      'exclude' => 0,
      'id' => 'group_broadcast',
      'table' => 'node',
      'field' => 'group_broadcast',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'group_edit_link' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'text' => 'Edit this group',
      'exclude' => 0,
      'id' => 'group_edit_link',
      'table' => 'node',
      'field' => 'group_edit_link',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'group_invite' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'text' => 'Invite people to this group',
      'exclude' => 0,
      'id' => 'group_invite',
      'table' => 'node',
      'field' => 'group_invite',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type_groups_all' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type_groups_all',
      'table' => 'og',
      'field' => 'type_groups_all',
      'relationship' => 'none',
    ),
    'is_admin' => array(
      'operator' => 'in',
      'value' => array(
        '1' => '1',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'is_admin',
      'table' => 'og_uid',
      'field' => 'is_admin',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      '3' => 3,
      '16' => 16,
      '13' => 13,
      '12' => 12,
      '11' => 11,
    ),
  ));
  $handler->override_option('header', '<?php
$view=views_get_current_view();
$group_id=$view->args[0];
?>
<?php
global $user;
if($user->og_groups[$group_id][\'is_admin\'] == 1 || in_array(\'administrator\', array_values($user->roles)) ){
echo \'<br /><span><a href="/admin/local_upgrade/\' . $group_id . \'">Manage Group Coordinators</a></span>\';
}
?>
<?php
global $user;
if($user->og_groups[$group_id][\'is_admin\'] == 1 || in_array(\'administrator\', array_values($user->roles)) ){
echo \'<br /><span><a href="/manage/myannouncements">Manage My Announcements</a></span>\';
}
?>');
  $handler->override_option('header_format', '3');
  $handler->override_option('header_empty', 1);
  $handler->override_option('block_description', 'Group Options');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  return $views;
}
