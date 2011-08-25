<?php

/**
 * Implementation of hook_uuid_features_default_vocabularies().
 */
function piropublic_uuid_features_default_vocabularies() {
  $vocabularies = array();

  $vocabularies[] = array(
    'uuid' => 'f768ce04-ce94-11e0-b44a-9f094f73513e',
    'name' => 'Issues',
    'description' => 'Tags for media: blogs, articles, videos, etc',
    'help' => '',
    'relations' => '1',
    'multiple' => '1',
    'required' => '1',
    'tags' => '0',
    'module' => 'features_piro_issues',
    'weight' => '0',
    'nodes' => array(
      'farticle' => 'farticle',
    ),
  );
  return $vocabularies;
}
