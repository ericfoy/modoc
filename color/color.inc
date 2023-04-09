<?php

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'text' => t('Page Text'),
    'link' => t('Link Text'),
    'border' => t('Block Borders'),
    'pagebg' => t('Page Background'),
    'headerbg' => t('Header Background'),
    'headertxt' => t('Header Text'),
    'footerbg' => t('Footer Background'),
    'footertxt' => t('Footer Text'),
    'menubg' => t('Menu Background'),
    'menutxt' => t('Menu Text'),
    'menuhl' => t('Menu Highlight'),
    'tablerow' => t('Table Rows'),
    'sortcol' => t('Active Sort Column'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Default'),
      'colors' => array(
        'text' => '#0f0f0f',
        'link' => '#093579',
        'border' => '#000000',
        'pagebg' => '#ffffff',
        'headerbg' => '#bcc8c8',
    'headertxt' => '#0f0f0e',
        'footerbg' => '#bcc8c9',
    'footertxt' => '#0f0e0f',
        'menubg' => '#c8d7d2',
    'menutxt' => '#0e0f0f',
        'menuhl' => '#d2e1dc',
        'tablerow' => '#e6e6e6',
        'sortcol' => '#dcdcdc',
      ),
    ),
    'red' => array(
      'title' => t('Red'),
      'colors' => array(
        'text' => '#222222',
        'link' => '#454365',
        'border' => '#4e0301',
        'pagebg' => '#f5f1f8',
        'headerbg' => '#f53737',
    'headertxt' => '#0f0f0e',
        'footerbg' => '#f53737',
    'footertxt' => '#0f0e0f',
        'menubg' => '#cd7e7c',
    'menutxt' => '#0e0f0f',
        'menuhl' => '#d7cabb',
        'tablerow' => '#fdebea',
        'sortcol' => '#fececd',
      ),
    ),
    'green' => array(
      'title' => t('Green'),
      'colors' => array(
        'text' => '#262431',
        'link' => '#044f40',
        'border' => '#169700',
        'pagebg' => '#eaece1',
        'headerbg' => '#375c36',
    'headertxt' => '#0f0f0e',
        'footerbg' => '#375c36',
    'footertxt' => '#0f0e0f',
        'menubg' => '#569265',
    'menutxt' => '#0e0f0f',
        'menuhl' => '#76f268',
        'tablerow' => '#bedcc5',
        'sortcol' => '#c4ecce',
      ),
    ),
    'blue' => array(
      'title' => t('Blue'),
      'colors' => array(
        'text' => '#222222',
        'link' => '#552520',
        'border' => '#000096',
        'pagebg' => '#ebf1f3',
        'headerbg' => '#6496bc',
    'headertxt' => '#0f0f0e',
        'footerbg' => '#6496bc',
    'footertxt' => '#0f0e0f',
        'menubg' => '#aacdf0',
    'menutxt' => '#0e0f0f',
        'menuhl' => '#e7e773',
        'tablerow' => '#d6e2e9',
        'sortcol' => '#d2e6e6',
      ),
    ),
    'mono' => array(
      'title' => t('Monochrome'),
      'colors' => array(
        'text' => '#191919',
        'link' => '#093579',
        'border' => '#000000',
        'pagebg' => '#ffffff',
        'headerbg' => '#e2e2e2',
    'headertxt' => '#0f0f0e',
        'footerbg' => '#e2e2e2',
    'footertxt' => '#0f0e0f',
        'menubg' => '#cfcfcf',
    'menutxt' => '#0e0f0f',
        'menuhl' => '#e2e2e2',
        'tablerow' => '#ebebeb',
        'sortcol' => '#e6e6e6',
      ),
    ),
    'navy' => array(
      'title' => t('US Navy'),
      'colors' => array(
        'text' => '#08262c',
        'link' => '#003b4f',
        'border' => '#003b4f',
        'pagebg' => '#ffffff',
        'headerbg' => '#e8b00f',
    'headertxt' => '#0f0f0e',
        'footerbg' => '#e8b00f',
    'footertxt' => '#0f0e0f',
        'menubg' => '#088199',
    'menutxt' => '#0e0f0f',
        'menuhl' => '#e8b00f',
        'tablerow' => '#c6ccd0',
        'sortcol' => '#d2d7dc',
      ),
    ),
    'army' => array(
      'title' => t('US Army'),
      'colors' => array(
        'text' => '#0c121e',
        'link' => '#41533b',
        'border' => '#1c222e',
        'pagebg' => '#ffffff',
        'headerbg' => '#41533b',
    'headertxt' => '#0f0f0e',
        'footerbg' => '#41533b',
    'footertxt' => '#0f0e0f',
        'menubg' => '#aeaa85',
    'menutxt' => '#0e0f0f',
        'menuhl' => '#cecaa5',
        'tablerow' => '#e1e1d2',
        'sortcol' => '#eeeac5',
      ),
    ),
    'usaf' => array(
      'title' => t('US Air Force'),
      'colors' => array(
        'text' => '#002554',
        'link' => '#00369e',
        'border' => '#002b80',
        'pagebg' => '#ffffff',
        'headerbg' => '#003594',
    'headertxt' => '#0f0f0e',
        'footerbg' => '#003594',
    'footertxt' => '#0f0e0f',
        'menubg' => '#b6860a',
    'menutxt' => '#0e0f0f',
        'menuhl' => '#d2af39',
        'tablerow' => '#faf0c8',
        'sortcol' => '#fae6af',
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
  //'gradients' => array(),

  // Color areas to fill (x, y, width, height).
  //'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  //'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  //'preview_css' => 'color/preview.css',
  //'preview_js' => 'color/preview.js',
  //'preview_html' => 'color/preview.html',

  // Base file for image generation.
  //'base_image' => 'color/base.png',
);
