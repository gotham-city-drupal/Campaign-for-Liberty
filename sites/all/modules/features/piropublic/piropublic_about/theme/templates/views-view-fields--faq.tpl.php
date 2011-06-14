<?php
// $Id: views-view-fields.tpl.php,v 1.6 2008/09/24 22:48:21 merlinofchaos Exp $
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 * - $admin_link: edit/delete links
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
  <span class="views-field-<?php print $fields['title']->class; ?>">
    <?php if ($fields['title']->label): ?>
      <label class="views-label-<?php print $fields['title']->class; ?>">
        <?php print $fields['title']->label; ?>:
      </label>
    <?php endif; ?>
    <<?php print $fields['title']->element_type; ?> class="field-content">
      <?php print $fields['title']->content; ?>
    </<?php print $fields['title']->element_type; ?>>
  </span>

  <span class="admin_links">
  <?php if ($admin_links): ?>
      <?php print $admin_links; ?>
  <?php endif; ?>
  </span>

  <<?php print $fields['body']->inline_html;?> class="views-field-<?php print $fields['body']->class; ?>">
    <?php if ($fields['body']->label): ?>
      <label class="views-label-<?php print $fields['body']->class; ?>">
        <?php print $fields['body']->label; ?>:
      </label>
    <?php endif; ?>
    <<?php print $fields['body']->element_type; ?> class="field-content">
      <?php print $fields['body']->content; ?>
    </<?php print $fields['body']->element_type; ?>>
  </<?php print $fields['body']->inline_html;?>>
