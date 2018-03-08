<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to main-menu administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>

<div id="page-wrapper" class="page-wrapper">
  <header id="header" class="header">
    <div class="general-layout container padding">
        <?php if ($page['pre_header']): ?>
          <div class="pre-header">
            <?php print render($page['pre_header']); ?>
          </div>
        <?php endif; ?>
      <div class="inner-wrapper">
        <div class="header-inner clearfix row">
          <?php if ($logo): ?><div id="logo" class="logo"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><img src="<?php print $logo; ?>"/></a></div><?php endif; ?>
          <?php if ($page['header']): ?>
            <?php print render($page['header']); ?>
          <?php endif; ?>
        </div>
      </div>
    </div>
  </header>

  <div class="content-sidebar-wrap">
    <div class="general-layout content-inner container" id="content">
      <?php if (!empty($tabs['#primary'])): ?>
        <div class="tabs-wrapper">
          <?php print render($tabs); ?>
        </div>
      <?php endif; ?>
      <?php if ($page['content_top']): ?><div id="content_top"><?php print render($page['content_top']); ?></div><div class="divider clearfix"></div><?php endif; ?>
      <?php if ($page['content_bot']): ?><div id="content_bot"><div class="filter-wrap"><?php print render($page['content_bot']); ?></div></div><div class="divider clearfix"></div><?php endif; ?>
      <?php print render($breadcrumb); ?>
      <section id="post-content" class="post-content clearfix" role="main">
        <?php print render($page['help']); ?>
        <?php print $messages; ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>

        <?php if ($page['sidebar_first']): ?>
          <aside id="first-sidebar" class="first-sidebar inside-padding" role="complementary">
            <?php print render($page['sidebar_first']); ?>
          </aside>
        <?php endif; ?>

        <div class="content-wrapper">
          <div class="main-content inside-padding">
            <?php print render($title_prefix); ?>
            <?php
            if ($title): ?>
              <h1>
                <?php print $title; ?>
              </h1>
            <?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php print render($page['content']); ?>
          </div>
        </div>

        <?php if ($page['sidebar_second']): ?>
          <aside class="right-sidebar">
            <div id="second-sidebar" class="second-sidebar inside-padding" role="complementary">
              <?php print render($page['sidebar_second']); ?>
            </div>
          </aside>
        <?php endif; ?>
      </section>
      <?php if ($page['inner_content']): ?>
        <div class="inner-content">
          <?php print render($page['inner_content']); ?>
        </div>
      <?php endif; ?>
    </div>
  </div>

  <footer id="footer" class="footer">
    <div class="general-layout clearfix footer-inner container padding">
      <?php if ($page['footer']): ?>
        <?php print render($page['footer']) ?>
      <?php endif; ?>

      <?php if ($page['footer_first'] || $page['footer_second'] || $page['footer_third']): ?>
        <div id="footer-area" class="clearfix">
          <?php if ($page['footer_first']): ?>
            <div class="column"><?php print render($page['footer_first']); ?></div>
          <?php endif; ?>
          <?php if ($page['footer_second']): ?>
            <div class="column"><?php print render($page['footer_second']); ?></div>
          <?php endif; ?>
          <?php if ($page['footer_third']): ?>
            <div class="column"><?php print render($page['footer_third']); ?></div>
          <?php endif; ?>
        </div>
      <?php endif; ?>
    </div>
  </footer>
</div>
