<?php
/**
 * @file
 * kdweb_drupal_backend.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function kdweb_drupal_backend_user_default_roles() {
  $roles = array();

  // Exported role: seo.
  $roles['seo'] = array(
    'name' => 'seo',
    'weight' => 4,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 3,
  );

  return $roles;
}
