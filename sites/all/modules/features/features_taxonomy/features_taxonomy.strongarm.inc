<?php
/**
 * @file
 * features_taxonomy.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_taxonomy_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_blog_categories_pattern';
  $strongarm->value = '[term:name]';
  $export['pathauto_taxonomy_term_blog_categories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '[term:name]';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  return $export;
}
