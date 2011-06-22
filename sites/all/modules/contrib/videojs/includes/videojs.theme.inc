<?php

/**
 * Theme and preprocess functions for the videojs module.
 */

/**
 * Preprocess function for videojs.tpl.php when using a playlist.
 */
function template_preprocess_videojs_formatter_videojs(&$vars) {
  $codecs = array(
    'video/mp4' => array(
      array('width' => '720', 'height' => '576', 'type' => "video/mp4; codecs='avc1.42E01E, mp4a.40.2'"), // Profile: Baseline, Level: 3.0
      array('width' => '1280', 'height' => '720', 'type' => "video/mp4; codecs='avc1.4D401F, mp4a.40.2'"), // Profile: Main, Level: 3.1
      array('width' => '1920', 'height' => '1088', 'type' => "video/mp4; codecs='avc1.640029, mp4a.40.2'"), // Profile: High, Level: 4.1 
      array('width' => '2048', 'height' => '2048', 'type' => "video/mp4; codecs='avc1.58A033, mp4a.40.2'") // Profile: Extended, Level: 5.1 
    ),
    'video/webm' => 'video/webm; codec="vp8, vorbis"',
    'application/octet-stream' => 'video/webm; codec="vp8, vorbis"',
    'video/ogg' => 'video/ogg; codec="theora, vorbis"',
    'application/ogg' => 'video/ogg; codec="theora, vorbis"',
    'video/quicktime' => 'video/mp4; codecs="avc1.42E01E, mp4a.40.2"'
  );

  videojs_add();
  $vars['width'] = variable_get('videojs_width', 640);
  $vars['height'] = variable_get('videojs_height', 264);
  $field_name = $vars['element']['#field_name'];
  $node = $vars['element']['#node'];
  $items_mp4 = array();
  $items_others = array();
  foreach ((array) $node->$field_name as $item) {
    $item['filepath'] = file_create_url($item['filepath']);
    // Skip unplayable items.
    if (!isset($codecs[$item['filemime']]))
      continue;

    // Special treatment for mp4 type due to different capabilities.
    if ($item['filemime'] == 'video/mp4') {
      // Check if Video module present and dimensions are assigned
      if (isset($item['data']['dimensions'])) {
        list($width, $height) = explode('x', $item['data']['dimensions'], 2); // i.e. 560x314
        foreach ($codecs['video/mp4'] as $resolution) {
          $item['videotype'] = $resolution['type'];
          if (($width < $resolution['width']) && ($height < $resolution['height']))
            break;
        }
      } else
        $item['videotype'] = $codecs['video/mp4'][0]['type']; // dimensions info not exist, assign default
      $items_mp4[] = $item;
    } else {
      $item['videotype'] = $codecs[$item['filemime']];
      $items_others[] = $item;
    }
  }
  $vars['items'] = array_merge($items_mp4, $items_others); // mp4 listed first

  $vars['player_id'] = 'videojs-' . $vars['element']['#node']->nid . '-' . str_replace('_', '-', $vars['element']['#field_name']);

  $poster_field = variable_get('videojs_' . $node->type, 'video_module');
  if ($poster_field == 'video_module') {
    if (module_exists(video) && isset($vars['items'][0]['data'])) {
      // Video module present, retriving description and poster image from first video
      $vars['poster'] = file_create_url($vars['items'][0]['data']['video_thumb']);
    }
  }
  else {
    // Grab any poster image from a field defined in videojs admin settings
    if (!empty($node->$poster_field)) {
      $image = $node->{$poster_field}[0]; // take the first image from field
      $vars['poster'] = file_create_url($image['filepath']);
    }
  }

  // Special treatment for 'video/flv', if one is exist use it as flash fallback, otherwise first mp4
  foreach ($node->$field_name as $item) {
    if ($item['filemime'] == 'video/flv') {
      $vars['flash'] = ($item['filepath']);
      break;
    }
  }
  if (!isset($vars['flash'])) {
    $vars['flash'] = ($items_mp4[0]['filepath']);
  }

  $flash_player = _videojs_flashplayer($vars['flash'], $vars['width'], $vars['height'], $vars['poster']);
  if (isset($flash_player))
    $vars['flash_player'] = $flash_player;
}

/**
 * Preprocess function for videojs.tpl.php when displaying a view as a playlist.
 */
