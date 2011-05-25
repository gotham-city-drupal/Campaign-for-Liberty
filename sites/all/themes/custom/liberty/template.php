<?php
// $Id: template.php, v 1.0 2011/4/28 00:32:00 pirog Exp $

// Auto-rebuild the theme registry during theme development.
if (theme_get_setting('liberty_rebuild_registry')) {
  drupal_rebuild_theme_registry();
}

/**
 * Modify theme variables
 */
function liberty_preprocess(&$variables) {
  global $user;                                            // Get the current user
  $variables['is_admin'] = in_array('admin', $user->roles);     // Check for Admin, logged in
  $variables['logged_in'] = ($user->uid > 0) ? TRUE : FALSE;
}

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function liberty_preprocess_node(&$variables) {
  global $theme_key;
  $node = $variables['node'];

  $variables['pre'] = '';
  $variables['post'] = '';

  if ($variables['title']) {
    $variables['title'] = l($variables['title'], "node/{$variables['node']->nid}", array('html' => TRUE));
  }

  // Create node classes.
  liberty_node_classes($variables);

  // Add node template file suggestions for node-type-teaser and node-type-prevew
  if (!$variables['page']) {
    $variables['template_files'][] = 'node-'. $node->type .'--teaser';
    $variables['template_files'][] = 'node-'. $node->type .'-'. $node->nid .'--teaser';
  }

  if ($node->op == 'Preview' && !$variables['teaser']) {
    $variables['template_files'][] = 'node-'. $node->type .'--preview';
    $variables['template_files'][] = 'node-'. $node->type .'-'. $node->nid .'--preview';
  }

  $function = $theme_key . '_preprocess_node_' . $node->type;
  if (function_exists($function)) {
    call_user_func_array($function, array(&$variables));
  }
}

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function liberty_preprocess_page(&$variables) {
  $base_path = base_path();
  $variables['base_theme'] = $path_to_liberty = drupal_get_path('theme', 'liberty') . '/';
  $path_to_theme = path_to_theme() . '/';
  global $user, $theme_key;

  // strip sidebar classes so theme can add them
  $exploder = explode(' ', $variables['body_classes']);
  foreach($exploder as $key=>&$value){
   //TODO: improve this if there is time
   if(strstr($value, 'sidebar')){
     unset($exploder[$key]);
    }
  }
  $exploder = implode(' ', $exploder);
  $variables['body_classes'] = $exploder;

  liberty_body_classes($variables);
  liberty_html_attributes($variables);

  $variables['path'] = $base_path . $path_to_theme;

  $site_name = $variables['site_name'];
  $variables['site_name_themed'] = l($site_name, '<front>', array('attributes' => array('id' => 'site-name')));

  // Set IE6 & IE7 stylesheets, plus right-to-left versions
  $theme_path = base_path() . path_to_theme();
  $variables['ie7_styles'] = '<link type="text/css" rel="stylesheet" media="all" href="' . $theme_path . '/css/ie6-fixes.css" />' . "\n";
  $variables['ie7_styles'] = '<link type="text/css" rel="stylesheet" media="all" href="' . $theme_path . '/css/ie7-fixes.css" />' . "\n";
  $variables['ie8_styles'] = '<link type="text/css" rel="stylesheet" media="all" href="' . $theme_path . '/css/ie8-fixes.css" />' . "\n";

  $variables['skip_link'] = '<ul class="acc-hide">
    <li><a href="#content" class="skip-link">Skip to content</a></li>
    <li><a href="#footer" class="skip-link">Skip to footer</a></li>
  </ul>';

  $variables['primary_links'] = (!empty($variables['primary_links'])) ?
    theme('links', $variables['primary_links'], array('class' => 'links primary-links')) :
    $add_link;

  $variables['secondary_links'] = (!empty($variables['secondary_links'])) ?
    theme('links', $variables['secondary_links'], array('class' => 'links secondary-links')) : '';

  $variables['styles'] = drupal_get_css(liberty_css_stripped());
}

function liberty_html_attributes(&$variables) {
  $attributes = array();
  $language = $variables['language'];

  $attributes['xmlns'] = 'http://www.w3.org/1999/xhtml';
  $attributes['xml:lang'] = $language->language;
  $attributes['lang'] = $language->language;
  $attributes['dir'] = $language->dir;

  $variables['html_attr'] = $attributes;
}

/**
 * Create node classes for node templates files.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @return $classes
 *   A string of node classes for inserting into the node template.
 */
function liberty_node_classes(&$variables) {
  $node = $variables['node'];
  $classes = array();

  // Merge in existing classes.
  if ($variables['classes']) {
    $classes = array($variables['classes']);
  }

  $classes[] = 'node';
  $classes[] = 'node-'. $node->type;
  if ($variables['page']) {
    $classes[] = 'node-'. $node->type . '-page';
  }
  elseif ($variables['teaser']) {
    $classes[] = 'node-teaser';
    $classes[] = 'node-'. $node->type . '-teaser';
  }
  if ($variables['sticky']) {
    $classes[] = 'sticky';
  }
  if (!$variables['status']) {
    $classes[] = 'node-unpublished';
  }
  $classes[] = 'clear-block';

  $variables['attr']['id'] = 'node-'. $node->nid;
  $variables['attr']['class'] = implode(' ', $classes);
}

