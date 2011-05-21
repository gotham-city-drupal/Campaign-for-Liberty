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
if($fields['field_pub_date_value']->content){
  $date = $fields['field_pub_date_value']->content;
}
// TODO: why hardcode this crap here? can't this stuff be created in views before it gets here?
$similarLink = "";
if($fields['nothing']->content == "memblog"){
  $similarLink =  '/media/member_blog';
} else if ($fields['nothing']->content == "farticle") {
  $similarLink =  '/media/featured_article';
} else if ($fields['nothing']->content == "natblog") {
  $similarLink =  '/media/national_blog';
} else if ($fields['nothing']->content == "pr") {
  $similarLink =  '/media/press_release';
} else {
  $similarLink = '/';
}
//$user = $fields['name']->content;
$uid = $fields['uid']->content;
$fauthor = $fields['nothing_1']->content;
$user = t('by '). l(get_user_name($uid),'user/'.$uid);
if($fauthor != "by " ){
  $user = $fauthor;
}
//$user = t('by Featured Author: '). l(get_user_name($uid),'user/'.$uid);
$image = get_user_image($uid);
if(!$image) $image = base_path() . drupal_get_path('theme','cfl') . '/img/default-pic.jpg';
$body = $fields['body']->content;
//$body_1 = str_replace('...</p>', t('... ') . l(t('Read More'),'node/'.$nid) . '</p>',$body);
$body_1 = $body . $fields['view_node_1']->content;
$nid = $fields['nid']->content;
$ccount = $fields['comment_count']->content;
//echo $fields['nothing']->content  . ' &raquo;';
$terms = $fields['tid']->content;

if($ccount == '0'){
  $comments = t('No comments yet, ') . l(t('get the first word in.'),'comment/reply/'.$nid);
} else {
  $comments = l( $ccount . t(' comments'),'node/'.$nid, array('fragment'=>'comments'));
}

$term_name = get_node_term_link($nid);
if($term_name){
  $taxonomy = $term_name . ' &raquo;';
};

$picture = theme('imagecache','homepage_user_img', $image);
$userpic = l($picture,'user/'.$uid, array('html'=>true,'attributes' => array('class'=>'fleft home-author-picture')));

if($fields['field_fauthor_image_fid']->content && !preg_match('/default_avatar1234375017\.jpg/', $fields['field_fauthor_image_fid']->content)){
  $userpic = '<div class="fleft home-author-picture">' . $fields['field_fauthor_image_fid']->content . '</div>';
}

$addtoany = $fields['addtoany_link']->content;
?>

<div class="homepage-content">
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
  <?php if($fields['nothing']->content != "memblog" && $fields['nothing']->content != "fullnatblog"){ ?>
  <?php echo $userpic; ?>
  <?php } ?>
  <?php echo $body_1; ?>
  </div>
  <div class="article-comments">
  <?php echo $comments; ?>
  </div>
  <div class="article-taxonomy">
  <?php echo '<a href="' . $similarLink . '">Find More Like This</a> &raquo;'; ?>
  </div>
  <div class="terms">
  <?php echo $terms; ?>
  </div>
  <div class="addtoany">
  <?php echo $addtoany; ?>
  </div>
</div>
