<?php
// $Id: zipcode.in.inc,v 1.2 2010/05/26 15:02:41 thierrygd Exp $

// Copyright 2010 Thierry GUEGAN http://www.arvoriad.com

/**
 * @file
 * CCK Field for Indian zipcodes.
 */

/**
 * Verification for Indian zipcodes.
 *
 * @param string $text
 * @return boolean Returns boolean FALSE if the zipcode is not valid.
 * On success, returns a string containting the zipcode with some formatting.
 */
function valid_in_zipcode($zipcodestring) {
  $zipcodestring = trim($zipcodestring);

  if (!preg_match("/^[1-9]\d{2}\s?\d{3}$/i",$zipcodestring)) {
      return FALSE;
  }
  else
  {
    return TRUE;
  }
}

/**
 * Formatting for zipcode.
 *
 * @param string $zipcodestring
 * @return string Returns a string containting the zipcode with some formatting.
 */
function format_in_zipcode($zipcodestring) {

  $zipcodestring = trim($zipcodestring);
  //do some formatting
  return $zipcodestring;
}