/**
 * Create body classes for page templates files in addition to those provided by core.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @return
 *   Adds data to $variables directly.
 */
function liberty_body_classes(&$variables) {
  $classes = array();

  // Merge in existing classes.
  if ($variables['body_classes']) {
    $classes = array($variables['body_classes']);
  }

  // Create classes for the user-visible path sections.
  global $base_path;
  list(,$path) = explode($base_path, request_uri(), 2);
  list($path,) = explode('?', $path, 2);
  $path = rtrim($path, '/');

  // Create section classes down to 3 levels. Path is empty if we're at <front>.
  if ($path) {
    $path_alias_sections = array_slice(explode('/', $path), 0, 3);
    $section_path = 'section';
    foreach ($path_alias_sections as $arg_piece) {
      $section_path .= '-'. $arg_piece;
      $classes[] = $section_path;
    }
  }

 // Override sidebar odentification
  $variables['layout'] = 'none';
  if (!empty($variables['left']) || !empty($variables['left_top'])) {
    $variables['layout'] = 'left';
  }
  if (!empty($variables['right']) || !empty($variables['right_top'])) {
    $variables['layout'] = ($variables['layout'] == 'left') ? 'both' : 'right';
  }

  // Add information about the number of sidebars.
  if ($variables['layout'] == 'both') {
    $classes[] = 'two-sidebars';
  }
  elseif ($variables['layout'] == 'none') {
    $classes[] = 'no-sidebars';
  }
  else {
    $classes[] = 'one-sidebar sidebar-' . $variables['layout'];
  }

  $variables['attr']['class'] .= implode(' ', $classes);

  // System path gives us the id, replacing slashes with dashes.
  $system_path = drupal_get_normal_path($path);
  if ($section_path) {
    $variables['attr']['id'] = 'page-'. str_replace('/', '-', $system_path);
  }
}

/**
 * Implementation of preprocess_block().
 */
function liberty_preprocess_block(&$variables) {
  $variables['attr']['id'] = "block-{$variables['block']->module}-{$variables['block']->delta}";
  $variables['attr']['class'] = "block block-{$variables['block']->module}";

  $variables['pre'] = '';
  $variables['post'] = '';

  $variables['hook'] = 'block';
  $variables['title'] = $variables['block']->subject;
  $variables['content'] = $variables['block']->content;

  // First/last block position
  $variables['position'] = ($variables['block_id'] == 1) ? 'first' : '';
  if ($variables['block_id'] == count(block_list($block->region))) {
    $variables['position'] = ($variables['position']) ? 'first last' : 'last';
  }

  if (user_access('administer blocks')) {
    include_once './' . drupal_get_path('theme', 'liberty') . '/template.block-editing.inc';
    $variables['edit_links_array'] = array();
    $variables['edit_links'] = '';
    liberty_preprocess_block_editing($variables, $hook);
    $block_classes[] = 'block-editing';
  }
}

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function liberty_preprocess_comment(&$variables) {
  $comment = $variables['comment'];

  $variables['pre'] = '';
  $variables['post'] = '';

  $attr = array();
  $variables['attr']['id'] = "comment-{$variables['comment']->cid}";

  $variables['attr']['class'] = "comment {$variables['status']}";

  if ($comment->new) {
    $variables['attr']['class'] .= ' comment-new';
  }
  if ($variables['zebra']) {
    $variables['attr']['class'] .= ' comment-'. $variables['zebra'];
  }
}

/**
 * Adds a class for the style of view
 * (e.g., node, teaser, list, table, etc.)
 * (Requires views-view.tpl.php file in theme directory)
 */
function liberty_preprocess_views_view(&$variables) {
  $variables['css_name'] = $variables['css_name'] .' view-style-'. views_css_safe(strtolower($variables['view']->type));
}

/**
 * Implementation of preprocess_box().
 */
function liberty_preprocess_box(&$variables) {
  $attr = array();
  $variables['attr']['class'] = "box";

  $variables['pre'] = '';
  $variables['post'] = '';
}

/**
 * Implementation of preprocess_fieldset().
 */
