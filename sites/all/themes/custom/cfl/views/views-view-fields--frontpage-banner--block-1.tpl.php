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
/* TODO: eventually you should consider redoing this template... i feel like a lot of this stuff would be better handled
 * by using hook_nodeapi or processing the node before the theme layer. by taking the user input and parsing it correctly for
 * output before the theme layer you could minimize the complexity of this file
 */

//button info
$buttonTitle = $fields['field_button_text_value']->content;
$link = $fields['field_external_link_url_1']->content;
$readMore = $link;
$options = array();
$options['html'] = true;
$options['attributes']['target'] = "_blank";
// TODO: don't really want preg_match here, need to find way to parse link field before theme layer.
$internalLink = preg_match("/campaignforliberty/", $link);
if(!$internalLink){
  //$internalLink = preg_match("/freedomactuallyisfree/", $link);
  $internalLink = preg_match("/campaignforliberty/", $link);
}
if($internalLink){
  $options['attributes']['target'] = "_self";
}
//============================================================================
//video setup
//============================================================================
$video = $link ? FALSE : TRUE;
//FOX VIDEO
if($fields['field_fox_video_value']->content){
  $foxVideo = $fields['field_fox_video_value']->content;
  $foxVideo = html_entity_decode($foxVideo);
  //echo "FOX VIDEO:" . $foxVideo;
  preg_match('/(id=)(\d+)/', $foxVideo, $matches);
  $foxID = $matches[2];
  //echo $foxID;
  $options['attributes']['rel'] = "shadowbox;width=466;height=263";
  $options['attributes']['target'] = "";
  // TODO: what happens when this changes?
  $link = 'http://video.foxbusiness.com/v/video-embed.html?video_id=' . $foxID . '&amp;w=466&amp;h=263';
  //<a href="http://video.foxbusiness.com/v/video-embed.html?video_id=4453004&amp;w=466&amp;h=263" title="Fox Video" rel="shadowbox[fp];width=466;height=263">TEST FOX</a>
}
//YOUTUBE VIDEO
// TODO: this seems like an odd check?
if(preg_match("/img/", $fields['field_embed_video_embed'] ->content)){
  $embedVideo = $fields['field_embed_video_embed'] ->content;
  //echo "!!!!!!!" . $embedVideo . "!!!!!!!";
  preg_match('/(href=")([^"]+)/', $embedVideo, $matches);
  $link = 'http://' . $_SERVER['HTTP_HOST'] . $matches[2];
  //echo $_SERVER['HTTP_HOST'];
  //echo $link;
  $options['attributes']['rel'] = "shadowbox;width=430;height=355";
  $options['attributes']['target'] = "";
}
//INTERNAL VIDEO
if($fields['field_cfl_video_value'] ->content){
  if(preg_match("/flv$/", $fields['field_cfl_video_value'] ->content)){
    //echo "STRAIGHT URL";
    $link =  $fields['field_cfl_video_value'] ->content;
  } else {
    //echo "EMBED CODE";
    preg_match('/(file=)(.+.flv)/', $fields['field_cfl_video_value'] ->content, $matches);
    $link = $matches[2];
  }
  $options['attributes']['rel'] = "shadowbox;width=430;height=355";
  $options['attributes']['target'] = "";
}

if(!$readMore){
  $readMore = $link;
}
//============================================================================
//end video setup
//============================================================================
$title = $fields['title']->content;
$body = $fields['field_fp_tease_value']->content;
$image = $fields['field_fp_image_fid']->content;
$imageURL = $fields['field_fp_image_fid_1']->content;
$source = $fields['field_fp_photosource_value']->content;
// TODO: why are we setting this to 1?
$nid = 1;
// FIXME: definitely do not want to be calling the DB at this point, also dont know if url_alias existss
if($internalLink){
  $path = preg_replace("@.*\.com/@", "", $readMore);
  $sql = "SELECT src as SRC ";
  $sql .= "FROM url_alias ";
  $sql .= "WHERE dst = '" . $path . "' ";
  $sql .= "LIMIT 1";

  $arr = array_reverse(explode("/", db_fetch_object(db_query($sql))->SRC));
  $nid = $arr[0];
}

//$nid = $fields['nid']->content;
?>
<?php // TODO: want to use print instead of echo for $ objects?>
<div class="promo_item">
  <div class="promo_left">
    <h1>
    <?php echo l($title, $link, $options); ?>
    </h1>
    <div class="teaser">
    <?php echo $body; ?>
    </div>
    <div class="button-link">
    <?php echo l(t($buttonTitle), $link, $options);//echo $buttonLink; ?>
    </div>
    <?php if($internalLink){ ?>
    <?php // TODO: yuck?>
    <div class="extra-links">
    <?php echo l(t('Join The Discussion'), 'http://' . $_SERVER['HTTP_HOST'] . '/comment/reply/' . $nid . '#comment-form'); ?>
      or
      <?php echo l(t('Read More'), $readMore); ?>
    </div>
    <?php } ?>
  </div>
  <div class="promo_right">
  <?php   echo l($image, $link, $options); ?>
    <div class="source">
    <?php echo $source; ?>
    </div>
  </div>
</div>

