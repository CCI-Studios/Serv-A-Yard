<?php
/**
 * @file
 * serv_a_yard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function serv_a_yard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_carousel';
  $view->description = 'Display a list of all nodes in queue \'Homepage Carousel\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Carousel';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="#" id="carousel-arrow-left"><img src="/sites/all/themes/say_custom/images/arrow-left.png" alt="Previous" title="Previous" /></a>
<a href="#" id="carousel-arrow-right"><img src="/sites/all/themes/say_custom/images/arrow-right.png" alt="Next" title="Next" /></a>';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'homepage_carousel' => 'homepage_carousel',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'carousel_background',
    'image_link' => '',
  );
  /* Field: Title, Body */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Title, Body';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="content"><div><div>
<div class="views-field-title">[title]</div>
<div class="views-field-body">[body]</div>
</div></div></div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Queue \'Homepage Carousel\'';
  $export['homepage_carousel'] = $view;

  $view = new view();
  $view->name = 'homepage_services';
  $view->description = 'Display a list of all nodes in queue \'Homepage Services\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Services';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[name]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'services' => 'services',
    'album_category' => 0,
    'tags' => 0,
  );
  /* Field: Service Icons */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Service Icons';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="icons">
<ul>
<li><a href="#" class=\'arboriculture\'><img src="/sites/all/themes/say_custom/images/services-large-arboriculture.png" alt="Arboriculture" /></a></li>
<li><a href="#" class=\'snow-and-ice\'><img src="/sites/all/themes/say_custom/images/services-large-snow-and-ice.png" alt="Snow & Ice Control" /></a></li>
<li><a href="#" class=\'lawn\'><img src="/sites/all/themes/say_custom/images/services-large-lawn.png" alt="Lawn" /></a></li>
<li><a href="#" class=\'fencing\'><img src="/sites/all/themes/say_custom/images/services-large-fencing.png" alt="Fencing" /></a></li>
</ul>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Column 1 */
  $handler->display->display_options['fields']['field_column_1']['id'] = 'field_column_1';
  $handler->display->display_options['fields']['field_column_1']['table'] = 'field_data_field_column_1';
  $handler->display->display_options['fields']['field_column_1']['field'] = 'field_column_1';
  $handler->display->display_options['fields']['field_column_1']['label'] = '';
  $handler->display->display_options['fields']['field_column_1']['element_label_colon'] = FALSE;
  /* Field: Content: Column 2 */
  $handler->display->display_options['fields']['field_column_2']['id'] = 'field_column_2';
  $handler->display->display_options['fields']['field_column_2']['table'] = 'field_data_field_column_2';
  $handler->display->display_options['fields']['field_column_2']['field'] = 'field_column_2';
  $handler->display->display_options['fields']['field_column_2']['label'] = '';
  $handler->display->display_options['fields']['field_column_2']['element_label_colon'] = FALSE;
  /* Field: Content: Column 3 */
  $handler->display->display_options['fields']['field_column_3']['id'] = 'field_column_3';
  $handler->display->display_options['fields']['field_column_3']['table'] = 'field_data_field_column_3';
  $handler->display->display_options['fields']['field_column_3']['field'] = 'field_column_3';
  $handler->display->display_options['fields']['field_column_3']['label'] = '';
  $handler->display->display_options['fields']['field_column_3']['element_label_colon'] = FALSE;
  /* Field: Content: Image 1 URL */
  $handler->display->display_options['fields']['field_image_1_url']['id'] = 'field_image_1_url';
  $handler->display->display_options['fields']['field_image_1_url']['table'] = 'field_data_field_image_1_url';
  $handler->display->display_options['fields']['field_image_1_url']['field'] = 'field_image_1_url';
  $handler->display->display_options['fields']['field_image_1_url']['label'] = '';
  $handler->display->display_options['fields']['field_image_1_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_1_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image 1 */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image_1';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['text'] = '<a href="[field_image_1_url]">[field_image_1]</a>';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'homepage_services_image',
    'image_link' => '',
  );
  /* Field: Content: Image 2 URL */
  $handler->display->display_options['fields']['field_image_2_url']['id'] = 'field_image_2_url';
  $handler->display->display_options['fields']['field_image_2_url']['table'] = 'field_data_field_image_2_url';
  $handler->display->display_options['fields']['field_image_2_url']['field'] = 'field_image_2_url';
  $handler->display->display_options['fields']['field_image_2_url']['label'] = '';
  $handler->display->display_options['fields']['field_image_2_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_2_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image 2 */
  $handler->display->display_options['fields']['field_image_2']['id'] = 'field_image_2';
  $handler->display->display_options['fields']['field_image_2']['table'] = 'field_data_field_image_2';
  $handler->display->display_options['fields']['field_image_2']['field'] = 'field_image_2';
  $handler->display->display_options['fields']['field_image_2']['label'] = '';
  $handler->display->display_options['fields']['field_image_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_2']['alter']['text'] = '<a href="[field_image_2_url]">[field_image_2]</a>';
  $handler->display->display_options['fields']['field_image_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_2']['settings'] = array(
    'image_style' => 'homepage_services_image',
    'image_link' => '',
  );
  /* Field: Content: Image 3 URL */
  $handler->display->display_options['fields']['field_image_3_url']['id'] = 'field_image_3_url';
  $handler->display->display_options['fields']['field_image_3_url']['table'] = 'field_data_field_image_3_url';
  $handler->display->display_options['fields']['field_image_3_url']['field'] = 'field_image_3_url';
  $handler->display->display_options['fields']['field_image_3_url']['label'] = '';
  $handler->display->display_options['fields']['field_image_3_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_3_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image 3 */
  $handler->display->display_options['fields']['field_image_3']['id'] = 'field_image_3';
  $handler->display->display_options['fields']['field_image_3']['table'] = 'field_data_field_image_3';
  $handler->display->display_options['fields']['field_image_3']['field'] = 'field_image_3';
  $handler->display->display_options['fields']['field_image_3']['label'] = '';
  $handler->display->display_options['fields']['field_image_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_3']['alter']['text'] = '<a href="[field_image_3_url]">[field_image_3]</a>';
  $handler->display->display_options['fields']['field_image_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_3']['settings'] = array(
    'image_style' => 'homepage_services_image',
    'image_link' => '',
  );
  /* Field: Content: Image 4 URL */
  $handler->display->display_options['fields']['field_image_4_url']['id'] = 'field_image_4_url';
  $handler->display->display_options['fields']['field_image_4_url']['table'] = 'field_data_field_image_4_url';
  $handler->display->display_options['fields']['field_image_4_url']['field'] = 'field_image_4_url';
  $handler->display->display_options['fields']['field_image_4_url']['label'] = '';
  $handler->display->display_options['fields']['field_image_4_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_4_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image 4 */
  $handler->display->display_options['fields']['field_image_4']['id'] = 'field_image_4';
  $handler->display->display_options['fields']['field_image_4']['table'] = 'field_data_field_image_4';
  $handler->display->display_options['fields']['field_image_4']['field'] = 'field_image_4';
  $handler->display->display_options['fields']['field_image_4']['label'] = '';
  $handler->display->display_options['fields']['field_image_4']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_4']['alter']['text'] = '<a href="[field_image_4_url]">[field_image_4]</a>';
  $handler->display->display_options['fields']['field_image_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_4']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_4']['settings'] = array(
    'image_style' => 'homepage_services_image',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'homepage_services' => 'homepage_services',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Queue \'Homepage Services\'';
  $export['homepage_services'] = $view;

  $view = new view();
  $view->name = 'photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Serv-A-Yard Work';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_album_category',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'photo_gallery_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  /* Field: Content: Album Category */
  $handler->display->display_options['fields']['field_album_category']['id'] = 'field_album_category';
  $handler->display->display_options['fields']['field_album_category']['table'] = 'field_data_field_album_category';
  $handler->display->display_options['fields']['field_album_category']['field'] = 'field_album_category';
  $handler->display->display_options['fields']['field_album_category']['label'] = '';
  $handler->display->display_options['fields']['field_album_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_album_category']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'photo_album' => 'photo_album',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'say-work';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'S-A-Y Work';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['photo_gallery'] = $view;

  $view = new view();
  $view->name = 'photo_gallery_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Gallery Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'S-A-Y Work';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'colorbox_node_style' => 'photo_gallery_thumbnail',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_images']['multi_type'] = 'ul';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['exception']['title'] = '%2';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'photo-gallery-page';
  $export['photo_gallery_page'] = $view;

  $view = new view();
  $view->name = 'services_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[name]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'services' => 'services',
    'album_category' => 0,
    'tags' => 0,
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'service_listing_photo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  /* Field: Content: Link Text */
  $handler->display->display_options['fields']['field_link_text']['id'] = 'field_link_text';
  $handler->display->display_options['fields']['field_link_text']['table'] = 'field_data_field_link_text';
  $handler->display->display_options['fields']['field_link_text']['field'] = 'field_link_text';
  $handler->display->display_options['fields']['field_link_text']['label'] = '';
  $handler->display->display_options['fields']['field_link_text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_text']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_link_text']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services_listing' => 'services_listing',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'services';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Services';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['services_listing'] = $view;

  $view = new view();
  $view->name = 'services_pages';
  $view->description = 'Display a list of all nodes in queue \'Homepage Services\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'Services Pages';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Arboriculture Services';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[name]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'services' => 'services',
    'album_category' => 0,
    'tags' => 0,
  );
  /* Field: Service Icons (small) */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Service Icons (small)';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class=\'icons small\'>
<ul>
<li class=\'arboriculture\'><a href="/services/arboriculture"><img src="/sites/all/themes/say_custom/images/services-large-arboriculture.png" alt="Arboriculture" /></a></li>
<li class=\'snow-and-ice\'><a href="/services/snow-and-ice-maintenance"><img src="/sites/all/themes/say_custom/images/services-large-snow-and-ice.png" alt="Snow & Ice Control" /></a></li>
<li class=\'lawn\'><a href="/services/lawn-and-landscape"><img src="/sites/all/themes/say_custom/images/services-large-lawn.png" alt="Lawn" /></a></li>
<li class=\'fencing\'><a href="/services/fencing-and-security"><img src="/sites/all/themes/say_custom/images/services-large-fencing.png" alt="Fencing" /></a></li>
</ul>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Service Icons */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Service Icons';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="icons">
<ul>
<li class=\'arboriculture\'><img src="/sites/all/themes/say_custom/images/services-large-arboriculture.png" alt="Arboriculture" /></li>
<li class=\'snow-and-ice\'><img src="/sites/all/themes/say_custom/images/services-large-snow-and-ice.png" alt="Snow & Ice Control" /></li>
<li class=\'lawn\'><img src="/sites/all/themes/say_custom/images/services-large-lawn.png" alt="Lawn" /></li>
<li class=\'fencing\'><img src="/sites/all/themes/say_custom/images/services-large-fencing.png" alt="Fencing" /></li>
<li class=\'residential\'><img src="/sites/all/themes/say_custom/images/services-large-residential.png" alt="Residential" /></li>
</ul>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Column 1 */
  $handler->display->display_options['fields']['field_column_1']['id'] = 'field_column_1';
  $handler->display->display_options['fields']['field_column_1']['table'] = 'field_data_field_column_1';
  $handler->display->display_options['fields']['field_column_1']['field'] = 'field_column_1';
  $handler->display->display_options['fields']['field_column_1']['label'] = '';
  $handler->display->display_options['fields']['field_column_1']['element_label_colon'] = FALSE;
  /* Field: Content: Column 2 */
  $handler->display->display_options['fields']['field_column_2']['id'] = 'field_column_2';
  $handler->display->display_options['fields']['field_column_2']['table'] = 'field_data_field_column_2';
  $handler->display->display_options['fields']['field_column_2']['field'] = 'field_column_2';
  $handler->display->display_options['fields']['field_column_2']['label'] = '';
  $handler->display->display_options['fields']['field_column_2']['element_label_colon'] = FALSE;
  /* Field: Content: Column 3 */
  $handler->display->display_options['fields']['field_column_3']['id'] = 'field_column_3';
  $handler->display->display_options['fields']['field_column_3']['table'] = 'field_data_field_column_3';
  $handler->display->display_options['fields']['field_column_3']['field'] = 'field_column_3';
  $handler->display->display_options['fields']['field_column_3']['label'] = '';
  $handler->display->display_options['fields']['field_column_3']['element_label_colon'] = FALSE;
  /* Field: Content: Image 1 URL */
  $handler->display->display_options['fields']['field_image_1_url']['id'] = 'field_image_1_url';
  $handler->display->display_options['fields']['field_image_1_url']['table'] = 'field_data_field_image_1_url';
  $handler->display->display_options['fields']['field_image_1_url']['field'] = 'field_image_1_url';
  $handler->display->display_options['fields']['field_image_1_url']['label'] = '';
  $handler->display->display_options['fields']['field_image_1_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_1_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image 1 */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image_1';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['text'] = '<a href="[field_image_1_url]">[field_image_1]</a>';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'homepage_services_image',
    'image_link' => '',
  );
  /* Field: Content: Image 2 URL */
  $handler->display->display_options['fields']['field_image_2_url']['id'] = 'field_image_2_url';
  $handler->display->display_options['fields']['field_image_2_url']['table'] = 'field_data_field_image_2_url';
  $handler->display->display_options['fields']['field_image_2_url']['field'] = 'field_image_2_url';
  $handler->display->display_options['fields']['field_image_2_url']['label'] = '';
  $handler->display->display_options['fields']['field_image_2_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_2_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image 2 */
  $handler->display->display_options['fields']['field_image_2']['id'] = 'field_image_2';
  $handler->display->display_options['fields']['field_image_2']['table'] = 'field_data_field_image_2';
  $handler->display->display_options['fields']['field_image_2']['field'] = 'field_image_2';
  $handler->display->display_options['fields']['field_image_2']['label'] = '';
  $handler->display->display_options['fields']['field_image_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_2']['alter']['text'] = '<a href="[field_image_2_url]">[field_image_2]</a>';
  $handler->display->display_options['fields']['field_image_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_2']['settings'] = array(
    'image_style' => 'homepage_services_image',
    'image_link' => '',
  );
  /* Field: Content: Image 3 URL */
  $handler->display->display_options['fields']['field_image_3_url']['id'] = 'field_image_3_url';
  $handler->display->display_options['fields']['field_image_3_url']['table'] = 'field_data_field_image_3_url';
  $handler->display->display_options['fields']['field_image_3_url']['field'] = 'field_image_3_url';
  $handler->display->display_options['fields']['field_image_3_url']['label'] = '';
  $handler->display->display_options['fields']['field_image_3_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_3_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image 3 */
  $handler->display->display_options['fields']['field_image_3']['id'] = 'field_image_3';
  $handler->display->display_options['fields']['field_image_3']['table'] = 'field_data_field_image_3';
  $handler->display->display_options['fields']['field_image_3']['field'] = 'field_image_3';
  $handler->display->display_options['fields']['field_image_3']['label'] = '';
  $handler->display->display_options['fields']['field_image_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_3']['alter']['text'] = '<a href="[field_image_3_url]">[field_image_3]</a>';
  $handler->display->display_options['fields']['field_image_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_3']['settings'] = array(
    'image_style' => 'homepage_services_image',
    'image_link' => '',
  );
  /* Field: Content: Image 4 URL */
  $handler->display->display_options['fields']['field_image_4_url']['id'] = 'field_image_4_url';
  $handler->display->display_options['fields']['field_image_4_url']['table'] = 'field_data_field_image_4_url';
  $handler->display->display_options['fields']['field_image_4_url']['field'] = 'field_image_4_url';
  $handler->display->display_options['fields']['field_image_4_url']['label'] = '';
  $handler->display->display_options['fields']['field_image_4_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_4_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image 4 */
  $handler->display->display_options['fields']['field_image_4']['id'] = 'field_image_4';
  $handler->display->display_options['fields']['field_image_4']['table'] = 'field_data_field_image_4';
  $handler->display->display_options['fields']['field_image_4']['field'] = 'field_image_4';
  $handler->display->display_options['fields']['field_image_4']['label'] = '';
  $handler->display->display_options['fields']['field_image_4']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_4']['alter']['text'] = '<a href="[field_image_4_url]">[field_image_4]</a>';
  $handler->display->display_options['fields']['field_image_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_4']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_4']['settings'] = array(
    'image_style' => 'homepage_services_image',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services' => 'services',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Service Type (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_tid']['id'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_tid']['field'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['value'] = array(
    0 => '7',
  );
  $handler->display->display_options['filters']['field_service_type_tid']['vocabulary'] = 'services';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services' => 'services',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Service Type (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_tid']['id'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_tid']['field'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_service_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_service_type_tid']['vocabulary'] = 'services';
  $handler->display->display_options['path'] = 'services/arboriculture';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Snow & Ice Maintenance';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services' => 'services',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Service Type (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_tid']['id'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_tid']['field'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['value'] = array(
    0 => '7',
  );
  $handler->display->display_options['filters']['field_service_type_tid']['vocabulary'] = 'services';
  $handler->display->display_options['path'] = 'services/snow-and-ice-maintenance';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lawn & Landscape';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services' => 'services',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Service Type (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_tid']['id'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_tid']['field'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['value'] = array(
    0 => '5',
  );
  $handler->display->display_options['filters']['field_service_type_tid']['vocabulary'] = 'services';
  $handler->display->display_options['path'] = 'services/lawn-and-landscape';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fencing & Security';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services' => 'services',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Service Type (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_tid']['id'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_tid']['field'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['value'] = array(
    0 => '6',
  );
  $handler->display->display_options['filters']['field_service_type_tid']['vocabulary'] = 'services';
  $handler->display->display_options['path'] = 'services/fencing-and-security';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Residential Services';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'services' => 'services',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Service Type (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_tid']['id'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_tid']['field'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['field_service_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_service_type_tid']['vocabulary'] = 'services';
  $handler->display->display_options['path'] = 'services/residential';
  $export['services_pages'] = $view;

  $view = new view();
  $view->name = 'team_members';
  $view->description = 'Display a list of all nodes in queue \'Team Members\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'Team Members';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'team_members' => 'team_members',
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'services' => 'services',
    'album_category' => 0,
    'tags' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Service Speciality (classname) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Service Speciality (classname)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['text'] = '<div class=\'\'>[php] </div>';
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print drupal_clean_css_identifier($row->name);?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['alter']['text'] = '<div id=\'node-[nid]\'>[field_photo]</div>';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'team_member_photo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class=\'[php]\'>[title]</h2>';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = '[php]';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Titles */
  $handler->display->display_options['fields']['field_titles']['id'] = 'field_titles';
  $handler->display->display_options['fields']['field_titles']['table'] = 'field_data_field_titles';
  $handler->display->display_options['fields']['field_titles']['field'] = 'field_titles';
  $handler->display->display_options['fields']['field_titles']['label'] = '';
  $handler->display->display_options['fields']['field_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_titles']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_titles']['multi_type'] = 'ul';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class=\'\'>[body]</div>';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = '[php]';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_header');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Service Speciality (classname) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Service Speciality (classname)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['text'] = '<div class=\'\'>[php] </div>';
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print drupal_clean_css_identifier($row->name);?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['alter']['path'] = '#node-[nid]';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'team_member_photo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class=\'[php]\'>[title]</h2>';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = '[php]';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Titles */
  $handler->display->display_options['fields']['field_titles']['id'] = 'field_titles';
  $handler->display->display_options['fields']['field_titles']['table'] = 'field_data_field_titles';
  $handler->display->display_options['fields']['field_titles']['field'] = 'field_titles';
  $handler->display->display_options['fields']['field_titles']['label'] = '';
  $handler->display->display_options['fields']['field_titles']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_titles']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_titles']['multi_type'] = 'ul';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class=\'\'>[body]</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = '[php]';
  $export['team_members'] = $view;

  return $export;
}
