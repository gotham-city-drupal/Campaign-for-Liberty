<?php
// $Id: zipcode.de.inc,v 1.3 2010/05/26 15:02:41 thierrygd Exp $

// Copyright 2008 Thierry GUEGAN http://www.arvoriad.com

/**
 * @file
 * CCK Field for German zipcodes.
 */

/**
 * Verification for German zipcodes.
 *
 * @param string $text
 * @return boolean Returns boolean FALSE if the zipcode is not valid.
 * On success, returns a string containting the zipcode with some formatting.
 */
function valid_de_zipcode($zipcodestring) {

  $zipcodestring = trim($zipcodestring);
  
  $regex1 = "#^[1-9]{1}[0-9]{4}$#i"; 
  $regex2 = "#^[0-9]{1}[1-9]{1}[0-9]{3}$#i";
  
  if (strlen($zipcodestring) == 5) {
    if ($zipcodestring{0} != '0') {
      return (bool) preg_match($regex1, $zipcodestring); 
    }
    elseif ($zipcodestring{0} == '0') {
      return (bool) preg_match($regex2, $zipcodestring); 
    }
  }
  else{
     return FALSE;
  }
}

/**
 * Formatting for zipcode.
 *
 * @param string $zipcodestring
 * @return string Returns a string containting the zipcode with some formatting.
 */
function format_de_zipcode($zipcodestring) {

  $zipcodestring = trim($zipcodestring);
  //do some formatting
  return $zipcodestring;
}
