<?php

// Put the logo path into JavaScript for the live preview.
//backdrop_add_js(array('color' => array('logo' => theme_get_setting('logo', 'colihaut'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'text' => t('Page Text'),
    'link' => t('Link Text'),
    'border' => t('Block Borders'),
    'pagebg' => t('Page Background'),
    'headerbg' => t('Header Background'),
    'footerbg' => t('Footer Background'),
    'menubg' => t('Menu Background'),
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
        'footerbg' => '#bcc8c9',
        'menubg' => '#c8d7d2',
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
        'footerbg' => '#f53737',
        'menubg' => '#cd7e7c',
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
        'footerbg' => '#375c36',
        'menubg' => '#569265',
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
        'footerbg' => '#6496bc',
        'menubg' => '#aacdf0',
        'menuhl' => '#e7e773',
        'tablerow' => '#d6e2e9',
        'sortcol' => '#d2e6e6',
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
        'footerbg' => '#e8b00f',
        'menubg' => '#088199',
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
        'footerbg' => '#41533b',
        'menubg' => '#aeaa85',
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
        'footerbg' => '#003594',
        'menubg' => '#b6860a',
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
  'gradients' => array(),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
