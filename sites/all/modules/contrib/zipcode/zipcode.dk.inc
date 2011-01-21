<?php
// $Id: zipcode.dk.inc,v 1.9 2010/05/26 15:02:41 thierrygd Exp $

// Copyright 2008 Thierry GUEGAN http://www.arvoriad.com

/**
 * @file
 * CCK Field for Danish zipcodes.
 */

/**
 * Verification for Danish zipcodes.
 *
 * @param string $text
 * @return boolean Returns boolean FALSE if the zipcode is not valid.
 * On success, returns a string containting the zipcode with some formatting.
 */
function valid_dk_zipcode($zipcodestring) {
  $zipcodestring = trim($zipcodestring);

  if (!preg_match("/^([Dd][Kk]-)?([1-9]{1}[0-9]{3})$/i",$zipcodestring)) {
      return FALSE;
  }
  //9999
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
function format_dk_zipcode($zipcodestring) {

  $zipcodestring = trim($zipcodestring);
  //do some formatting
  return $zipcodestring;
}
