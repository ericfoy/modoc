<?php

// Put the logo path into JavaScript for the live preview.
//backdrop_add_js(array('color' => array('logo' => theme_get_setting('logo', 'colihaut'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'text' => t('Text color'),
    'headerbg' => t('Header Background'),
    'menubg' => t('Menu Background'),
    'menuhl' => t('Menu Hilight'),
    'tablerow' => t('Table Rows'),
    'link' => t('Link color'),
    'active' => t('Active Sort Column'),
    'border' => t('Border Color'),
//    'top' => t('Header background'),
//    'bodybg' => t('Main background'),
//    'pagebg' => t('Page background'),
//    'footer' => t('Footer background'),
//    'titleslogan' => t('Title and slogan'),
//    'nodeheader' => t('Article Header'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Deep Blue (default)'),
      'colors' => array(
        'text' => '#222222',
        'headerbg' => '#abcdee',
        'menubg' => '#abcdef',
        'menuhl' => '#f1f100',
        'tablerow' => '#d4e6f7',
        'link' => '#990000',
        'active' => '#d0ebd7',
        'border' => '#000098',
      ),
    ),
    'green' => array(
      'title' => t('Grass Green'),
      'colors' => array(
        'text' => '#222222',
        'headerbg' => '#abcdeg',
        'menubg' => '#abcdef',
        'menuhl' => '#f1f100',
        'tablerow' => '#d4e6f7',
        'link' => '#009900',
        'active' => '#d0ebd7',
        'border' => '#000098',
      ),
    ),
    'brown' => array(
      'title' => t('Earth Brown'),
      'colors' => array(
        'text' => '#222222',
        'headerbg' => '#abcdeg',
        'menubg' => '#abcdef',
        'menuhl' => '#f1f100',
        'tablerow' => '#d4e6f7',
        'link' => '#000099',
        'active' => '#d0ebd7',
        'border' => '#000098',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(),

  // Gradient definitions.
  'gradients' => array(),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
//  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
//  'preview_css' => 'color/preview.css',
//  'preview_js' => 'color/preview.js',
//  'preview_html' => 'color/preview.html',

  // Base file for image generation.
//  'base_image' => 'color/base.png',
);
