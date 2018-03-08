<?php
/**
 * @file
 * features_bean.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_bean_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner_link_mobile|bean|banner_block|default';
  $field_group->group_name = 'group_banner_link_mobile';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'banner_block';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ссылка баннера mobile',
    'weight' => '2',
    'children' => array(
      0 => 'field_banner_photo_mobile',
      1 => 'field_banner_photo_mobile_hover',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Ссылка баннера mobile',
      'instance_settings' => array(
        'link_to' => 'field_banner_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'group-banner-link-mobile field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_banner_link_mobile|bean|banner_block|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner_link_table|bean|banner_block|default';
  $field_group->group_name = 'group_banner_link_table';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'banner_block';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ссылка баннера table',
    'weight' => '1',
    'children' => array(
      0 => 'field_banner_photo_table',
      1 => 'field_banner_photo_table_hover',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Ссылка баннера table',
      'instance_settings' => array(
        'link_to' => 'field_banner_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'group-banner-link-table field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_banner_link_table|bean|banner_block|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner_link|bean|banner_block|default';
  $field_group->group_name = 'group_banner_link';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'banner_block';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ссылка баннера',
    'weight' => '0',
    'children' => array(
      0 => 'field_banner_photo',
      1 => 'field_field_banner_photo_hover',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Ссылка баннера',
      'instance_settings' => array(
        'link_to' => 'field_banner_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'group-banner-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_banner_link|bean|banner_block|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ссылка баннера');
  t('Ссылка баннера mobile');
  t('Ссылка баннера table');

  return $field_groups;
}
