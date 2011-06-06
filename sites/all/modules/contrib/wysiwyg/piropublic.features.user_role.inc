<?php

/**
 * Implementation of hook_user_default_roles().
 */
function piropublic_user_default_roles() {
  $roles = array();

  // Exported role: headquarters
  $roles['headquarters'] = array(
    'name' => 'headquarters',
  );

  // Exported role: staff
  $roles['staff'] = array(
    'name' => 'staff',
  );

  return $roles;
}
