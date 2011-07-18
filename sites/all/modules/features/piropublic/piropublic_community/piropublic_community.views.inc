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
function piropublic_community_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'piropublic_community') .'/includes',
    ),
    'handlers' => array(
		'piropublic_community_views_handler_field_pcf_link' => array(
        'parent' => 'views_handler_field_user_link',
      ),
		'piropublic_community_views_handler_field_create_memblog_link' => array(
        'parent' => 'views_handler_field',
      ),
      	'piropublic_community_views_handler_field_og_managelinkadmin' => array(
        'parent' => 'og_views_handler_field_og_uid',
      ),
      	'piropublic_community_views_handler_field_og_managelinklocal' => array(
        'parent' => 'og_views_handler_field_og_uid',
      ),
      	'piropublic_community_views_handler_field_og_editlink' => array(
        'parent' => 'views_handler_field_node_link',
      ),
      	'piropublic_community_views_handler_field_og_invitelink' => array(
        'parent' => 'views_handler_field_node_link',
      ),
      	'piropublic_community_views_handler_field_og_broadcastlink' => array(
        'parent' => 'views_handler_field_node_link',
      ),
      	'piropublic_community_views_handler_field_view_all_memblogs' => array(
        'parent' => 'views_handler_field_node_link',
      ),
      	'piropublic_community_views_handler_field_promote_to_group' => array(
        'parent' => 'views_handler_field_node_link',
      ),
      	'piropublic_community_views_handler_field_remove_from_group' => array(
        'parent' => 'og_views_handler_field_og_uid',
      ),
    ),
  );
}

 /**
 * Implementation of hook_views_data().
 */
function piropublic_community_views_data() {
  $data = array();
	// personal contact form link
  $data['users']['contact_not_self'] = array(
    'group' => t('User'),
    'title' => t('Link to user\'s personal contact form.'),
	'help' => t('Displays a link to the users personal contact form but hides link to self.'),
    'field' => array(
      'handler' => 'piropublic_community_views_handler_field_pcf_link',
    ),
  );
	// memblog
  $data['users']['memblog_link'] = array(
    'group' => t('Node'),
    'title' => t('Create memberblog link'),
	'help' => t('Provide a create member blog link on logged in users profile page'),
    'field' => array(
      'handler' => 'piropublic_community_views_handler_field_create_memblog_link',
    ),
  );
  $data['og_uid']['managelinkadmin_inherit'] = array(
    'title' => t('OG: Group admin management link with inheritance'),
	'group' => t('Organic groups'),
    'help' => t('A link to the coordinator <em>promote/demotee</em> page with inheritance.'),
    'real field' => 'uid',
    'field' => array(
      'handler' => 'piropublic_community_views_handler_field_og_managelinkadmin',
      'click sortable' => FALSE,
    ),
  );
  $data['og_uid']['managelinkadmin_local'] = array(
    'title' => t('OG: Group admin management link for local coordinators'),
	'group' => t('Organic groups'),
    'help' => t('A link to the local coorinator <em>promotion/demotion</em> page.'),
    'real field' => 'uid',
    'field' => array(
      'handler' => 'piropublic_community_views_handler_field_og_managelinklocal',
      'click sortable' => FALSE,
    ),
  );
  $data['node']['group_edit_link'] = array(
    'title' => t('OG: Link to edit the group'),
	'group' => t('Organic groups'),
    'help' => t('A link to edit this group.'),
    'field' => array(
      'handler' => 'piropublic_community_views_handler_field_og_editlink',
      'click sortable' => FALSE,
    ),
  );
  $data['node']['group_invite'] = array(
    'title' => t('OG: Improved invite link'),
	'group' => t('Organic groups'),
    'help' => t('A link to invite people to this group.'),
    'field' => array(
      'handler' => 'piropublic_community_views_handler_field_og_invitelink',
      'click sortable' => FALSE,
    ),
  );
  $data['node']['all_group_memblogs'] = array(
    'title' => t('OG: All Member Blogs'),
	'group' => t('Organic groups'),
    'help' => t('Link for coordinators to view all posts in their group.'),
    'field' => array(
      'handler' => 'piropublic_community_views_handler_field_view_all_memblogs',
      'click sortable' => FALSE,
    ),
  );
  $data['node']['group_broadcast'] = array(
    'title' => t('OG: Broadcast link'),
	'group' => t('Organic groups'),
    'help' => t('A link to message the group members.'),
    'field' => array(
      'handler' => 'piropublic_community_views_handler_field_og_broadcastlink',
      'click sortable' => FALSE,
    ),
  );
  $data['node']['group_promote'] = array(
    'title' => t('Promote post to group'),
	'group' => t('Node'),
    'help' => t('A link for coordinators to promote a post to a group.'),
    'field' => array(
      'handler' => 'piropublic_community_views_handler_field_promote_to_group',
      'click sortable' => FALSE,
    ),
  );
  $data['og_uid']['remove_member'] = array(
    'title' => t('OG: Remove member from group'),
	'group' => t('Organic groups'),
    'help' => t('A link for coordinators to remove a member from a group.'),
    'real field' => 'uid',
    'field' => array(
      'handler' => 'piropublic_community_views_handler_field_remove_from_group',
      'click sortable' => FALSE,
    ),
  );

  return $data;
}
