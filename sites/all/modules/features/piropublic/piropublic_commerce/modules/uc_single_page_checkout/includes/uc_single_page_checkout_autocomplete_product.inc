<?php
// $Id: uc_node_panes_autocomplete_product.inc,v 1.1.3 2011/08/23 01:51:21 kbell Exp $
/**
 * Menu callback; Retrieve a JSON object containing autocomplete suggestions for existing nodes.
 */
function uc_single_page_checkout_autocomplete_product($string) {
  $matches = array();
  $result = db_query(db_rewrite_sql("SELECT n.nid, n.title, p.model FROM {uc_products} AS p LEFT JOIN {node} AS n ON n.nid = p.nid WHERE p.unique_hash <> '' AND (LOWER(n.title) LIKE '%%%s%%' OR LOWER(p.model) LIKE '%s%%' OR n.nid LIKE '%s%%')"), strtolower($string), strtolower($string), $string, 0, 10);
  while ($node = db_fetch_object($result)) {
    $title = check_plain($node->title);
    $nid = $node->nid;
    $sku = $node->model;
    $display = $title . ' (SKU: ' . $sku . ') [' . $nid . ']';
    $matches[$display] = $display;
  }
  drupal_json($matches);
}