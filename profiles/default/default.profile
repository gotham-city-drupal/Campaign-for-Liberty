<?php

/**
 * Return an array of the modules to be enabled when this profile is installed.
 * Order is important.
 *
 * @return
 *   An array of modules to enable.
 */
function default_profile_modules() {
  return array(
    // core: swap dblog for syslog
    'color', 'comment', 'cookie_cache_bypass', 'help', 'menu', 'taxonomy', 'syslog', 'locale', 'search', 'update', 'dblog',

    // contrib: varnish, apachesolr, etc
    'varnish', 'apachesolr', 'apachesolr_search'
  );

}

/**
 * Return a description of the profile for the initial installation screen.
 *
 * @return
 *   An array with keys 'name' and 'description' describing this profile,
 *   and optional 'language' to override the language selection for
 *   language-specific profiles.
 */
function default_profile_details() {
  return array(
    'name' => 'Pantheon',
    'description' => 'A high-performance stack including support for Varnish.',

  );
}

/**
 * Perform any final installation tasks for this profile.
 *
 * @param $task
 *   The current $task of the install system. When hook_profile_tasks()
 *   is first called, this is 'profile'.
 * @param $url
 *   Complete URL to be used for a link or form action on a custom page,
 *   if providing any, to allow the user to proceed with the installation.
 *
 * @return
 *   An optional HTML string to display to the user. Only used if you
 *   modify the $task, otherwise discarded.
 */
function default_profile_tasks(&$task, $url) {

  // Insert default user-defined node types into the database. For a complete
  // list of available node type attributes, refer to the node type API
  // documentation at: http://api.drupal.org/api/HEAD/function/hook_node_info.
  $types = array(
    array(
      'type' => 'page',
      'name' => st('Page'),
      'module' => 'node',
      'description' => st("A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an \"About us\" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site's initial home page."),
      'custom' => TRUE,
      'modified' => TRUE,
      'locked' => FALSE,
      'help' => '',
      'min_word_count' => '',
    ),
    array(
      'type' => 'story',
      'name' => st('Story'),
      'module' => 'node',
      'description' => st("A <em>story</em>, similar in form to a <em>page</em>, is ideal for creating and displaying content that informs or engages website visitors. Press releases, site announcements, and informal blog-like entries may all be created with a <em>story</em> entry. By default, a <em>story</em> entry is automatically featured on the site's initial home page, and provides the ability to post comments."),
      'custom' => TRUE,
      'modified' => TRUE,
      'locked' => FALSE,
      'help' => '',
      'min_word_count' => '',
    ),
  );

  foreach ($types as $type) {
    $type = (object) _node_type_set_defaults($type);
    node_type_save($type);
  }
  
  // Default page to not be promoted and have comments disabled.
  variable_set('node_options_page', array('status'));
  variable_set('comment_page', COMMENT_NODE_DISABLED);

  // Don't display date and author information for page nodes by default.
  $theme_settings = variable_get('theme_settings', array());
  $theme_settings['toggle_node_info_page'] = FALSE;
  variable_set('theme_settings', $theme_settings);
  
  // Adjust settings on admin/settings/performance.
  variable_set('cache', CACHE_EXTERNAL);
  variable_set('page_cache_max_age', 900);
  variable_set('block_cache', TRUE);
  variable_set('page_compression', 0); // We do this via mod_deflate.
  variable_set('preprocess_js', TRUE);
  variable_set('preprocess_css', TRUE);
  
  // Set correct ApacheSolr port for Pantheon.
  variable_set('apachesolr_search_make_default', 1);
  variable_set('apachesolr_search_spellcheck', TRUE);
  
  // Set some permissions in the only ugly way possible
  // To extend this, just add more 'role_id' => array('perms') items to the array
  $perms = array(
    1 => array('access content', 'search content', 'use advanced search'),
    2 => array('access comments', 'access content', 'post comments', 'post comments without approval', 'search content', 'use advanced search'),
  );
  foreach($perms as $role_id => $perms) {
    db_query('DELETE FROM {permission} WHERE rid = %d', $role_id);
    db_query("INSERT INTO {permission} (rid, perm) VALUES (%d, '%s')", $role_id, implode(', ', $perms));
  }

  // Update the menu router information.
  menu_rebuild();
}
