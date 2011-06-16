$Id: README.txt,v 1.1 2010/11/19 11:19:56 twooten Exp $

-- SUMMARY --

The Masked Input module is a wrapper for the Masked Input jQuery Plugin by Josh Bush,
http://digitalbush.com/projects/masked-input-plugin. It allows a user to more easily
enter fixed width input where you would like them to enter the data in a certain
format (dates, phone numbers, etc).

-- INSTALLATION --

Simply install Masked Input like you would any other module.

1) Copy the masked_input folder to the modules folder in your installation.

2) Enable the module using Administer -> Modules (/admin/build/modules).

-- CONFIGURATION --

* You will find the configuration settings page at
  Administer -> Settings -> Masked Input (/admin/settings/maskedinput).

* Enter each input field you want masked, one per line, into the text area.

Use the following format: $("#YOUR-FIELD-ID").mask("YOUR-MASK");

Where "YOUR-FIELD-ID" is the CSS ID or class of the textfield you want to mask.
Where "YOUR-MASK" is one of the following

  a - Represents an alpha character (A-Z,a-z)
  9 - Represents a numeric character (0-9)
  * - Represents an alphanumeric character (A-Z,a-z,0-9)

Examples:
$("#date").mask("99/99/9999");
$("#phone").mask("(999) 999-9999");
$("#tax-id").mask("99-9999999");
$("#ssn").mask("999-99-9999");
$("#prod-num").mask("a*-999-a999");
$("#pct").mask("99%");

Optionally, if you are not satisfied with the underscore ("_") character as a placeholder, you may pass an optional argument to the maskedinput method.

$("#YOUR-FIELD-ID").mask("99-999999",{placeholder:"+"});

More information about the jQuery plugin can be found at the creator's site, http://digitalbush.com/projects/masked-input-plugin
