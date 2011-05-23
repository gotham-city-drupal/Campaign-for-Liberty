<?php
/**
 * Force refresh of theme registry.
 * DEVELOPMENT USE ONLY - COMMENT OUT FOR PRODUCTION
 */
// drupal_rebuild_theme_registry();


/**
 * Modify theme variables
 */
function phptemplate_preprocess(&$vars) {
	global $user; // Get the current user
  	$vars['is_admin'] = in_array('admin', $user->roles); // Check for Admin, logged in
  	$vars['logged_in'] = ($user->uid > 0) ? TRUE : FALSE;
}


function phptemplate_preprocess_page(&$vars) {
	// Build array of helpful body classes

	$body_classes = array();
	  $body_classes[] = ($vars['logged_in']) ? 'logged-in' : 'not-logged-in'; // Page user is logged in
	  $body_classes[] = ($vars['is_front']) ? 'front' : 'not-front'; // Page is front page

	$vars['head_title'] = strip_tags($vars['head_title']);

	if (isset($vars['node'])) {
	    $body_classes[] = ($vars['node']) ? 'full-node' : ''; // Page is one full node
	    $body_classes[] = ($vars['node']->type) ? 'node-type-'. $vars['node']->type : ''; // Page has node-type-x, e.g., node-type-page
		$body_classes[] = ($vars['node']->nid) ? 'node-nid-'. $vars['node']->nid : '';

		//
		// switch($vars['node']->type){
		// 	case 'page':
		// 	break;
		// }
	 	}
	$body_classes[] = 'layout-'. (($vars['left']) ? 'left-main' : 'main') . (($vars['right'] || $vars['right_top']) ? '-right' : '');
	//$body_classes[] = ($vars['right'] || $vars['right_top']) ? 'layout-main-right' : 'layout-main';
	$body_classes = array_filter($body_classes); // Remove empty elements
	  $vars['body_classes'] = implode(' ', $body_classes); // Create class list separated by spaces
}

function phptemplate_preprocess_node(&$variables) {
	//dprint_r($variables);
	// switch($variables['node']->type){
	// 	case 'page':
	// 	break;
	// }
}

function phptemplate_breadcrumb($breadcrumb) {
	if (!empty($breadcrumb)) {
		$breadcrumb[] = drupal_get_title();
		return '<div class="breadcrumb">'. implode(' &rsaquo; ', $breadcrumb) .'</div>';
	}
}