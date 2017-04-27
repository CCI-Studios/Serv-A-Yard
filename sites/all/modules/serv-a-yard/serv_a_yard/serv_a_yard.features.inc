<?php
/**
 * @file
 * serv_a_yard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function serv_a_yard_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function serv_a_yard_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function serv_a_yard_image_default_styles() {
  $styles = array();

  // Exported image style: associations_logo.
  $styles['associations_logo'] = array(
    'label' => 'Associations Logo',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: carousel_background.
  $styles['carousel_background'] = array(
    'label' => 'Carousel Background',
    'effects' => array(
      9 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1220,
          'height' => 500,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: header_image.
  $styles['header_image'] = array(
    'label' => 'Header Image',
    'effects' => array(
      10 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 360,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: homepage_services_image.
  $styles['homepage_services_image'] = array(
    'label' => 'Homepage Services Image',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 710,
          'height' => 450,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: service_category_photo.
  $styles['service_category_photo'] = array(
    'label' => 'Service category photo',
    'effects' => array(
      8 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 740,
          'height' => 450,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: team_member_photo.
  $styles['team_member_photo'] = array(
    'label' => 'Team Member Photo',
    'effects' => array(
      11 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function serv_a_yard_node_info() {
  $items = array(
    'associations' => array(
      'name' => t('Associations'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'carousel_slide' => array(
      'name' => t('Carousel Slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'homepage_services' => array(
      'name' => t('Homepage Services'),
      'base' => 'node_content',
      'description' => t('Services that appear in the module on the homepage'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service_category_page' => array(
      'name' => t('Service category page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service_description' => array(
      'name' => t('Service description'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'team_member' => array(
      'name' => t('Team Member'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
