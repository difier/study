<?php
/**
 * @file
 * features_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-banner-2'] = array(
    'cache' => 1,
    'css_class' => 'side-block-img',
    'custom' => 0,
    'delta' => 'banner-2',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'list-me
registration',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => -15,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -14,
      ),
      'tao' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-banner-3'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'banner-3',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-personal-data'] = array(
    'cache' => 1,
    'css_class' => 'side-block-account',
    'custom' => 0,
    'delta' => 'personal-data',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'list-me
registration',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => -19,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -18,
      ),
      'tao' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-Баннер-1'] = array(
    'cache' => 1,
    'css_class' => 'side-block-reg',
    'custom' => 0,
    'delta' => 'Баннер-1',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'list-me
registration',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => -16,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -15,
      ),
      'tao' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-block_front_page'] = array(
    'cache' => -1,
    'css_class' => 'business-invite',
    'custom' => 0,
    'machine_name' => 'block_front_page',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => 'Приглашаю в свой бизнес',
    'visibility' => 0,
  );

  $export['block-copyright'] = array(
    'cache' => -1,
    'css_class' => 'copyright',
    'custom' => 0,
    'machine_name' => 'copyright',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-power_by'] = array(
    'cache' => -1,
    'css_class' => 'heart-block',
    'custom' => 0,
    'machine_name' => 'power_by',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => -4,
      ),
      'rubik' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => -4,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => -4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['custom-shared'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shared',
    'module' => 'custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['custom-social_groups'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'social_groups',
    'module' => 'custom',
    'node_types' => array(),
    'pages' => 'list-me
registration',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => -13,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['custom-vk_comment'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'vk_comment',
    'module' => 'custom',
    'node_types' => array(
      0 => 'article',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => -18,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -17,
      ),
      'tao' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['custom-vk_groups'] = array(
    'cache' => -1,
    'css_class' => 'side-block-follow',
    'custom' => 0,
    'delta' => 'vk_groups',
    'module' => 'custom',
    'node_types' => array(),
    'pages' => 'list-me
registration',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => -14,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -13,
      ),
      'tao' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => -10,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -10,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => -7,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -7,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => -7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['diff-inline'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'inline',
    'module' => 'diff',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'language',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => -2,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -2,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => -2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => -9,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -9,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-blog-categories-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-blog-categories-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'css_class' => 'side-block-menu',
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(
      0 => 'page',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => -18,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -17,
      ),
      'tao' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -17,
      ),
    ),
    'title' => '[current-page:title]',
    'visibility' => 0,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'css_class' => 'side-block-menu side-block-rubric',
    'custom' => 0,
    'delta' => 2,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '<?php

if (arg(0) == \'blog\') {
  return TRUE;
}
elseif (arg(0) == \'taxonomy\') {
  $term = taxonomy_term_load(arg(2));
  if ($term->vid == 3 || $term->vid == 1) {
    return TRUE;
  }
}
elseif (arg(0) == \'node\') {
  $node = node_load(arg(1));

  if ($node->type == \'article\') {
    return TRUE;
  }
}
return FALSE;',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => -17,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -16,
      ),
      'tao' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -16,
      ),
    ),
    'title' => 'Рубрики блога',
    'visibility' => 2,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => -1,
      ),
      'rubik' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => -1,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => 1,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 1,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => -1,
      ),
      'rubik' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => -1,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => 4,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 4,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => -19,
      ),
      'rubik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => -19,
      ),
      'tao' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -19,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => 'main-menu',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => -11,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -11,
      ),
      'tao' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -11,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => -8,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -8,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => -8,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => 2,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 2,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => -6,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -6,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => -6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => -5,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -5,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => -3,
      ),
      'rubik' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => -3,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => -3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => 3,
      ),
      'rubik' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => 3,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-blog-block'] = array(
    'cache' => -1,
    'css_class' => 'blog',
    'custom' => 0,
    'delta' => 'blog-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-blog-block_1'] = array(
    'cache' => -1,
    'css_class' => 'block-read-list',
    'custom' => 0,
    'delta' => 'blog-block_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'article',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'dvc_theme',
        'weight' => -19,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -18,
      ),
      'tao' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-slider-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'slider-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'dvc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dvc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
