<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_testimonials_user_default_roles() {
  $roles = array();

  // Exported role: testimonials administrator
  $roles['testimonials administrator'] = array(
    'name' => 'testimonials administrator',
  );

  return $roles;
}
