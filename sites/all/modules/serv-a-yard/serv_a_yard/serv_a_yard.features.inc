<?php
/**
 * @file
 * serv_a_yard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function serv_a_yard_ctools_plugin_api($module = NULL, $api = NULL) {
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
    'name' => 'carousel_background',
    'label' => 'Carousel Background',
    'effects' => array(
      4 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
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

  // Exported image style: homepage_services_image.
  $styles['homepage_services_image'] = array(
    'name' => 'homepage_services_image',
    'label' => 'Homepage Services Image',
    'effects' => array(
      1 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
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
    'name' => 'photo_gallery_thumbnail',
    'label' => 'Photo Gallery Thumbnail',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: team_member_photo.
  $styles['team_member_photo'] = array(
    'name' => 'team_member_photo',
    'label' => 'Team Member Photo',
    'effects' => array(
      3 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
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
    'team_member' => array(
      'name' => t('Team Member'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
