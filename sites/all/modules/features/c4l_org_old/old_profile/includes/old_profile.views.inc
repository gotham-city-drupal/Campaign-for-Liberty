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
function old_profile_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'old_profile') .'/includes',
    ),
    'handlers' => array(
		'old_profile_handler_field_privatemsg_link' => array(
        'parent' => 'views_handler_field_privatemsg_link',
      ),
		'old_profile_create_memblog_link' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}

 /**
 * Implementation of hook_views_data().
 */
function old_profile_views_data() {
  $data = array();
	// cuom privatemsg link
	$data['users']['privatemsg_link_user'] = array(
    'group' => t('Privatemsg'),
    'title' => t('Send Privatemsg link but not to self'),
		'help' => t('Displays a link to send a private message to a user but hides link to self.'),
    'field' => array(
      'handler' => 'old_profile_handler_field_privatemsg_link',
    ),
  );
	// memblog
	$data['users']['memblog_link'] = array(
    'group' => t('Node'),
    'title' => t('Create memberblog link'),
		'help' => t('Provide a create member blog link on logged in users profile page'),
    'field' => array(
      'handler' => 'old_profile_create_memblog_link',
    ),
  );

  return $data;
}
