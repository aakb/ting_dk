<?php
// $Id: heartbeat_comments.rules.inc,v 1.1.2.3 2010/05/18 20:00:48 stalski Exp $

/**
 * @file
 *
 */

/**
 * Implementation of hook_rules_event_info().
 * @ingroup rules
 */
function heartbeat_comments_rules_event_info() {
  return array(
    'heartbeat_comment_post' => array(
      'label' => t('User reacts on a heartbeat message'),
      'module' => 'heartbeat_comments',
      'arguments' => array(
        'user' => array('type' => 'user', 'label' => t('User who reacts on the acivity.')),
        'heartbeat_comment' => array('type' => 'heartbeat_comment', 'label' => t('Comment that has been posted.')),
        'author' => array('type' => 'user', 'label' => t('User who is the original author of the activity.')),
      ),
      'redirect' => TRUE,
    ),
  );
}

/**
 * Implementation of hook_rules_data_type_info().
 */
function heartbeat_comments_rules_data_type_info() {
  return array(
    'heartbeat_comment' => array(
      'label' => t('Heartbeat comment'),
      'class' => 'rules_data_type_heartbeat_comment',
      'savable' => FALSE,
      'identifiable' => TRUE,
      'module' => 'heartbeat_comments',
    ),
  );
}

/**
 * Defines the heartbeat_comment data type
 */
class rules_data_type_heartbeat_comment extends rules_data_type {

}