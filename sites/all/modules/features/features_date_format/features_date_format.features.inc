<?php
/**
 * @file
 * features_date_format.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_date_format_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function features_date_format_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['d.m.Y'] = 'd.m.Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function features_date_format_date_format_types() {
  $format_types = array();
  // Exported date format type: day_month_year_dot_style
  $format_types['day_month_year_dot_style'] = 'Day Month Year, dot style';
  return $format_types;
}
