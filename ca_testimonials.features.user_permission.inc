<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_testimonials_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_testimonials content
  $permissions['create ca_testimonials content'] = array(
    'name' => 'create ca_testimonials content',
    'roles' => array(
      '0' => 'testimonials administrator',
    ),
  );

  // Exported permission: delete any ca_testimonials content
  $permissions['delete any ca_testimonials content'] = array(
    'name' => 'delete any ca_testimonials content',
    'roles' => array(
      '0' => 'testimonials administrator',
    ),
  );

  // Exported permission: delete own ca_testimonials content
  $permissions['delete own ca_testimonials content'] = array(
    'name' => 'delete own ca_testimonials content',
    'roles' => array(
      '0' => 'testimonials administrator',
    ),
  );

  // Exported permission: edit any ca_testimonials content
  $permissions['edit any ca_testimonials content'] = array(
    'name' => 'edit any ca_testimonials content',
    'roles' => array(
      '0' => 'testimonials administrator',
    ),
  );

  // Exported permission: edit own ca_testimonials content
  $permissions['edit own ca_testimonials content'] = array(
    'name' => 'edit own ca_testimonials content',
    'roles' => array(
      '0' => 'testimonials administrator',
    ),
  );

  return $permissions;
}
