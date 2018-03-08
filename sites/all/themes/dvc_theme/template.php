<?php
function dvc_theme_css_alter(&$css) {
  unset($css['sites/all/modules/contrib/panels/css/panels.css']);
  $exclude = array(
    // 'modules/system/system.menus.css' => FALSE,
    // 'modules/system/system.theme.css' => FALSE,
    'sites/all/modules/contrib/panels/css/panels.css' => FALSE,
  );
  $css = array_diff_key($css, $exclude);
}

function dvc_theme_panels_default_style_render_region($vars) {
  $output = '';
  $output .= implode('', $vars['panes']);
  return $output;
}

function dvc_theme_panels_flexible($vars) {

  $css_id = $vars['css_id'];
  $content = $vars['content'];
  $settings = $vars['settings'];
  $display = $vars['display'];
  $layout = $vars['layout'];
  $handler = $vars['renderer'];

  panels_flexible_convert_settings($settings, $layout);

  $renderer = panels_flexible_create_renderer(FALSE, $css_id, $content, $settings, $display, $layout, $handler);

  $output = "<div class=\"panel-flexible " . $renderer->base['canvas'] . " clearfix\" $renderer->id_str>\n";
  $output .= "<div class=\"panel-flexible-inside " . $renderer->base['canvas'] . "-inside\">\n";

  $output .= panels_flexible_render_items($renderer, $settings['items']['canvas']['children'], $renderer->base['canvas']);

  // Wrap the whole thing up nice and snug
  $output .= "</div>\n</div>\n";

  return $output;

}


/**
 * Implements hook_preprocess_menu_link().
 */
function dvc_theme_preprocess_menu_link(&$vars) {
  if (arg(0) == 'node' && is_numeric(arg(1))
    && isset($vars['element']['#bid'])
    && $vars['element']['#bid']['module'] == 'menu_block'
    && $vars['element']['#bid']['delta'] == 2
  ) {

    static $term;
    if (!isset($term)) {
      $node = node_load(arg(1));
      $term = taxonomy_term_load($node->field_blog_categories[LANGUAGE_NONE][0]['tid']);
    }

    if ($vars['element']['#title'] == $term->name) {
      $vars['element']['#attributes']['class'][] = 'active';
      $vars['element']['#attributes']['class'][] = 'active-trail';
      $vars['element']['#localized_options']['attributes']['class'][] = 'active';
      $vars['element']['#localized_options']['attributes']['class'][] = 'active-trail';
      $vars['element']['#original_link']['localized_options']['attributes']['class'][] = 'active';
      $vars['element']['#original_link']['localized_options']['attributes']['class'][] = 'active-trail';
    }
  }
}


/**
 * Implements hook_preprocess_menu_block().
 */
function dvc_theme_preprocess_block(&$vars) {
  // Set block title from name parent menu item name.
  if ($vars['block_html_id'] == 'block-menu-block-1') {
    $menu_link = current($vars['elements']['#content']);
    if ($menu_link['#original_link']['menu_name']) {
      $parent_menu_link = menu_link_load($menu_link['#original_link']['plid']);
      $vars['block']->title = $parent_menu_link['link_title'];
      $vars['elements']['#block']->title = $parent_menu_link['link_title'];
      if (!empty($vars['title_suffix']['contextual_links']['#element']['#block']->title)) {
        $vars['title_suffix']['contextual_links']['#element']['#block']->title = $parent_menu_link['link_title'];
      }
      $vars['elements']['#config']['title_link'] = $parent_menu_link['link_title'];
      $vars['elements']['#block']->subject = $parent_menu_link['link_title'];
      $vars['block']->subject = $parent_menu_link['link_title'];
    }
  }
}

/**
 * Insert themed breadcrumb page navigation at top of the node content.
 */
function dvc_theme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  $menu_item = menu_get_item();

  if (!empty($breadcrumb)) {

    // Use CSS to hide titile .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $breadcrumb[] = '<span class="inline even last">' . drupal_get_title() . '</span>';

    $output .= '<nav class="breadcrumb">' . implode(' » ', $breadcrumb) . '</nav>';
    return $output;
  }
}

