<?php

/**
 * @file nodequeue.rules.inc
 * Rules integration for the Nodequeue module.
 */

/**
 * Implementation of hook_rules_event_info().
 */
function nodequeue_rules_event_info() {
  $items = array();
  $queues = nodequeue_load_queues(array_keys(nodequeue_get_all_qids()));
  foreach ($queues as $queue) {
    $args = array(
      'node' => array(
        'type' => 'node',
        'label' => t('Queued node'),
      ),
    );
    // For each nodequeue we define two events
    $items['nodequeue_added_' . $queue->qid] = array(
      'label' => t('Node added to the nodequeue "@queue-title"', array('@queue-title' => $queue->title)),
      'module' => 'Nodequeue',
      'arguments' => $args,
    );

    $items['nodequeue_removed_' . $queue->qid] = array(
      'label' => t('Node removed from nodequeue "@queue-title"', array('@queue-title' => $queue->title)),
      'module' => 'Nodequeue',
      'arguments' => $args,
    );

    $items['nodequeue_saved_' . $queue->qid] = array(
      'label' => t('Nodequeue "@queue-title" is saved', array('@queue-title' => $queue->title)),
      'module' => 'Nodequeue',
      'arguments' => array(),
    );
  }
  return $items;
}