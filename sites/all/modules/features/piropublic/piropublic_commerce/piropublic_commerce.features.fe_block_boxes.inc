<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function piropublic_commerce_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'footer legal text for donation pages';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'donation_footer';
  $fe_block_boxes->body = '<p><sup>Because of Campaign for Liberty\'s tax-exempt status under IRC Sec. 501 (C) (4) and its state and federal legislative activities, contributions are not tax deductible as charitable contributions (IRC § 170) or as a business deduction (IRC § 162(e)(1)).</sup></p>';

  $export['donation_footer'] = $fe_block_boxes;

  return $export;
}
