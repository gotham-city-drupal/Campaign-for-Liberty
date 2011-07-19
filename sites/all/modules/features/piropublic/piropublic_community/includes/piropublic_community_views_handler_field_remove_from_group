<?php
/**
 * Field handler to approve/deny a subscription request, or remove a member.
 *
 * @ingroup views_field_handlers
 */
class piropublic_community_views_handler_field_remove_from_group extends og_views_handler_field_og_uid {
  function construct() {
    parent::construct();
    $this->additional_fields['nid'] = array('table' => 'og_uid', 'field' => 'nid');
    $this->additional_fields['is_active'] = array('table' => 'og_uid', 'field' => 'is_active');
  }

  function render($values) {
    if (isset($values->{$this->field_alias})) {
      $uid = $values->{$this->field_alias};
      $nid = $values->{$this->aliases['nid']};
      $is_active = $values->{$this->aliases['is_active']};
      $node = node_load($nid);

      if ($uid != $node->uid) {
        if ($is_active) {
          if (user_access('remove from group')) {
            return l(t('Remove from group'), "og/unsubscribe/$nid/$uid", array('query' => drupal_get_destination()));
          }
        }
      }
    }
  }
}
