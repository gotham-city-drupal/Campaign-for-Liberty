<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function piropublic_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'type' => 'page',
    'language' => '',
    'uid' => '0',
    'status' => '1',
    'comment' => '0',
    'promote' => '0',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '1',
    'title' => 'Campaign for Liberty Content Standards',
    'body' => '<p>Campaign for Liberty strives to become a leading grassroots lobby at the national, state, and local level.&nbsp; The social networking tools that we provide are just that&mdash;tools.&nbsp; They are tools for activists to connect with other activists in their area, to spread information, to run successful events, to lobby politicians, and to examine candidates.<br /><br />Clearly, it is important that our members and guest users represent the organization with dignity.&nbsp; We have therefore established guidelines for all user-created content.&nbsp; In some situations, violations of these guidelines may result in a written warning and an edit or removal of the offending content.&nbsp; In other situations, your content posting abilities may be revoked.&nbsp; The decision is made at the sole discretion of Campaign for Liberty staff.<br /><br /><strong>1. Obscene language is not allowed.&nbsp;</strong> We reserve the right to decide what constitutes obscenity, hate speech, or the like on our website.&nbsp; Campaign for Liberty opposes legislation on obscenity and hate speech but we have a right to maintain this policy for our website.&nbsp; Sensitive topics concerning race are not off-limits but should be handled delicately.<br /><br /><strong>2. Personal attacks on our members are not allowed.</strong>&nbsp; If you have a disagreement, attack the argument, not the speaker.&nbsp; It is OK to say &quot;so-and-so didn&#39;t show up for the phone bank,&quot; but not &quot;so-and-so is an idiot.&quot;<br /><br /><strong>3. The calendar feature is for Campaign for Liberty events only.&nbsp;</strong> Use it to schedule meetings, rallies, fund-raisers, discussion groups, political party meetings and conventions, and the like.&nbsp; Do not use it to promote your band&#39;s next show or the kegger at Bob&#39;s next weekend.<br /><br /><strong>4. Members are solely responsible for crediting the source of any posted material to this website.&nbsp;</strong> Plagiarism by members is not acceptable and will result in a written warning and an edit or removal of the content.<br /><br /><strong>5. CampaignforLiberty.com exists to inform and mobilize activists, not to showcase advertisements.</strong> We discourage the repeated use of your weblog for advertising.<br /><br /><br /><strong>Campaign for Liberty reserves the right to remove material for any other reason if it is determined to countervail the goals of Campaign For Liberty. </strong></p>',
    'teaser' => '<p>Campaign for Liberty strives to become a leading grassroots lobby at the national, state, and local level.&nbsp; The social networking tools that we provide are just that&mdash;tools.&nbsp; They are tools for activists to connect with other activists in their area, to spread information, to run successful events, to lobby politicians, and to examine candidates.<br />',
    'log' => '',
    'format' => '2',
    'name' => '',
    'path' => 'campaign-liberty-content-standards',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'uuid' => '9b0988d8-87f4-11e0-b28c-9f89cf71cba4',
    'pathauto_perform_alias' => FALSE,
  );
  $nodes[] = array(
    'type' => 'page',
    'language' => '',
    'uid' => '1',
    'status' => '1',
    'comment' => '0',
    'promote' => '0',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '1',
    'title' => 'Privacy Policy',
    'body' => '',
    'teaser' => '',
    'log' => '',
    'format' => '1',
    'name' => 'admin',
    'path' => 'privacy-policy',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'uuid' => 'f4cd1ce6-87f7-11e0-b28c-9f89cf71cba4',
    'pathauto_perform_alias' => FALSE,
  );
  return $nodes;
}
