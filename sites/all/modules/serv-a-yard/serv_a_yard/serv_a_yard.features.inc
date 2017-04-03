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

  // Exported image style: carousel_background.
  $styles['carousel_background'] = array(
    'label' => 'Carousel Background',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1220,
          'height' => 575,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'carousel_background',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: header_image.
  $styles['header_image'] = array(
    'label' => 'Header Image',
    'effects' => array(
      6 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1200,
          'height' => 360,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'header_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: homepage_services_image.
  $styles['homepage_services_image'] = array(
    'label' => 'Homepage Services Image',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 220,
          'height' => 120,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'homepage_services_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: photo_gallery_thumbnail.
  $styles['photo_gallery_thumbnail'] = array(
    'label' => 'Photo Gallery Thumbnail',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: service_listing_photo.
  $styles['service_listing_photo'] = array(
    'label' => 'Service Listing Photo',
    'effects' => array(
      5 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 360,
          'height' => 254,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'service_listing_photo',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: team_member_photo.
  $styles['team_member_photo'] = array(
    'label' => 'Team Member Photo',
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'team_member_photo',
        ),
        'weight' => 0,
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
    'photo_album' => array(
      'name' => t('Photo Album'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'services' => array(
      'name' => t('Services'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'services_listing' => array(
      'name' => t('Services Listing'),
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
  );
  drupal_alter('node_info', $items);
  return $items;
}
