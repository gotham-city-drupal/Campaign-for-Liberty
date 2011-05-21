<!-- START: block-<?php print $block->module .'_'. $block->delta; ?> -->
<div id="block-<?php print $block->module .'-'. $block->delta; ?>"
  class="block block-<?php print $block->module ?>">
  <?php if ($block->subject): ?>
  <h2>
  <?php print $block->subject ?>
  </h2>
  <?php echo l('RSS', 'rss/newswire',array('attributes' =>array('class'=>'feed-icon'))); ?>
  <?php endif;?>

  <div class="content">
  <?php print $block->content ?>
  </div>
</div>
<!-- END: block1 <?php print $block->module .'_'. $block->delta; ?> -->
