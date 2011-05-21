<?php
// $Id: views-view-fields.tpl.php,v 1.6 2008/09/24 22:48:21 merlinofchaos Exp $
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->separator: an optional separator that may appear before a field.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

// TODO: not exactly what you would expect but im ok with it
?>


<tr style="border-bottom: 1px black solid;">
<?php


$afield = $fields["field_office_value"];

if("US House" == $afield->content){
  $distfield = $fields["field_district_1_value"];
  print "<td>" . $distfield->content . "<p style='display: none;' >US House</p></td>";
}

$fnfield = $fields["field_first_name_value"];
$lnfield = $fields["field_last_name_value"];
$partyfield = $fields["field_partyfield_value"];

print "<td>" . $fnfield->content . " " . $lnfield->content . " (" . $partyfield->content . ")</td>";

$q1field = $fields["field_q1_value"];
print "<td style='text-align: center;' >" . $q1field->content . "</td>";

$q2field = $fields["field_q2_value"];
print "<td style='text-align: center;' >" . $q2field->content . "</td>";


$q3field = $fields["field_q3_value"];
print "<td style='text-align: center;' >" . $q3field->content . "</td>";


$q4field = $fields["field_q4_value"];
print "<td style='text-align: center;' >" . $q4field->content . "</td>";


$q5field = $fields["field_q5_value"];
print "<td style='border-right: 1px solid black; text-align: center;'>" . $q5field->content . "</td>";


$q6field = $fields["field_q6_value"];
print "<td style='text-align: center;' >" . $q6field->content . "</td>";


$q7field = $fields["field_q7_value"];
print "<td style='text-align: center;' >" . $q7field->content . "</td>";


$q8field = $fields["field_q8_value"];
print "<td style='text-align: center;' >" . $q8field->content . "</td>";


$q9field = $fields["field_q9_value"];
print "<td style='text-align: center;' >" . $q9field->content . "</td>";


$q10field = $fields["field_q10_value"];
print "<td style='border-right: 1px solid black; text-align: center;' >" . $q10field->content . "</td>";


$q11field = $fields["field_q11_value"];
print "<td style='text-align: center;' >" . $q11field->content . "</td>";


$q12field = $fields["field_q12_value"];
print "<td style='text-align: center;' >" . $q12field->content . "</td>";


$q13field = $fields["field_q13_value"];
print "<td style='text-align: center;' >" . $q13field->content . "</td>";


$q14field = $fields["field_q14_value"];
print "<td style='text-align: center;' >" . $q14field->content . "</td>";


$q15field = $fields["field_q15_value"];
print "<td style='border-right: 1px solid black; text-align: center;'>" . $q15field->content . "</td>";


$q16field = $fields["field_q16_value"];
print "<td style='text-align: center;' >" . $q16field->content . "</td>";


$q17field = $fields["field_q17_value"];
print "<td style='text-align: center;' >" . $q17field->content . "</td>";

$q18field = $fields["field_q18_value"];
print "<td style='text-align: center;' >" . $q18field->content . "</td>";

$q19field = $fields["field_q19_value"];
print "<td style='text-align: center;' >" . $q19field->content . "</td>";


$q20field = $fields["field_income_value"];

$q21field = $fields["field_capital_gains_value"];

$q22field = $fields["field_business_value"];

$q23field = $fields["field_estate_tax_value"];
print "<td style='text-align: center;' >" . $q20field->content . ", " . $q21field->content . ", " . $q22field->content . ", " . $q23field->content . "</td>";

?>
</tr>

