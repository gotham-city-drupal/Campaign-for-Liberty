<?php // $Id: comment.tpl.php,v 1.0 2011/4/28 00:32:00 pirog Exp $ ?>
<?php print $pre; ?>

<div <?php print drupal_attributes($attr); ?>>

  <?php if ($title): ?>
    <h2 class='comment-title'>
      <?php if ($new): ?>
        <a class="new"><?php print t('New:'); ?></a>
      <?php endif; ?>
      <?php print $title; ?>
    </h2>
  <?php endif; ?>

  <?php if ($submitted): ?>
    <div class='comment-submitted clear-block'>
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <?php print $picture; ?>

  <div class="comment-content clear-block">
    <?php print $content; ?>
  </div>

  <?php if ($links): ?>
    <div class="comment-links clear-block"><?php print $links; ?></div>
  <?php endif; ?>

</div>

<?php print $post; ?>
