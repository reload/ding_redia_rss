<?php
/**
 * @file
 * ding_redia_rss.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ding_redia_rss_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function ding_redia_rss_flag_default_flags() {
  $flags = array();
  // Exported flag: "Mobile app".
  $flags['mobile_app'] = array(
    'content_type' => 'node',
    'title' => 'Mobile app',
    'global' => 0,
    'types' => array(
      0 => 'ding_event',
      1 => 'ding_news',
    ),
    'flag_short' => 'Show in mobile app',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Hide from mobile app',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 5,
        1 => 6,
        2 => 7,
        3 => 8,
      ),
      'unflag' => array(
        0 => 5,
        1 => 6,
        2 => 7,
        3 => 8,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'ding_redia_rss',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
