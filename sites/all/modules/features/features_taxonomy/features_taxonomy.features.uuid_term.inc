<?php
/**
 * @file
 * features_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function features_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'постановка целей',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0bb4c13f-241d-47a5-b80f-9b37a28bd947',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'успех',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '130703f3-4dcc-4a4b-9b81-f15b5f8e95d8',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'мотивация',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2bbcba57-be64-4243-a55b-e1ca79775ab3',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Продукция',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6f97d9d0-bca3-491e-9e97-084b01942527',
    'vocabulary_machine_name' => 'blog_categories',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Личное',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '73e0f570-43d4-4499-a644-5852f4b7270c',
    'vocabulary_machine_name' => 'blog_categories',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'идеи',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '83a4f9e1-257a-4679-b5c0-8813f3e7cfe2',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Новости',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9ef82bf9-f616-46db-91c5-a2318c5a2cd8',
    'vocabulary_machine_name' => 'blog_categories',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Бизнес',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c06e13b7-5f78-4f6f-85b3-ca51945d7a0f',
    'vocabulary_machine_name' => 'blog_categories',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Саморазвитие',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c0ed3ed2-c5ae-4aca-b37b-040616d81863',
    'vocabulary_machine_name' => 'blog_categories',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
