<?php
// $Id: uc_node_panes_autocomplete_node.inc,v 1.1.3 2011/08/23 01:51:21 kbell Exp $
/**
 * Menu callback; Retrieve a JSON object containing autocomplete suggestions for existing nodes.
 */
function uc_single_page_checkout_autocomplete_node($string) {
  $matches = array();
  $result = db_query(db_rewrite_sql("SELECT nid, title FROM {node} WHERE status = 1 AND nid LIKE '%s%%' OR LOWER(title) LIKE '%%%s%%'"), strtolower($string), strtolower($string), 0, 10);
  while ($node = db_fetch_object($result)) {
    $title = check_plain($node->title);
    $nid = $node->nid;
    $display = $title . ' [' . $nid . ']';
    $matches[$display] = $display;
  }
  drupal_json($matches);
}