function template_preprocess_videojs_view(&$vars) {
  videojs_add();
  $vars['player_id'] = 'videojs-view-' . str_replace('_', '-', $vars['view']->name);
}

/**
 * Preprocess function for videojs.tpl.php when displaying a view as a playlist.
 */
function template_preprocess_videojs(&$vars) {
  videojs_add();
  $vars['player_id'] = 'videojs-' . str_replace('_', '-', $vars['player_id']);
  $vars['poster'] = file_create_url($vars['items']['thumbnail']['filepath']);
  $vars['width'] = $vars['attributes']['width'];
  $vars['height'] = $vars['attributes']['height'];
  $codecs = array(
    'video/mp4' => array(
      array('width' => '720', 'height' => '576', 'type' => "video/mp4; codecs='avc1.42E01E, mp4a.40.2'"), // Profile: Baseline, Level: 3.0
      array('width' => '1280', 'height' => '720', 'type' => "video/mp4; codecs='avc1.4D401F, mp4a.40.2'"), // Profile: Main, Level: 3.1
      array('width' => '1920', 'height' => '1088', 'type' => "video/mp4; codecs='avc1.640029, mp4a.40.2'"), // Profile: High, Level: 4.1 
      array('width' => '2048', 'height' => '2048', 'type' => "video/mp4; codecs='avc1.58A033, mp4a.40.2'") // Profile: Extended, Level: 5.1 
    ),
    'video/webm' => "video/webm; codec='vp8, vorbis'",
    'application/octet-stream' => "video/webm; codec='vp8, vorbis'",
    'video/ogg' => "video/ogg; codec='theora, vorbis'",
    'application/ogg' => "video/ogg; codec='theora, vorbis'",
    'video/quicktime' => "video/mp4; codecs='avc1.42E01E, mp4a.40.2'"
  );
  foreach ($vars['items'] as $item) {
    $item['filepath'] = file_create_url($item['filepath']);
    // Skip unplayable items.
    if (!isset($codecs[$item['filemime']]))
      continue;

    // Special treatment for mp4 type due to different capabilities.
    if ($item['filemime'] == 'video/mp4') {
      // Check if Video module present and dimensions are assigned
      if (isset($item['data']['dimensions'])) {
        list($width, $height) = explode('x', $item['data']['dimensions'], 2); // i.e. 560x314
        foreach ($codecs['video/mp4'] as $resolution) {
          $item['videotype'] = $resolution['type'];
          if (($width < $resolution['width']) && ($height < $resolution['height']))
            break;
        }
      } else
        $item['videotype'] = $codecs['video/mp4'][0]['type']; // dimensions info not exist, assign default
      $items_mp4[] = $item;
    } else {
      $item['videotype'] = $codecs[$item['filemime']];
      $items_others[] = $item;
    }
  }
  $vars['items'] = array_merge($items_mp4, $items_others); // mp4 listed first

  if (!isset($vars['flash'])) {
    $vars['flash'] = $items_mp4[0]['filepath'];
  }
}

/**
 *  Get flash player fallback
 *
 *  $url - url to flash media
 *
 *  $width - width
 *
 *  $height - height
 *
 *  $poster - url to the poster image
 */
function _videojs_flashplayer($url, $width, $height, $poster = NULL) {
  if (module_exists('swftools')) {
    $options = array(
      'params' => array(
        'width' => $width,
        'height' => $height,
      ),
    );
    if ($poster) {
      $options['othervars'] = array(
        //@todo: swftools bug, can't enable this until they fix their pathing for the images.
        'image' => $poster,
        'class' => 'vjs-flash-fallback',
      );
    }
    return swf($url, $options);
  }
  elseif (module_exists('flowplayer')) {
    // kjh: use a playlist to display the thumbnail if not auto playing
    if ($poster) {
      $options = array('playlist' => array($poster,
          array('url' => urlencode($url),
            'autoPlay' => FALSE,
            'autoBuffering' => TRUE,
          ),
        ),
      );
    }
    else {
      $options = array(
        'clip' => array('url' => urlencode($url),
          'autoPlay' => FALSE,
          'autoBuffering' => TRUE,
        ),
      );
    }
    return theme(
        'flowplayer', $options, 'vjs-flash-fallback',
        // adding 24px to height #973636
        array('style' => 'width:' . $width . 'px;height:' . $height + 24 . 'px;')
    );
  }
}
