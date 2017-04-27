<?php
/**
 * @file
 * serv_a_yard.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function serv_a_yard_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'header_image';
  $bean_type->label = 'Header Image';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['header_image'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'service_category_photos';
  $bean_type->label = 'Service category photos';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['service_category_photos'] = $bean_type;

  return $export;
}
