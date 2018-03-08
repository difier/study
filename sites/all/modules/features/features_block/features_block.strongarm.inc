<?php
/**
 * @file
 * features_block.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_block_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_admin_common_variables';
  $strongarm->value = array(
    'scripts' => array(
      'ganalitics' => '',
      'metrika' => '',
      'vk_comment' => 'Vk comments',
      'vk_groups' => '<script type="text/javascript" src="//vk.com/js/api/openapi.js?116"></script>

<!-- VK Widget -->
<div id="vk_groups"></div>
<script type="text/javascript">
VK.Widgets.Group("vk_groups", {mode: 0, width: "274", height: "265", color1: \'FFFFFF\', color2: \'2B587A\', color3: \'5B7FA6\'}, 71543513);
</script>',
      'social_groups' => '',
      'share' => '<script src="//yastatic.net/es5-shims/0.0.2/es5-shims.min.js"></script>
<script src="//yastatic.net/share2/share.js"></script>
<div class="ya-share2" data-services="vkontakte,facebook,odnoklassniki,gplus,twitter,viber,whatsapp,telegram"></div>',
    ),
  );
  $export['custom_admin_common_variables'] = $strongarm;

  return $export;
}
