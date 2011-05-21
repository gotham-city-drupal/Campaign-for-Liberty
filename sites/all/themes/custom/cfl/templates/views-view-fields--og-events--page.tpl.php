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
// TODO: same regarding strtotime usage
$datetime = strtotime($fields['field_event_datetime_value']->raw);
$title = $fields['title']->content;
$civicrm_event_id = $fields['field_civicrm_event_id_value']->raw;
$teaser = $fields['teaser']->content;
$photo = $fields['field_photo_fid']->content;
$location = $fields['field_event_location_value']->content;
?>
<div class="date_box1">
  <div class="event_month1">
  <?php print date('M', $datetime); ?>
  </div>
  <div class="event_day1">
  <?php print date('j', $datetime); ?>
  </div>
</div>
<div class="right-info <?php if ($photo) { print 'has-photo'; } ?>">
<?php print $title; ?>
  <br /> <span class="location"><?php print $location; ?> </span><br />
  <?php print $teaser; ?>
  <br />
  <div class="links">
    <a href="<?php print url('node/'.$row->nid); ?>">Read More</a>
    <?php if ($civicrm_event_id) { ?>
    | <a
      href="<?php print base_path();?>civicrm/event/register?id=<?php print $civicrm_event_id; ?>">Register</a>
      <?php } ?>
  </div>
</div>
      <?php if ($photo) { ?>
<div class="right-photo">
<?php print $photo; ?>
</div>
<?php } ?>
<div class="clear"></div>
<br />
