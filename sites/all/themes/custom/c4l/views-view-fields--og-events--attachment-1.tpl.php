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
 * $fields['field_photo_fid']
 */
$photo = $fields['field_photo_fid']->content;
$datetime = $fields['field_event_datetime_value']->raw;
$title = $fields['title']->content;
$civicrm_event_id = $fields['field_civicrm_event_id_value']->raw;
$teaser = $fields['teaser']->content;
$advertisers = $fields['field_advertisers_value']->content;
$agenda = $fields['field_agenda_value']->content;
$exhibitors = $fields['field_exhibitors_value']->content;
$sponsorship = $fields['field_sponsorship_info_value']->content;
$travel = $fields['field_travel_info_value']->content;


?>
<?php if ($photo) { ?>
<div class="image-left">
<?php print $photo; ?>
</div>
<?php } ?>
<h5>
<?php print $title; ?>
</h5>

<?php if($fields['teaser']->content): ?>
<div class="teaser">
<?php
print $fields['teaser']->content;
?>
</div>
<?php endif; ?>

<div class="inline-links clear-block">
<?php if ($agenda) { ?>
  <a href="<?php print url('node/'.$row->nid); ?>">Agenda <span
    class="red">&raquo;</span> </a>
    <?php } ?>
    <?php if ($travel) { ?>
  <a href="<?php print url('node/'.$row->nid); ?>">Travel/Hotel <span
    class="red">&raquo;</span> </a>
    <?php } ?>
    <?php if ($sponsorship) { ?>
  <a href="<?php print url('node/'.$row->nid); ?>">Sponsorship <span
    class="red">&raquo;</span> </a>
    <?php } ?>
    <?php if ($exhibitors) { ?>
  <a href="<?php print url('node/'.$row->nid); ?>">Exhibitors <span
    class="red">&raquo;</span> </a>
    <?php } ?>
    <?php if ($advertisers) { ?>
  <a href="<?php print url('node/'.$row->nid); ?>">Advertisers <span
    class="red">&raquo;</span> </a>
    <?php } ?>
    <?php if ($civicrm_event_id) { ?>
  <div class="button-link">
    <a
      href="<?php print base_path();?>civicrm/event/register?id=<?php print $civicrm_event_id; ?>">SIGN
      UP NOW</a>
  </div>
  <?php } ?>
</div>


<div class="clear"></div>
<hr />
