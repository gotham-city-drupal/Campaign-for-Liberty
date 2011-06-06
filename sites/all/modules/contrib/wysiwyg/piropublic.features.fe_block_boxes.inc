<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function piropublic_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Contact Information';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'contact_information';
  $fe_block_boxes->body = '<p class="small-bq"><strong>Campaign for Liberty</strong><br /> <span class="small">5211 Port Royal Road, Suite 310<br /> Springfield, VA 22151</span></p><p class="small-bq">Phone: (703) 865-7162<br /> Fax: (703) 865-7549<br /> <a href="/contact">Contact us online</a></p>';

  $export['contact_information'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Copyright notice';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'footer_copyright';
  $fe_block_boxes->body = '<p class="copyright">&copy; Copyright 2011 Campaign for Liberty</p>';

  $export['footer_copyright'] = $fe_block_boxes;

  return $export;
}
