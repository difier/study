<?php
/**
 * @file
 * features_img_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function features_img_style_image_default_styles() {
  $styles = array();

  // Exported image style: 610x355.
  $styles['610x355'] = array(
    'label' => '610x355',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 610,
          'height' => 355,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 670x305.
  $styles['670x305'] = array(
    'label' => '670x305',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 670,
          'height' => 305,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
