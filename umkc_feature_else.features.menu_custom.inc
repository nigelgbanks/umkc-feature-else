<?php
/**
 * @file
 * umkc_feature_else.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function umkc_feature_else_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => '',
  );
  // Exported menu: menu-side-menu.
  $menus['menu-side-menu'] = array(
    'menu_name' => 'menu-side-menu',
    'title' => 'Side Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');
  t('Main menu');
  t('Side Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
