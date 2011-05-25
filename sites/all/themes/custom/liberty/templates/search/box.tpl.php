<?php // $Id: box.tpl.php,v 1.0 2011/4/28 00:32:00 pirog Exp $ ?>
<?php print $pre; ?>

<div <?php print drupal_attributes($attr); ?>>

  <?php if ($title): ?>
    <h2 class="box-title"><?php print $title; ?></h2>
  <?php endif; ?>

  <div class="box-content clear-block">
    <?php print $content; ?>
  </div>
</div>

<?php print $post; ?>
