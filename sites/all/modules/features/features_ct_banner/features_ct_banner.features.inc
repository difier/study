<?php
/**
 * @file
 * features_ct_banner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_ct_banner_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_ct_banner_node_info() {
  $items = array(
    'slider' => array(
      'name' => t('Баннер (слайдер)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
