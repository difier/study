<?php
/**
 * @file
 * features_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function features_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_3ef7a5c8-73e8-45ab-9e06-58c361d55bb0';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Панель',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3afae261-ff7e-4fa6-9212-dc42e6777f7e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-02a32f28-77fc-4309-b2b9-0ac3de6ee0a0';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-taxonomy_term-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '02a32f28-77fc-4309-b2b9-0ac3de6ee0a0';
    $display->content['new-02a32f28-77fc-4309-b2b9-0ac3de6ee0a0'] = $pane;
    $display->panels['middle'][0] = 'new-02a32f28-77fc-4309-b2b9-0ac3de6ee0a0';
    $pane = new stdClass();
    $pane->pid = 'new-8b23723b-4294-4c8c-8a81-fa1548816561';
    $pane->panel = 'middle';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8b23723b-4294-4c8c-8a81-fa1548816561';
    $display->content['new-8b23723b-4294-4c8c-8a81-fa1548816561'] = $pane;
    $display->panels['middle'][1] = 'new-8b23723b-4294-4c8c-8a81-fa1548816561';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8b23723b-4294-4c8c-8a81-fa1548816561';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_3ef7a5c8-73e8-45ab-9e06-58c361d55bb0'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function features_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'main_page';
  $page->task = 'page';
  $page->admin_title = 'Main page';
  $page->admin_description = '';
  $page->path = 'main';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_main_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'main_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0f90e43f-3dfc-4a9c-8c66-87d9379776ee';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cff28721-e4e8-41e9-8dfb-edccb38ead14';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-slider-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'baner-slider',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cff28721-e4e8-41e9-8dfb-edccb38ead14';
    $display->content['new-cff28721-e4e8-41e9-8dfb-edccb38ead14'] = $pane;
    $display->panels['center'][0] = 'new-cff28721-e4e8-41e9-8dfb-edccb38ead14';
    $pane = new stdClass();
    $pane->pid = 'new-438add2c-4a0a-4957-b1e4-16961457e9c3';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'bean-blok-na-glavnoy';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '438add2c-4a0a-4957-b1e4-16961457e9c3';
    $display->content['new-438add2c-4a0a-4957-b1e4-16961457e9c3'] = $pane;
    $display->panels['center'][1] = 'new-438add2c-4a0a-4957-b1e4-16961457e9c3';
    $pane = new stdClass();
    $pane->pid = 'new-616cacab-1aa5-4428-9e6c-672897798684';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-blog-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '616cacab-1aa5-4428-9e6c-672897798684';
    $display->content['new-616cacab-1aa5-4428-9e6c-672897798684'] = $pane;
    $display->panels['center'][2] = 'new-616cacab-1aa5-4428-9e6c-672897798684';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['main_page'] = $page;

  return $pages;

}
