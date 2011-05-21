<?php
// $Id: views-view-unformatted.tpl.php,v 1.6 2008/10/01 20:52:11 merlinofchaos Exp $
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

drupal_add_css(drupal_get_path('theme', 'cfl') . '/css/banner.css');
?>
<!--ADD THE FOLLOWING-->
<div id="banner-pager-wrapper" class="front-video-carousel-controls">
  <a class="prev" href="#">Prev</a>
  <div id="banner-pager"></div>
  <a class="next" href="#">Next</a>
</div>
<!-- END ADD-->

<div id="homepage_banner">
<?php foreach ($rows as $id => $row): ?>
  <div class="<?php print $classes[$id]; ?>">
  <?php print $row; ?>
  </div>
  <?php endforeach; ?>
</div>

