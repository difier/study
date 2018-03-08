<?php
/**
 * @file
 * features_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function features_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: devel.
  $menus['devel'] = array(
    'menu_name' => 'devel',
    'title' => 'Разработка',
    'description' => 'Development link',
  );
  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Главное меню',
    'description' => 'Меню основных ссылок показывает главные разделы сайта. Обычно выводятся в виде горизонтальной полосы вверху страницы.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'Меню управления содержит ссылки на страницы администрирования сайтом.',
  );
  // Exported menu: menu-blog-categories-menu.
  $menus['menu-blog-categories-menu'] = array(
    'menu_name' => 'menu-blog-categories-menu',
    'title' => 'Рубрики блога',
    'description' => '',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Навигация',
    'description' => 'Меню навигации создаётся системой и содержит ссылки, предназначенные пользователям. Ссылки добавляются в меню автоматически некоторыми модулями и показываются при наличии соответствующих прав пользователя.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'Меню пользователя содержит ссылки, связанные с учетной записью текущего пользователя, а также ссылку «Выход».',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Development link');
  t('Features');
  t('Management');
  t('Menu items for any enabled features.');
  t('User menu');
  t('Главное меню');
  t('Меню навигации создаётся системой и содержит ссылки, предназначенные пользователям. Ссылки добавляются в меню автоматически некоторыми модулями и показываются при наличии соответствующих прав пользователя.');
  t('Меню основных ссылок показывает главные разделы сайта. Обычно выводятся в виде горизонтальной полосы вверху страницы.');
  t('Меню пользователя содержит ссылки, связанные с учетной записью текущего пользователя, а также ссылку «Выход».');
  t('Меню управления содержит ссылки на страницы администрирования сайтом.');
  t('Навигация');
  t('Разработка');
  t('Рубрики блога');

  return $menus;
}