function liberty_preprocess_fieldset(&$variables) {
  $variables['hook'] = 'fieldset';
  $element = $variables['element'];

  $variables['pre'] = '';
  $variables['post'] = '';

  $attr = array();
  if (isset($element['#attributes'])) {
    $attr = $element['#attributes'];
    $class = $attr['class'];
  }

  $attr['class'] = 'fieldset';
  $attr['class'] .= ' '. $class;
  if (!empty($element['#collapsible']) || !empty($element['#collapsed'])) {
    $attr['class'] .= ' collapsible';
  }
  if (!empty($element['#collapsed'])) {
    $attr['class'] .= ' collapsed';
  }

  $variables['attr'] = $attr;

  if (!empty($element['#description'])) {
    $description = "<div class='description'>{$element['#description']}</div>";
  }
  if (!empty($element['#children'])) {
    $children = $element['#children'];
  }
  if (!empty($element['#value'])) {
    $value = $element['#value'];
  }
  $variables['content'] = $description . $children . $value;

  // TODO: this is generating weird output on permissions page
  if (!empty($element['#title'])) {
    $variables['title'] = $element['#title'];
  }
  if (!empty($element['#collapsible']) || !empty($element['#collapsed'])) {
    $variables['title'] = l($variables['title'], $_GET['q'], array('fragment' => 'fieldset'));
  }

}


/**
 * Strips CSS files from a Drupal CSS array whose filenames start with
 * prefixes provided in the $match argument.
 */
function liberty_css_stripped($match = array('modules/*'), $exceptions = NULL) {
  // Set default exceptions
  if (!is_array($exceptions)) {
    $exceptions = array(
      'modules/system/system.css',
      'modules/update/update.css',
      'modules/openid/openid.css',
      'modules/acquia/*',
    );
  }
  $css = drupal_add_css();
  $match = implode("\n", $match);
  $exceptions = implode("\n", $exceptions);
  foreach (array_keys($css['all']['module']) as $filename) {
    if (drupal_match_path($filename, $match) && !drupal_match_path($filename, $exceptions)) {
      unset($css['all']['module'][$filename]);
    }
  }

  // This servers to move the "all" CSS key to the front of the stack.
  // Mainly useful because modules register their CSS as 'all', while
  // Tao has a more media handling.
  ksort($css);
  return $css;
}

/**
 * Only show the breadcrumb trail if there are more items than just 'Home'.
 */
function liberty_breadcrumb($breadcrumb) {
  if (!empty($breadcrumb)) {
    $breadcrumb[] = drupal_get_title();
    return '<div class="breadcrumb">'. implode(' &rsaquo; ', $breadcrumb) .'</div>';
  }
}

/**
* Override theme_textfield().
*/
function liberty_textfield($element) {
  if ($element['#size'] >= 15) {
    $element['#size'] = '';
    $element['#attributes']['class'] = isset($element['#attributes']['class']) ? "{$element['#attributes']['class']} fluid" : "fluid";
  }
  return theme_textfield($element);
}

function liberty_file($element) {
  _form_set_class($element, array('form-file'));
  if ($element['#size'] >= 15) {
    $element['#size'] = '';
    $element['#attributes']['class'] = isset($element['#attributes']['class']) ? "{$element['#attributes']['class']} fluid" : "fluid";
  }
  return theme('form_element', $element, '<input type="file" name="'. $element['#name'] .'"'. ($element['#attributes'] ? ' '. drupal_attributes($element['#attributes']) : '') .' id="'. $element['#id'] .'" size="'. $element['#size'] ."\" />\n");
}

function liberty_password($element) {
  if ($element['#size'] >= 15) {
    $element['#size'] = '';
    $element['#attributes']['class'] = isset($element['#attributes']['class']) ? "{$element['#attributes']['class']} fluid" : "fluid";
  }
  $maxlength = $element['#maxlength'] ? ' maxlength="'. $element['#maxlength'] .'" ' : '';

  _form_set_class($element, array('form-text'));
  $output = '<input type="password" name="'. $element['#name'] .'" id="'. $element['#id'] .'" '. $maxlength . $size . drupal_attributes($element['#attributes']) .' />';
  return theme('form_element', $element, $output);
}

/**
 * Return a themed set of links.
 *
 * @param $links
 *   A keyed array of links to be themed.
 * @param $attributes
 *   A keyed array of attributes
 * @return
 *   A string containing an unordered list of links.
 */
function liberty_links($links, $attributes = array('class' => 'links')) {
  global $language;
  $output = '';

  if (count($links) > 0) {
    $output = '<ul'. drupal_attributes($attributes) .'>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = $key;

      // Add first, last and active classes to the list of links to help out themers.
      if ($i == 1) {
        $class .= ' first';
      }
      if ($i == $num_links) {
        $class .= ' last';
      }
      if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page()))
          && (empty($link['language']) || $link['language']->language == $language->language)) {
        $class .= ' active';
      }
      $output .= '<li'. drupal_attributes(array('class' => $class)) .'>';

      if (isset($link['href'])) {
        // Pass in $link as $options, they share the same keys.
        $output .= l($link['title'], $link['href'], $link);
      }
      else if (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for adding title and class attributes
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        $span_attributes = '';
        if (isset($link['attributes'])) {
          $span_attributes = drupal_attributes($link['attributes']);
        }
        $output .= '<span'. $span_attributes .'>'. $link['title'] .'</span>';
      }

      $i++;
      $output .= "</li>";
    }

    $output .= '</ul>';
  }

  return $output;
}

function liberty_menu_local_task($link, $active = FALSE) {
  return '<li '. ($active ? 'class="active" ' : '') .'>'. $link ."</li>";
}
