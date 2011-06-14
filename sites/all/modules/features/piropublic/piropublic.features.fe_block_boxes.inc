<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function piropublic_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Copyright notice';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'footer_copyright';
  $fe_block_boxes->body = '<p class="copyright">&copy; Copyright 2011 Campaign for Liberty</p>';

  $export['footer_copyright'] = $fe_block_boxes;

  return $export;
}
