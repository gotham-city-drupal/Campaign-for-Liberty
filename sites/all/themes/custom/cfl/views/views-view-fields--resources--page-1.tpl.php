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

$link = $fields['field_res_source_link_url']->content;
if(!$link){
  $link = $fields['upload_fid_1']->content;
}
if(!$link){
  $link = "/node/";
}

?>
<div class="resource-center-row clear-block">
  <div class="thumbnail">
    <a href="<?php print $link; ?>"><?php print $fields['field_res_image_fid']->content; ?>
    </a>
  </div>
  <div class="details">
    <h3>
      <a href="<?php print $link; ?>"><?php print $fields['title']->content; ?>
      </a>
    </h3>
    <div class="date">
    <?php print $fields['field_pub_date_value']->content; ?>
    </div>
    <div class="teaser">
    <?php print $fields['field_res_tease_value']->content; ?>
    </div>
    <div class="files">
    <?php print $fields['upload_fid']->content; ?>
    </div>
  </div>
</div>
