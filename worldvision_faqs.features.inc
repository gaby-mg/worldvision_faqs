<?php
/**
 * @file
 * worldvision_faqs.features.inc
 */

/**
 * Implements hook_views_api().
 */
function worldvision_faqs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function worldvision_faqs_node_info() {
  $items = array(
    'wv_frequently_asqued_question' => array(
      'name' => t('Frequently Asqued Question'),
      'base' => 'node_content',
      'description' => t('Use <em>frequently asqued questions</em> for use on the private area.'),
      'has_title' => '1',
      'title_label' => t('Pregunta'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
