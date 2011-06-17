<?php
// $Id: zeta_handler_field_privatemsg_link.inc,v 1.0.0.0 2010/12/12 12:33:46 pirox Exp $
/**
 * @file
 * Contains the privatemsg extra field handler.
 */

/**
 * Views privatemsg link handler but hide link to send to self.
 *
 * @ingroup views
 */
class old_profile_handler_field_privatemsg_link extends views_handler_field_privatemsg_link {
  /**
	 *  restricts display of handler if UID argument is the same as current user
   */
  function render($values) {
    if (isset($values->uid)) {
      $uid = $values->uid;
    }
    elseif (isset($values->users_uid)) {
      $uid = $values->users_uid;
    }
    else {
      return '';
    }
		global $user;
		if ($user->uid == $uid) {
		  return '';
		}
		$text = t('Write private message');
    if (!empty($this->options['text'])) {
      $tokens = $this->get_render_tokens($this);
      $text = strip_tags(strtr($this->options['text'], $tokens));
    }
    $subject = NULL;
    if (!empty($this->options['subject'])) {
      $tokens = $this->get_render_tokens($this);
      $subject = strip_tags(strtr($this->options['subject'], $tokens));
    }

    $options = array();
    if ($this->options['return']) {
      $options['query'] = drupal_get_destination();
    }

    $data = '';
    if (($recipient = user_load($uid)) && ($url = privatemsg_get_link(array($recipient), NULL, $subject))) {
      $data = l($text, $url, $options);
    }
    return $data;

	}
}
