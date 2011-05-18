<?php

/**
 * Implementation of hook_strongarm().
 */
function cod_base_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'configurable_timezones';
  $strongarm->value = '0';

  $export['configurable_timezones'] = $strongarm;
  return $export;
}
