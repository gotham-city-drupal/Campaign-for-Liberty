<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function piropublic_commerce_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'donate';
  $context->description = 'layout for donate page';
  $context->tag = 'donate';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'donation' => 'donation',
        'product' => 'product',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-9' => array(
          'module' => 'block',
          'delta' => 9,
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('donate');
  t('layout for donate page');

  $export['donate'] = $context;
  return $export;
}
