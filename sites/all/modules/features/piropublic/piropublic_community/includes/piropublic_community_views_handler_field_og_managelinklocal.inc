<?php
/**
 * Field handler to add/remove an admin.
 *
 * @ingroup views_field_handlers
 */
class piropublic_community_views_handler_field_og_managelinklocal extends og_views_handler_field_og_uid {
  function construct() {
    parent::construct();
    $this->additional_fields['nid'] = array('table' => 'og_uid', 'field' => 'nid');
    $this->additional_fields['is_admin'] = array('table' => 'og_uid', 'field' => 'is_admin');
  }

  function render($values) {
    if (isset($values->{$this->field_alias})) {
      $uid = $values->{$this->field_alias};
      $nid = $values->{$this->aliases['nid']};
      $is_admin = $values->{$this->aliases['is_admin']};
      $node = node_load($nid);
      // Only show links to group admins. And don't show next to group manager.
      if ($node->type=='county') {
        if ($uid != $node->uid) {
          if (!array_search('local coordinator', $account->roles, TRUE)) {
            if ((user_access('manage local coordinators'))&&(og_is_group_admin($node))) {
              return l(t('Promote to local coordinator', array('!type' => $node->type)), "community/$nid/promote/$uid/local", array('query' => drupal_get_destination()));
            }
          }
          else {
            if ((user_access('manage local coordinators'))&&(og_is_group_admin($node))) {
              return l(t('Demote from local coordinator', array('!type' => $node->type)), "community/$nid/demote/$uid/local", array('query' => drupal_get_destination()));
            }
          }
        }
      }
    }
  }
}