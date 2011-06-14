<?php

/**
 * Implementation of hook_uuid_features_default_vocabularies().
 */
function piropublic_about_uuid_features_default_vocabularies() {
  $vocabularies = array();

  $vocabularies[] = array(
    'uuid' => 'fa4251dd-9446-11e0-88ba-e0e2cd5d67f0',
    'name' => 'FAQ',
    'description' => 'Categories for FAQ questions',
    'help' => '',
    'relations' => '1',
    'multiple' => '0',
    'required' => '0',
    'tags' => '0',
    'module' => 'features_faq_terms',
    'weight' => '0',
    'nodes' => array(),
  );
  return $vocabularies;
}
