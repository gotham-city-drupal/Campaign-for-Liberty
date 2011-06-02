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
<html<?php print drupal_attributes($html_attr); ?>>

<!-- Always force latest IE rendering engine (even in intranet) & Chrome Frame  -->
<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />

<head>

<?php print $head; ?>
<?php print $styles; ?>
<!--[if IE 8]>
  <?php print $ie8_styles; ?>
<![endif]-->
<!--[if IE 7]>
  <?php print $ie7_styles; ?>
<![endif]-->
<!--[if lte IE 6]>
  <?php print $ie6_styles; ?>
<![endif]-->
<?php print $scripts; ?>
<title><?php print $head_title; ?>
</title>
</head>

<body<?php print drupal_attributes($attr); ?>>

  <div id="header">
  <div id="header_main">
    <div class="limiter clear-block">
      <div id="header_top">
		<?php // TODO: this needs to be changed so you can upload the logo ?>
        <a href="<?php print $front_page; ?>"
          title="<?php print $site_name; ?>" id="logo">&nbsp;</a>
        <div class="header_links">
          <?php print $header_top; ?>
        </div>

        <?php if ($search_box): ?>
        <div id="header_search">
            <?php print $search_box; ?>
        </div>
        <?php endif; ?>
      </div>

  	  <div id="navigation">
    	<?php if (!empty($header_bottom)): ?>
        <?php print $header_bottom; ?>
        <?php endif; ?>
      	<?php print $skip_link; ?>
      	<div id="main_menu">
          <?php print $primary_links; ?>
        </div>
  	 </div>
    </div>
    </div>
 </div>


  <div id="banner">
  <div id="banner_main">
    <div class="limiter clear-block">
	  <div id="banner_content">
        <?php if (!empty($breadcrumb)): ?>
        <div id="breadcrumb">
          <?php print $breadcrumb; ?>
        </div>
        <?php endif; ?>
        <?php if ((!empty($title))&&(!$is_front)): ?>
        <h1 class="title" id="page_title">
          <?php print $title; ?>
        </h1>
        <?php endif; ?>
        <?php if (!empty($banner_area)): ?>
        <div id="banner_area">
          <?php print $banner_area; ?>
        </div>
        <?php endif; ?>
      </div>
    </div>
  </div>
  </div>


  <div id="page">
    <div class="limiter clear-block">
      <div id="main" class="clear-block">

        <?php if (!empty($left) || !empty($left_top)): ?>
        <div id="left" class="sidebar">
          <?php if($left_top): ?>
            <div id="left_top">
              <?php print $left_top; ?>
            </div>
           <?php endif; ?>

           <?php if($left): ?>
            <div id="left_bottom">
              <?php print $left; ?>
            </div>
           <?php endif;?>
        </div>
        <?php endif; ?>

        <div id="content" class="clear-block">
          <?php if (!empty($messages)): print $messages; endif; ?>
          <?php if (!empty($help)): print $help; endif; ?>
          <?php if (!empty($tabs)): ?>
          <div class="tabs">
            <?php print $tabs; ?>
          </div>
          <?php endif; ?>

          <?php if ($title): ?>
          <h1 class="page_title">
            <?php print $title; ?>
          </h1>

          <?php endif; ?>
          <?php print $content_top; ?>
          <?php print $content; ?>
          <?php print $feed_icons; ?>
          <?php print $content_bottom; ?>
        </div>

        <?php if (!empty($right) || !empty($right_top)): ?>
        <div id="right" class="sidebar">
          <?php if($right_top): ?>
          <div id="right_top">
            <?php print $right_top; ?>
          </div>
          <?php endif; ?>

          <?php if($right): ?>
          <div id="right_bottom">
            <?php print $right; ?>
          </div>
          <?php endif;?>
        </div>
        <?php endif; ?>
      </div>
    </div>
  </div>

  <div id="footer">
  <div id="footer_main">
    <div class="limiter clear-block">

      <div id="footer_top" class="clear-block">
        <div id="footer_top_left">
         <?php print $footer_top_left; ?>
        </div>
        <div id="footer_top_mid">
          <?php print $footer_top_mid; ?>
        </div>
        <div id="footer_top_right">
          <?php print $footer_top_right; ?>
        </div>
      </div>

      <div id="footer_bottom" class="clear-block">
        <?php print $footer_bottom; ?>
      </div>
    </div>
  </div>
  </div>

  <?php print $closure; ?>

</body>
</html>
