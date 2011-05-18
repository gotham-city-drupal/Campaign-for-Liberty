<?php
// $Id: zipcode.us.inc,v 1.12 2010/05/26 15:02:41 thierrygd Exp $

// Copyright 2008 Thierry GUEGAN http://www.arvoriad.com

/**
 * @file
 * CCK Field for American zipcodes.
 */

/**
 * Verification for American zipcodes.
 *
 * @param string $text
 * @return boolean Returns boolean FALSE if the zipcode is not valid.
 * On success, returns a string containting the zipcode with some formatting.
 */
function valid_us_zipcode($zipcodestring) {

  $zipcodestring = trim($zipcodestring);

  if (!preg_match("/(^\d{5}$)|(^\d{5}-\d{4}$)$/i",$zipcodestring)) {
  	return FALSE;
  }
  //99999 or 99999-9999
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
function format_us_zipcode($zipcodestring) {

  $zipcodestring = trim($zipcodestring);
  //do some formatting
  return $zipcodestring;
}
