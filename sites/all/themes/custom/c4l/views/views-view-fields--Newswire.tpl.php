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

$title = $fields['title']->content;
$link = $fields['field_feat_link_value']->content;
$publication = $fields['field_publication_value']->content;
$date = $fields['field_news_date_value']->content;
?>

<div class="newswire-item">
  <h3>
  <?php print l($title,$link); ?>
  </h3>
  <p>
  <?php if($publication): echo $publication . t(' - '); endif; ?>
  <?php if($date): echo $date; endif; ?>
  </p>
</div>
