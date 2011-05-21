<?php
/**
 * @file
 * Displays a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $css: An array of CSS files for the current page.
 * - $directory: The directory the theme is located in, e.g. themes/garland or
 *   themes/garland/minelli.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Page metadata:
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   element.
 * - $head: Markup for the HEAD element (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $body_classes: A set of CSS classes for the BODY tag. This contains flags
 *   indicating the current layout (multiple columns, single column), the
 *   current path, whether the user is logged in, and so on.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled in
 *   theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 * - $mission: The text of the site mission, empty when display has been
 *   disabled in theme settings.
 *
 * Navigation:
 * - $search_box: HTML to display the search box, empty if search has been
 *   disabled.
 * - $primary_links (array): An array containing primary navigation links for
 *   the site, if they have been configured.
 * - $secondary_links (array): An array containing secondary navigation links
 *   for the site, if they have been configured.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $left: The HTML for the left sidebar.
 * - $breadcrumb: The breadcrumb trail for the current page.
 * - $title: The page title, for use in the actual HTML content.
 * - $help: Dynamic help text, mostly for admin pages.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs: Tabs linking to any sub-pages beneath the current page (e.g., the
 *   view and edit tabs when displaying a node).
 * - $content: The main content of the current Drupal page.
 * - $right: The HTML for the right sidebar.
 * - $node: The node object, if there is an automatically-loaded node associated
 *   with the page, and the node ID is the second argument in the page's path
 *   (e.g. node/12345 and node/12345/revisions, but not comment/reply/12345).
 *
 * Footer/closing data:
 * - $feed_icons: A string of all feed icons for the current page.
 * - $footer_message: The footer message as defined in the admin settings.
 * - $footer : The footer region.
 * - $closure: Final closing markup from any modules that have altered the page.
 *   This variable should always be output last, after all other dynamic
 *   content.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml"
  xml:lang="<?php print $language->language ?>"
  lang="<?php print $language->language ?>"
  dir="<?php print $language->dir ?>">

<!-- Always force latest IE rendering engine (even in intranet) & Chrome Frame  -->
<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">

  <head>
<title><?php print $head_title; ?></title>
<?php print $head; ?>
<?php print $styles; ?>
<!--[if IE 8]>
  	<link rel="stylesheet" href="<?php print $base_path . $directory; ?>/css/ie8-fixes.css" type="text/css">
  	<![endif]-->
<!--[if IE 7]>
  	<link rel="stylesheet" href="<?php print $base_path . $directory; ?>/css/ie7-fixes.css" type="text/css">
  <![endif]-->
<!--[if lte IE 6]>
   	<link rel="stylesheet" href="<?php print $base_path . $directory; ?>/css/ie6-fixes.css" type="text/css">
  <![endif]-->
<?php print $scripts; ?>
  </head>
  <body class="<?php print $body_classes; ?>">
  <?php //global $user; print_r($user); ?>
    <div id="wrap-header">
      <div id="header">

        <div id="header-top">
          <a href="<?php print $front_page; ?>"
            title="<?php print $site_name; ?>" id="logo">&nbsp;</a>
            <?php if (!empty($header_top)): ?>
          <div class='block-area'>
          <?php print $header_top; ?>
          </div>
          <?php endif; ?>

          <?php if($search_box):?>
          <div id="header-search">
          <?php print $search_box; ?>
          </div>
          <?php endif;?>

        </div>

        <div id="header-bottom">
        <?php if (!empty($header_bottom)): ?>
        <?php print $header_bottom; ?>
        <?php endif; ?>
          <div id="main-menu">
          <?php print theme('links', $primary_links); ?>
          </div>
        </div>

      </div>
    </div>

    <div id="wrap-banner">
      <div id="banner">
        <div id="banner-content">
        <?php if (!empty($breadcrumb)): ?>
          <div id="breadcrumb">
          <?php print $breadcrumb; ?>
          </div>
          <?php endif; ?>
          <?php if ((!empty($title))&&(!$is_front)): ?>
          <h1 class="title" id="page-title">
          <?php print $title; ?>
          </h1>
          <?php endif; ?>
          <?php if (!empty($banner_area)): ?>
          <div id="banner-area">
          <?php print $banner_area; ?>
          </div>
          <?php endif; ?>
        </div>
      </div>
    </div>

    <div id="wrap-main">
      <div id="main-container">
      <?php if (!empty($left) || !empty($left_top)): ?>
        <div id="sidebar-left">
        <?php if($left_top): ?>
          <div id="left-top">
          <?php print $left_top; ?>
          </div>
          <?php endif; ?>

          <?php if($left): ?>
          <div id="left-bottom">
          <?php print $left; ?>
          </div>
          <?php endif;?>
        </div>
        <?php endif;?>



        <div id="main">
        <?php print $content_top; ?>
        <?php if (!empty($messages)): print $messages; endif; ?>
        <?php if (!empty($help)): print $help; endif; ?>
        <?php if (!empty($tabs)): ?>
          <div class="tabs">
          <?php print $tabs; ?>
          </div>
          <?php endif; ?>
          <?php print $content; ?>
        </div>

        <?php if (!empty($right) || !empty($right_top)): ?>
        <div id="sidebar-right" class="layout-column">

        <?php if($right_top): ?>
          <div id="right-top">
          <?php print $right_top; ?>
          </div>
          <?php endif; ?>

          <?php if($right): ?>
          <div id="right-bottom">
            <?php print $right; ?>
          </div>
          <?php endif;?>

        </div>
        <div class="clear">&nbsp;</div>
        <?php endif; ?>
      </div>
    </div>

    <div id="wrap-footer">
      <div id="footer">

        <div id="footer-top">
          <?php print $footer_top; ?>
        </div>

        <div id="footer-bottom">
          <?php print $footer_bottom; ?>
        </div>

      </div>
    </div>

    <?php print $closure; ?>
  </body>

</html>
