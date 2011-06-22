<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function piropublic_about_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about';
  $context->description = 'Blocks for all about pages';
  $context->tag = 'piropublic about';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
        'about/*' => 'about/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => 1,
          'region' => 'right_top',
          'weight' => 0,
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'right',
          'weight' => 0,
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'breadcrumb' => 'node/116',
    'menu' => 'node/116',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for all about pages');
  t('piropublic about');

  $export['about'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faq';
  $context->description = 'FAQ context';
  $context->tag = 'piropublic about';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'faq' => 'faq',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'faq' => 'faq',
        'faq:page_1' => 'faq:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-faq-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-faq-page_1',
          'region' => 'right_top',
          'weight' => 0,
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('FAQ context');
  t('piropublic about');

  $export['faq'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'persons';
  $context->description = 'Context for staff/board nodes';
  $context->tag = 'piropublic about';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'staff' => 'staff',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'node/116',
    'menu' => 'node/116',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for staff/board nodes');
  t('piropublic about');

  $export['persons'] = $context;
  return $export;
}
