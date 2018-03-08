<?php
/**
 * @file
 * features_breadcrumbs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_breadcrumbs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}
