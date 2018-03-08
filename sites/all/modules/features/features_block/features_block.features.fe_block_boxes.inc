<?php
/**
 * @file
 * features_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function features_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Блок на главной';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_front_page';
  $fe_block_boxes->body = '<p>ВСЕМ, кто хочет процветать! Приглашаю в свой бизнес серьёзных, думающих, работоспособных, ищущих хорошие возможности заработать, а не причины не делать. Для знакомства пишите на почту!</p><p><img src="/sites/default/files/front-img.png" alt="" width="611" height="335" /></p>';

  $export['block_front_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '(c) Copyright';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'copyright';
  $fe_block_boxes->body = '<p>© 2017. Бизнес-сайт Анны Александровой</p><p><a href="/politics">Политика конфиденциальности</a></p>';

  $export['copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Сделано в Веб-Ковалев';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'power_by';
  $fe_block_boxes->body = '<p>Сделано с <span class="heart">heart</span> в Веб-Ковалев</p><p><a href="/user">Вход администратора</a></p>';

  $export['power_by'] = $fe_block_boxes;

  return $export;
}
