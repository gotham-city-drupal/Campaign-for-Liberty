<?php
// $Id: zeta.views.inc,v 1.0.0.0 2010/12/12 06:35:23 pirox Exp $

/**
 * @file zeta.views.inc
 *
 * Provide zeta data to views.
 */

/**
 * Implementation of hook_views_handlers().
 */
function old_community_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'old_community') .'/includes',
    ),
    'handlers' => array(
		'old_community_views_handler_field_og_managelinkadmin' => array(
        'parent' => 'og_views_handler_field_og_uid',
      ),
      	'old_community_views_handler_field_og_managelinklocal' => array(
        'parent' => 'og_views_handler_field_og_uid',
      ),
      	'old_community_views_handler_field_og_editlink' => array(
        'parent' => 'views_handler_field_node_link',
      ),
      	'old_community_views_handler_field_og_invitelink' => array(
        'parent' => 'views_handler_field_node_link',
      ),
      	'old_community_views_handler_field_og_broadcastlink' => array(
        'parent' => 'views_handler_field_node_link',
      ),
    ),
  );
}

 /**
 * Implementation of hook_views_data().
 */
function old_community_views_data() {
  $data = array();
	// custom group admin managelink
	$data['og_uid']['managelinkadmin_inherit'] = array(
    'title' => t('OG: Group admin management link with inheritance'),
	'group' => t('Organic groups'),
    'help' => t('A link to the coordinator <em>promote/demotee</em> page with inheritance.'),
    'real field' => 'uid',
    'field' => array(
      'handler' => 'old_community_views_handler_field_og_managelinkadmin',
      'click sortable' => FALSE,
    ),
  );
  $data['og_uid']['managelinkadmin_local'] = array(
    'title' => t('OG: Group admin management link for local coordinators'),
	'group' => t('Organic groups'),
    'help' => t('A link to the local coorinator <em>promotion/demotion</em> page.'),
    'real field' => 'uid',
    'field' => array(
      'handler' => 'old_community_views_handler_field_og_managelinklocal',
      'click sortable' => FALSE,
    ),
  );
  $data['node']['group_edit_link'] = array(
    'title' => t('OG: Link to edit the group'),
	'group' => t('Organic groups'),
    'help' => t('A link to edit this group.'),
    'field' => array(
      'handler' => 'old_community_views_handler_field_og_editlink',
      'click sortable' => FALSE,
    ),
  );
  $data['node']['group_invite'] = array(
    'title' => t('OG: Improved invite link'),
	'group' => t('Organic groups'),
    'help' => t('A link to invite people to this group.'),
    'field' => array(
      'handler' => 'old_community_views_handler_field_og_invitelink',
      'click sortable' => FALSE,
    ),
  );
  $data['node']['group_broadcast'] = array(
    'title' => t('OG: Broadcast link'),
	'group' => t('Organic groups'),
    'help' => t('A link to message the group members.'),
    'field' => array(
      'handler' => 'old_community_views_handler_field_og_broadcastlink',
      'click sortable' => FALSE,
    ),
  );


  return $data;
}
