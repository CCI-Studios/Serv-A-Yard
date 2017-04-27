<?php

function say_custom_preprocess_html(&$vars) {
  $path = drupal_get_path_alias($_GET['q']);
  $aliases = explode('/', $path);

  foreach($aliases as $alias) {
    $vars['classes_array'][] = drupal_clean_css_identifier($alias);
  }
  
  if ($node = menu_get_object()) {
    if ($node->type == "service_description" || $node->type == "service_category_page") {
      $tid = $node->field_service_type[LANGUAGE_NONE][0]['tid'];
      $term = taxonomy_term_load($tid);
      $machine_name = $term->field_machine_name[LANGUAGE_NONE][0]['safe_value'];
      $vars['classes_array'][] = $machine_name;
    }
  }
}
