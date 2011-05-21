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

// @PIRONOTE FIXME: this is an appnovation creation. it looks horrible and probably needs to be completely redone.

$title = $fields['title']->content;
$date = $fields['created']->content;
//$user = $fields['name']->content;
$uid = $fields['uid']->content;

// FIXME: what the fuck is get_user_name/get_user_image? oh thats right its a function in appno.module near line 169, morons
$user = t('by: '). l(get_user_name($uid),'node/'.$uid);
$image = get_user_image($uid);

if(!$image) $image = base_path() . drupal_get_path('theme','cfl') . '/img/default-pic.jpg';
$body = truncate_utf8($fields['body']->content,300,TRUE, TRUE);
$body_1 = str_replace('...</p>', t('... ') . l(t('Read More'),'node/'.$nid) . '</p>',$body);
$nid = $fields['nid']->content;
$ccount = $fields['comment_count']->content;

if($ccount == '0'){
  $comments = t('No comments yet, ') . l(t('get the first word in.'),'comment/reply/'.$nid);
} else {
  $comments = l( $ccount . t(' comments'),'node/'.$nid, array('fragment'=>'comments'));
}

$tid = ''; //get_term_tid($nid);
if($tid){
  $taxonomy = l(t('Find More Articles Like This'),'taxonomy/term/' . $tid) . ' &raquo;';
};

// TODO: what if imagecache isnt installed?
$picture = theme('imagecache','homepage_user_img', $image);
$userpic = l($picture,'user/'.$uid, array('html'=>true,'attributes' => array('class'=>'fleft home-author-picture')));

$edit = $fields['edit_node']->content;
$delete = $fields['delete_node']->content;
?>

<div class="homepage-content admin-page">
<?php echo $edit; ?>
  |
  <?php echo $delete; ?>
  <h1 class="article-title">
  <?php echo $title; ?>
  </h1>
  <h4 class="article-date">
  <?php echo $date; ?>
  </h4>
  <h5 class="article-author">
  <?php echo $user; ?>
  </h5>
  <div class="arcicle-body">
  <?php echo $body_1; ?>
  </div>
</div>
