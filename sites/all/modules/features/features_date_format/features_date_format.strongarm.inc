<?php
/**
 * @file
 * features_date_format.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_date_format_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_day_month_year_dot_style';
  $strongarm->value = 'd.m.Y';
  $export['date_format_day_month_year_dot_style'] = $strongarm;

  return $export;
}
