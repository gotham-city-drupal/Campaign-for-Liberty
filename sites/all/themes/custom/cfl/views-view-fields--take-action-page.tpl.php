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
?>

<div class="take-actiontableleft">
<?php $afield = $fields["field_photo_fid"]; ?>
  <<?php print $afield->element_type; ?> class="field-content">
  <?php print $afield->content; ?>
  </<?php print $afield->element_type; ?>>

</div>

<div class="take-actiontableright">
  <p>
  <?php $afield = $fields["field_prefix_value"]; ?>
    <<?php print $afield->element_type; ?> class="field-content">
    <?php print $afield->content; ?>
    </<?php print $afield->element_type; ?>>

    <?php $afield = $fields["field_firstname_value"]; ?>
    <<?php print $afield->element_type; ?> class="field-content">
    <?php print $afield->content; ?>
    </<?php print $afield->element_type; ?>>

    <?php $afield = $fields["field_lastname_value"]; ?>
    <<?php print $afield->element_type; ?> class="field-content">
    <?php print $afield->content; ?>
    </<?php print $afield->element_type; ?>>
  </p>

  <p>
  <?php // TODO: below could be better?>
  <?php $afield = $fields["field_member_type_value"]; ?>
  <?php
  if("house" == $afield->content) {
    print "US House of Representatives<br>";
    $afield = $fields["field_state_nid"];
    print "<" . $afield->element_type . ' class="field-content">' . $afield->content . '</' . $afield->element_type . "> ";
    $afield = $fields["field_seat_district_nid"];
    print "<" . $afield->element_type . ' class="field-content">' . $afield->content . '</' . $afield->element_type . ">";
  } else {
    print "US Senate<br>";
    print "State: ";
    $afield = $fields["field_state_nid"];
    print "<" . $afield->element_type . ' class="field-content">' . $afield->content . '</' . $afield->element_type . "> ";


  }
  ?>
    <br>
    <?php

    $afield = $fields["field_party_value"];
    print "Party: ";

    if("R" == $afield->content) {
      print "Republican";

    } else if("D" == $afield->content) {
      print "Democrat";
    } else {
      print "Independent";
    }
    ?>

    <br>
    <?php $afield = $fields["field_website_value"]; ?>
    <?php //TODO: this is awkward syntax?>
    <a target="_new" href="<?php print $afield->content; ?>" />Website</a>
    <br>

    <?php $suitefield = $fields["field_suite_value"]; $buildingfield = $fields["field_building_value"];
    $addressfield = $fields["field_office_address_value"]; ?>
    <?php print $suitefield->content . " " . $buildingfield->content . "<br>" . $addressfield->content; ?>

    Phone:
    <?php $afield = $fields["field_voice_phone_value"]; ?>
    <?php print $afield->content; ?>
    <br> Fax:
    <?php $afield = $fields["field_fax_phone_value"]; ?>
    <?php print $afield->content; ?>
    <br>


    <?php $afield = $fields["field_email_value"]; ?>
    <a target="_new" href="<?php print $afield->content; ?>">Email</a> <br>

    <?php if($fields["tid"]->content != ""): ?>
    Committees:
    <?php echo $fields["tid"]->content; ?>
    <?php endif; ?>


  </p>

</div>
