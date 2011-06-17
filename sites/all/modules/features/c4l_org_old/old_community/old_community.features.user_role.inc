<?php

/**
 * Implementation of hook_user_default_roles().
 */
function old_community_user_default_roles() {
  $roles = array();

  // Exported role: county coordinator
  $roles['county coordinator'] = array(
    'name' => 'county coordinator',
  );

  // Exported role: local coordinator
  $roles['local coordinator'] = array(
    'name' => 'local coordinator',
  );

  // Exported role: national_blogger
  $roles['national_blogger'] = array(
    'name' => 'national_blogger',
  );

  // Exported role: regional coordinator
  $roles['regional coordinator'] = array(
    'name' => 'regional coordinator',
  );

  // Exported role: state coordinator
  $roles['state coordinator'] = array(
    'name' => 'state coordinator',
  );

  return $roles;
}
