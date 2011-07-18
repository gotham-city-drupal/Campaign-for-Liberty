<?php

/**
 * Implementation of hook_user_default_roles().
 */
function piropublic_community_user_default_roles() {
  $roles = array();

  // Exported role: county coordinator
  $roles['county coordinator'] = array(
    'name' => 'county coordinator',
  );

  // Exported role: local coordinator
  $roles['local coordinator'] = array(
    'name' => 'local coordinator',
  );

  // Exported role: region coordinator
  $roles['region coordinator'] = array(
    'name' => 'region coordinator',
  );

  // Exported role: state coordinator
  $roles['state coordinator'] = array(
    'name' => 'state coordinator',
  );

  return $roles;
}
