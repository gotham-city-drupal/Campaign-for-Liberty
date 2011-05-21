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
 $fields['field_photo_fid']
 */
?>
<?php foreach ($fields as $id => $field): ?>
<?php //print '<pre>'; print_r($fields->title); print '</pre>'; ?>

<?php if ($id == 'title'): ?>
<!-- START: date_info1 -->
<div class="date_info1">
<?php endif; ?>
<?php //TODO: need to look into this a little more?>
<?php if ($id == 'field_event_datetime_value'):
$this_month = substr($field->raw,5,2); $timestamp = mktime(0, 0, 0, $this_month, 1, 2005); $this_month = date("M", $timestamp);
$this_day = substr($field->raw,8,2); if ( substr($this_day,0,1)==0 ) { $this_day =substr($this_day,1,1); } ?>
<?php endif; ?>

<?php if (!empty($field->separator)): ?>
<?php print $field->separator; ?>
<?php endif; ?>

  <<?php print $field->inline_html;?> class="views-field-<?php print
  $field->class; ?>">
  <?php if ($field->label): ?>
  <label class="views-label-<?php print $field->class; ?>"> <?php print $field->label; ?>:
  </label>
  <?php endif; ?>
  <?php
  // $field->element_type is either SPAN or DIV depending upon whether or not
  // the field is a 'block' element type or 'inline' element type.
  ?>
  <<?php print $field->element_type; ?> class="field-content">
  <?php if ($id != 'field_event_datetime_value') {print $field->content;} else {
    print '<div class="date_box1">
			<div class="event_month1">'.$this_month.'</div>
			<div class="event_day1">'.$this_day.'</div>
		</div>';
  }?>
  </<?php print $field->element_type; ?>> </<?php print
  $field->inline_html;?>>

  <?php if ($id == 'node_link'): ?>
</div>
<!-- END: date_info1 -->
  <?php endif; ?>

  <?php endforeach; ?>
<div class="clear">STEVENJ</div>
<br />