/**
 * Implemetns dvc_theme template_preprocess_html().
 */
function dvc_theme_preprocess_html(&$variables) {
  $vars = variable_get('custom_admin_common_variables', array());
  $variables['additional_scripts'] = $vars['scripts']['js_scripts'];

  if (arg(0) == 'taxonomy' && arg(1) == 'term'
    && is_numeric(arg(2))
  ) {
    $meta = metatags_get_entity_metatags(arg(2), 'taxonomy_term');

    $variables['custom_head_title'] = $meta['title']['#attached']['metatag_set_preprocess_variable'][0][2];
  }
}


/**
 * Implements template_admin_menu_links().
 */
function dvc_theme_admin_menu_links($variables) {
  $destination = &drupal_static('admin_menu_destination');
  $elements = $variables['elements'];

  if (!isset($destination)) {
    $destination = drupal_get_destination();
    $destination = $destination['destination'];
  }

  // The majority of items in the menu are sorted already, but since modules
  // may add or change arbitrary items anywhere, there is no way around sorting
  // everything again. element_sort() is not sufficient here, as it
  // intentionally retains the order of elements having the same #weight,
  // whereas menu links are supposed to be ordered by #weight and #title.
  uasort($elements, 'admin_menu_element_sort');
  $elements['#sorted'] = TRUE;

  $output = '';
  foreach (element_children($elements) as $path) {
    // Early-return nothing if user does not have access.
    if (isset($elements[$path]['#access']) && !$elements[$path]['#access']) {
      continue;
    }
    $elements[$path] += array(
      '#attributes' => array(),
      '#options' => array(),
    );
    // Render children to determine whether this link is expandable.
    if (isset($elements[$path]['#type']) || isset($elements[$path]['#theme']) || isset($elements[$path]['#pre_render'])) {
      $elements[$path]['#children'] = drupal_render($elements[$path]);
    }
    else {
      $elements[$path]['#children'] = theme('admin_menu_links', array('elements' => $elements[$path]));
      if (!empty($elements[$path]['#children'])) {
        $elements[$path]['#attributes']['class'][] = 'expandable';
      }
      if (isset($elements[$path]['#attributes']['class'])) {
        $elements[$path]['#attributes']['class'] = $elements[$path]['#attributes']['class'];
      }
    }

    $link = '';
    // Handle menu links.
    if (isset($elements[$path]['#href'])) {
      // Strip destination query string from href attribute and apply a CSS class
      // for our JavaScript behavior instead.
      if (isset($elements[$path]['#options']['query']['destination']) && $elements[$path]['#options']['query']['destination'] == $destination) {
        unset($elements[$path]['#options']['query']['destination']);
        $elements[$path]['#options']['attributes']['class'][] = 'admin-menu-destination';
      }
      if ($elements[$path]['#href'] == 'node/42') {
        $elements[$path]['#href'] = 'help';
      }

      $link = l($elements[$path]['#title'], $elements[$path]['#href'], $elements[$path]['#options']);
    }
    // Handle plain text items, but do not interfere with menu additions.
    elseif (!isset($elements[$path]['#type']) && isset($elements[$path]['#title'])) {
      if (!empty($elements[$path]['#options']['html'])) {
        $title = $elements[$path]['#title'];
      }
      else {
        $title = check_plain($elements[$path]['#title']);
      }
      $attributes = '';
      if (isset($elements[$path]['#options']['attributes'])) {
        $attributes = drupal_attributes($elements[$path]['#options']['attributes']);
      }
      $link = '<span' . $attributes . '>' . $title . '</span>';
    }

    $output .= '<li' . drupal_attributes($elements[$path]['#attributes']) . '>';
    $output .= $link . $elements[$path]['#children'];
    $output .= '</li>';
  }
  // @todo #attributes probably required for UL, but already used for LI.
  // @todo Use $element['#children'] here instead.
  if ($output) {
    $elements['#wrapper_attributes']['class'][] = 'dropdown';
    $attributes = drupal_attributes($elements['#wrapper_attributes']);
    $output = "\n" . '<ul' . $attributes . '>' . $output . '</ul>';
  }

  return $output;
}
