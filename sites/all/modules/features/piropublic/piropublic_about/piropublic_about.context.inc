<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function piropublic_about_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_section';
  $context->description = 'About us page';
  $context->tag = 'piropublic about';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'banner',
          'weight' => 0,
        ),
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
  t('About us page');
  t('piropublic about');

  $export['about_section'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'directors';
  $context->description = 'Board of Directors';
  $context->tag = 'piropublic about';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about/board' => 'about/board',
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
    'breadcrumb' => 'about/board',
    'menu' => 'about/board',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Board of Directors');
  t('piropublic about');

  $export['directors'] = $context;
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
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => 1,
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views--exp-faq-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-faq-page_1',
          'region' => 'right_top',
          'weight' => 1,
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'right',
          'weight' => 0,
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'breadcrumb' => 'about/faq',
    'menu' => 'about/faq',
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
  t('Context for staff/board nodes');
  t('piropublic about');

  $export['persons'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'staff';
  $context->description = 'Staff Page';
  $context->tag = 'piropublic about';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about/staff' => 'about/staff',
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
    'breadcrumb' => 'about/staff',
    'menu' => 'about/staff',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Staff Page');
  t('piropublic about');

  $export['staff'] = $context;
  return $export;
}
