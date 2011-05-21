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

$ref_link = $fields['field_fp_nid_nid']->content;
// TODO: awkward
if(preg_match('/href="\/(.*)?"/', $ref_link, $matches)) $url_ref = $matches[1];

$title = $fields['title']->content;
$body = $fields['field_fp_tease_value']->content;
$button = $fields['field_fp_button_text_value']->content;
$comments = $fields['comment_link']->content;
$image = $fields['field_fp_image_fid']->content;
$source = $fields['field_fp_photosource_value_1']->content;
?>
<!--
<?php foreach ($fields as $id => $field): ?>
<?php //print '<pre>'; print_r($fields->title); print '</pre>'; ?>
<?php if ($id == 'nid'): ?>
  <!-- START: promo_left -->
<div
  class="promo_left">
  <?php endif; ?>
  <?php if ($id == 'field_fp_image_fid'): ?>
  <!-- START: promo_right -->
  <div class="promo_right">
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
    <?php print $field->content; ?>
    </<?php print $field->element_type; ?>> </<?php print
    $field->inline_html;?>>

    <?php if ($id == 'view_node'): ?>
  </div>
  <!-- END: promo_left -->
  <?php endif; ?>
  <?php if ($id == 'field_fp_photosource_value'): ?>
</div>
<!-- END: promo_right -->
  <?php endif; ?>

  <?php endforeach; ?>

<div class="promo_left">
  <h1>
  <?php echo l($title,$url_ref,array('html'=>true)); ?>
  </h1>
  <?php echo $body; ?>
  <?php echo l($button,$url_ref,array('html'=>true)); ?>

</div>
<div class="promo_right">
<?php echo l($image,$url_ref,array('html'=>true)); ?>
<?php echo $source; ?>
</div>

