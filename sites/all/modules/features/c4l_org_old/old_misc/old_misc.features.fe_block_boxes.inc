<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function old_misc_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Get Involved';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'get_involved';
  $fe_block_boxes->body = '<p style="text-align: center;"><em class="italic">How do I get involved?</em></p><p style="text-align: center;"><a href="/user/register"><img alt="Get Email Updates" src="sites/all/modules/features/c4l_org_old/old_misc/img/get-email-updates.jpg" style="width: 178px; height: 28px;" /></a></p><p style="text-align: center;"><a href="/user/register"><img alt="Join a group" src="sites/all/modules/features/c4l_org_old/old_misc/img/join-a-group.jpg" style="width: 178px; height: 28px;" /></a></p>';

  $export['get_involved'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Get Local';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'get_local';
  $fe_block_boxes->body = '<p style="text-align: center;"><span style="z-index: 9; position: relative;"><a href="/community">Find local news, events<br />and groups</a></span><br /><span style="z-index: -100;"><a href="/community"><img alt="Get Local Map" src="sites/all/modules/features/c4l_org_old/old_misc/img/get-local.jpg" style="z-index: -100; width: 230px; height: 274px; border-width: 0px; border-style: solid; margin-left: -18px; margin-top: -90px;" /></a> </span></p>';

  $export['get_local'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Stay Connected Social Media';
  $fe_block_boxes->format = '1';
  $fe_block_boxes->machine_name = 'social_media';
  $fe_block_boxes->body = '<p><a href="http://www.facebook.com/CampaignforLiberty" target="_blank"><img src="sites/all/modules/features/c4l_org_old/old_misc/img/facebook-icon.jpg" style="border-width: 0px; border-style: solid;" /></a><a href="http://www.twitter.com/c4liberty" target="_blank"><img src="sites/all/modules/features/c4l_org_old/old_misc/img/twitter-icon.jpg" style="border-width: 0px; border-style: solid;" /></a><a href="http://www.youtube.com/campaignforliberty" target="_blank"><img src="sites/all/modules/features/c4l_org_old/old_misc/img/youtube-icon.jpg" style="border-width: 0px; border-style: solid;" /></a><a href="/rss" target="_blank"><img src="sites/all/modules/features/c4l_org_old/old_misc/img/rss-icon.jpg" style="border-width: 0px; border-style: solid;" /></a></p><p>Find out what we&#39;re doing right now</p>';

  $export['social_media'] = $fe_block_boxes;

  return $export;
}
