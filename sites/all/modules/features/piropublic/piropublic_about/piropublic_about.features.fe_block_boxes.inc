<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function piropublic_about_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'FAQ Block';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'faq';
  $fe_block_boxes->body = '<p class="rtecenter">Check out our<br /><a href="/about/faq">Frequently Asked Questions</a></p>';

  $export['faq'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'FAQ Question Block';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'faq_question';
  $fe_block_boxes->body = '<p class="rtecenter" style="text-align: center; margin-left:23px;"><a class="red-btn-1" href="/contact">ASK IT</a></p>';

  $export['faq_question'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Mission Statement';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'mission_statement';
  $fe_block_boxes->body = '<p>Our mission is to promote and defend the great American principles of individual liberty, constitutional government, sound money, free markets, and a noninterventionist foreign policy, by means of educational and political activity.</p>';

  $export['mission_statement'] = $fe_block_boxes;

  return $export;
}
