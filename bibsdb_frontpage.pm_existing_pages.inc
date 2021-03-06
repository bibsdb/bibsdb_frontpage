<?php
/**
 * @file
 * bibsdb_frontpage.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function bibsdb_frontpage_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'bibsdb_frontpage';
  $pm_existing_page->label = 'Bibsdb Frontpage';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'ding_frontpage';
  $export['bibsdb_frontpage'] = $pm_existing_page;

  return $export;
}
