<?php
/**
 * @file
 * features_ct_banner.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_ct_banner_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner_link|node|slider|default';
  $field_group->group_name = 'group_banner_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slider';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ссылка баннера',
    'weight' => '0',
    'children' => array(
      0 => 'field_slider_img',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Ссылка баннера',
      'instance_settings' => array(
        'link_to' => 'field_slider_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'group-banner-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_banner_link|node|slider|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ссылка баннера');

  return $field_groups;
}
