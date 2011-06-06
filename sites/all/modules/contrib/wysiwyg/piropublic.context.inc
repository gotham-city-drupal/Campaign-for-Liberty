<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function piropublic_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_us';
  $context->description = 'Context to display contact information';
  $context->tag = 'piropublic core';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about*' => 'about*',
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context to display contact information');
  t('piropublic core');

  $export['contact_us'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer_bottom';
  $context->description = 'Context for the footer bottom';
  $context->tag = 'piropublic core';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-footer' => array(
          'module' => 'menu',
          'delta' => 'menu-footer',
          'region' => 'footer_bottom',
          'weight' => 0,
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'footer_bottom',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for the footer bottom');
  t('piropublic core');

  $export['footer_bottom'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = 'Front Page Context';
  $context->tag = 'piropublic core';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-legislative_efforts-block_1' => array(
          'module' => 'views',
          'delta' => 'legislative_efforts-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front Page Context');
  t('piropublic core');

  $export['front_page'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_top_menu_anon';
  $context->description = 'Context for header top menu for anonymous users';
  $context->tag = 'piropublic core';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-header' => array(
          'module' => 'menu',
          'delta' => 'menu-header',
          'region' => 'header_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for header top menu for anonymous users');
  t('piropublic core');

  $export['header_top_menu_anon'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_top_menu_auth';
  $context->description = 'Context for header top menu for authenticated users';
  $context->tag = 'piropublic core';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-authheader' => array(
          'module' => 'menu',
          'delta' => 'menu-authheader',
          'region' => 'header_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for header top menu for authenticated users');
  t('piropublic core');

  $export['header_top_menu_auth'] = $context;
  return $export;
}
