<?php
// $Id: zeta_create_memblog_link.inc,v 1.0.0.0 2010/12/12 12:33:46 pirox Exp $

/**
 * @file
 * Creates a link to create member blogs, only shows on users profile page
 */
/**
 * Views memblog create link handler
 *
 * @ingroup views
 */
class piropublic_community_views_handler_field_create_memblog_link extends views_handler_field {
  /**
	 *  shows display of the memblog create link on logged in users profile page
   */

  /**
   * Add uid as a additional field.
   */
  function construct() {
    parent::construct();
    $this->additional_fields['uid'] = 'uid';
  }
  /**
   * Define our additional configuration setting.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['text'] = array('default' => '', 'translatable' => TRUE);
    return $options;
  }

  /**
   * Define the configuration form for our textfield.
   */
  function options_form(&$form, &$form_state) {
    $form['label'] = array(
      '#type' => 'textfield',
      '#title' => t('Label'),
      '#default_value' => isset($this->options['label']) ? $this->options['label'] : '',
      '#description' => t('The label for this field that will be displayed to end users if the style requires it.'),
    );
		$form['text'] = array(
      '#type' => 'textfield',
      '#title' => t('Text to display'),
      '#default_value' => $this->options['text'],
      '#description' => t('Define the text to use for the link title. You can use replacement tokens to insert any existing field output.'),
    );

    // Get a list of the available fields and arguments for token replacement.
    $options = array();
    foreach ($this->view->display_handler->get_handlers('field') as $field => $handler) {
      $options[t('Fields')]["[$field]"] = $handler->ui_name();
      // We only use fields up to (and including) this one.
      if ($field == $this->options['id']) {
        break;
      }
    }
    $count = 0; // This lets us prepare the key as we want it printed.
    foreach ($this->view->display_handler->get_handlers('argument') as $arg => $handler) {
      $options[t('Arguments')]['%' . ++$count] = $handler->ui_name();
    }




  }
	  /**
   * Renders our field, displays a link if the user is allowed to.
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
		  $text = t('Create a new blog entry');
    	if (!empty($this->options['text'])) {
        $tokens = $this->get_render_tokens($this);
        $text = strip_tags(strtr($this->options['text'], $tokens));
      }
			$data = l($text, 'node/add/memblog');
    	return $data;
		}
  }

  function access() {
    return user_access('create memblog content');
  }

	  /**
   * Just do some basic checks, don't add "memblog_link" as field.
   */
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }
}
