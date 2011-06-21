<?php
/**
 * Field handler to add/remove an admin.
 *
 * @ingroup views_field_handlers
 */
class old_community_views_handler_field_promote_to_group extends views_handler_field_node_link {
  function construct() {
    parent::construct();
    $this->additional_fields['uid'] = 'uid';
    $this->additional_fields['type'] = 'type';
    $this->additional_fields['format'] = array('table' => 'node_revisions', 'field' => 'format');
  }

  function render($values) {
    // ensure user has access to edit this node.
    $node = new stdClass();
    $node->nid = $values->{$this->aliases['nid']};
    $node->uid = $values->{$this->aliases['uid']};
    $node->type = $values->{$this->aliases['type']};
    $node->format = $values->{$this->aliases['format']};
    $node->status = 1; // unpublished nodes ignore access control

    if (!node_access('update', $node)) {
      return;
    }

    if ((!user_access('promote to my groups'))&&(!og_is_group_admin($node))) {
      return;
    }

    $text = !empty($this->options['text']) ? $this->options['text'] : t('promote to my group');
    return l($text, "node/$node->nid/edit", array('query' => drupal_get_destination()));
  }
}