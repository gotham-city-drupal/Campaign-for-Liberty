<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function piropublic_media_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'featured_article_node';
  $context->description = 'Featured Article node context';
  $context->tag = 'piropublic_media';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'farticle' => 'farticle',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_articles-block_3' => array(
          'module' => 'views',
          'delta' => 'featured_articles-block_3',
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views-featured_articles-block_4' => array(
          'module' => 'views',
          'delta' => 'featured_articles-block_4',
          'region' => 'right_top',
          'weight' => 1,
        ),
      ),
    ),
    'breadcrumb' => 'media/featured_article',
    'menu' => 'media/featured_article',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Article node context');
  t('piropublic_media');

  $export['featured_article_node'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'featured_articles';
  $context->description = 'Featured Artcle View';
  $context->tag = 'piropublic_media';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'featured_articles:page_1' => 'featured_articles:page_1',
        'featured_articles:page_2' => 'featured_articles:page_2',
        'featured_articles:page_4' => 'featured_articles:page_4',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-featured_articles-page_4' => array(
          'module' => 'views',
          'delta' => '-exp-featured_articles-page_4',
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views-featured_articles-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_articles-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-featured_articles-block_2' => array(
          'module' => 'views',
          'delta' => 'featured_articles-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'breadcrumb' => 'media/featured_article',
    'menu' => 'media/featured_article',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Artcle View');
  t('piropublic_media');

  $export['featured_articles'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'featured_author_node';
  $context->description = 'Featured Author node context';
  $context->tag = 'piropublic_media';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fauthor' => 'fauthor',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_articles-block_6' => array(
          'module' => 'views',
          'delta' => 'featured_articles-block_6',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
    'breadcrumb' => 'featured_author',
    'menu' => 'featured_author',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Author node context');
  t('piropublic_media');

  $export['featured_author_node'] = $context;
  return $export;
}
