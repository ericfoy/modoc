<?php

/**
 * Implements template_preprocess_page().
 */
function modoc_preprocess_page(&$variables) {
  backdrop_add_library('system', 'opensans', TRUE);

  $node = menu_get_object();
  if ($node) {
    $variables['classes'][] = 'page-node-' . $node->nid;
  }
  // Add CSS classes to term listing pages.
  $path = current_path();
  if (substr($path, 0, 14) == 'taxonomy/term/') {
    $parts = arg();
    if (count($parts) == 3) {
      $term = taxonomy_term_load($parts[2]);
      $variables['classes'][] = 'term-page';
      $variables['classes'][] = backdrop_clean_css_identifier('term-page-' . $term->name);
    }
  }
  elseif (substr($path, 0, 13) == 'node/preview/') {
    $variables['classes'][] = 'node-preview-page';
  }
}

/**
 * Implements template_preprocess_node().
 */
function modoc_preprocess_node(&$variables) {
  if ($variables['status'] == NODE_NOT_PUBLISHED) {
    $name = node_type_get_name($variables['type']);
    $variables['title_suffix']['unpublished_indicator'] = array(
      '#type' => 'markup',
      '#markup' => '<div class="unpublished-indicator">' . t('This @type is unpublished.', array('@type' => $name)) . '</div>',
    );
  }
}

/**
 * Implements template_preprocess_layout().
 */
function modoc_preprocess_layout(&$variables) {
  if (isset($variables['layout_info']['flexible'])) {
    // Add css class to layout.
    $variables['classes'][] = 'layout-' . backdrop_clean_css_identifier($variables['layout_info']['name']);
  }
}

/**
 * Implements theme_breadcrumb().
 */
function modoc_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  $output = '';
  if (!empty($breadcrumb)) {
    // Differs to core version in not using "»".
    $output .= '<nav role="navigation" class="breadcrumb">';
    $output .= '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $output .= '<ol><li>' . implode('</li><li>', $breadcrumb) . '</li></ol>';
    $output .= '</nav>';
  }
  return $output;
}

/**
 * Implements hook_css_alter().
 */
function modoc_css_alter(&$css) {
  unset($css['core/modules/node/css/node.preview.css']);
}

/**
 * Implements hook_ckeditor_css_alter().
 */
function modoc_ckeditor_css_alter(&$css, $format) {
  // This theme ships with a custom copy of that file, that otherwise contains
  // unwanted body styles (font, color).
  $key = array_search('core/modules/ckeditor/css/ckeditor-iframe.css', $css);
  unset($css[$key]);
}
