<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml"
  xml:lang="<?php print $language->language ?>"
  lang="<?php print $language->language ?>"
  dir="<?php print $language->dir ?>">

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
      <?php if ((!empty($title))&&(!$is_front)): ?>
        <h1>
        <?php print $title; ?>
        </h1>
        <?php endif; ?>
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
