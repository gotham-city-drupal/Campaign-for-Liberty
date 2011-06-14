<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function piropublic_about_taxonomy_default_vocabularies() {
  return array(
    'faq_terms' => array(
      'name' => 'FAQ',
      'description' => 'Categories for FAQ questions',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_faq_terms',
      'weight' => '0',
      'type' => NULL,
      'nodes' => array(),
    ),
  );
}
