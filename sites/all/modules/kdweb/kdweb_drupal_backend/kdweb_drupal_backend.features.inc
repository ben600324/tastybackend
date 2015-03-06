<?php
/**
 * @file
 * kdweb_drupal_backend.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kdweb_drupal_backend_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
