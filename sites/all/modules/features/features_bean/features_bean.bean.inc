<?php
/**
 * @file
 * features_bean.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function features_bean_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'banner_block';
  $bean_type->label = 'Баннер блок';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['banner_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'data_personal';
  $bean_type->label = 'Персональные даные';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['data_personal'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'text_img';
  $bean_type->label = 'text-img';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['text_img'] = $bean_type;

  return $export;
}
