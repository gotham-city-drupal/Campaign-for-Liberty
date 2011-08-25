<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function piropublic_media_uuid_features_default_content() {
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
    'title' => 'Media',
    'body' => '',
    'teaser' => '',
    'log' => '',
    'format' => '5',
    'name' => '',
    'path' => 'media',
    'og_groups_both' => array(),
    'og_groups' => array(),
    'signup' => 0,
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'uuid' => '4e23ba37-cf29-11e0-be4c-a9b89ff3e49c',
    'pathauto_perform_alias' => FALSE,
  );
  return $nodes;
}
