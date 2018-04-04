<?php
/**
 * @file
 * features_block.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_block_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_admin_common_variables';
  $strongarm->value = array(
    'scripts' => array(
      'ganalitics' => '',
      'metrika' => '',
      'vk_comment' => '',
      'vk_groups' => '',
      'social_groups' => '',
      'share' => '',
      'js_scripts' => '',
    ),
  );
  $export['custom_admin_common_variables'] = $strongarm;

  return $export;
}
