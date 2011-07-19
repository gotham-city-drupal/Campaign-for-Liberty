<?php
/**
 * Field handler to add/remove an admin.
 *
 * @ingroup views_field_handlers
 */
class piropublic_community_views_handler_field_og_invitelink extends views_handler_field_node_link {
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

    // need to change this... bad access control
    if (!user_access('invite to all groups')) {
      return;
    }

    $item = menu_get_item("og/users/$node->nid/invite");
    if (!$item['access']) {
      return;
    }

    $text = !empty($this->options['text']) ? $this->options['text'] : t('invite members');
    return l($text, "og/users/$node->nid/invite", array('query' => drupal_get_destination()));
  }
}