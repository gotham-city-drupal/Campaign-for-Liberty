<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function piropublic_frontpage_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Get Involved';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'get_involved';
  $fe_block_boxes->body = '<p style="text-align: center;"><span style="font-size:18px;"><em class="italic">How do I get involved?</em></span></p><p style="text-align: center;"><a href="/node/4277"><img alt="Get Email Updates" src="sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/get-email-updates.jpg" style="width: 178px; height: 28px;"></a></p><p style="text-align: center;"><a href="user/register"><img alt="Join a group" src="sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/join-a-group.jpg" style="width: 178px; height: 28px;"></a></p>';

  $export['get_involved'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Get Local';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'get_local';
  $fe_block_boxes->body = '<p style="text-align: center;"><span><a href="/community">Find local news, events<br>and groups</a></span><br><span style="z-index: -100;"><a href="/community"><img alt="Get Local Map" src="sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/get-local-map.jpg"></a> </span></p>';

  $export['get_local'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Stay Connected Social Media';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'social_media';
  $fe_block_boxes->body = '<p><a href="http://www.facebook.com/CampaignforLiberty" target="_blank"><img src="sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/facebook-icon.jpg" style="border-width: 0px; border-style: solid;"></a><a href="http://www.twitter.com/c4liberty" target="_blank"><img src="sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/twitter-icon.jpg" style="border-width: 0px; border-style: solid;"></a><a href="http://www.youtube.com/campaignforliberty" target="_blank"><img src="sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/youtube-icon.jpg" style="border-width: 0px; border-style: solid;"></a><a href="/rss.xml" target="_blank"><img src="sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/rss-icon.jpg" style="border-width: 0px; border-style: solid;"></a></p>';

  $export['social_media'] = $fe_block_boxes;

  return $export;
}
