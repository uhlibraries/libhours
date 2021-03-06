<?php

/**
 * @file
 * Module functions to display library hours.
 *
 * @author Sean Watkins <slwatkins@uh.edu>
 * @copyright 2011 University of Houston Libraries (http://info.lib.uh.edu)
 */

/**
 * Display the hours page for a giving location
 *
 * @param int $lid
 *   Location unique identifier
 * @param int $pid
 *   Period unique identifier
 */
function libhours_display($lid = 0, $pid = 0) {
    global $conf;
    /* turn off drupal cache for this page */
    $conf['cache'] = FALSE;

    $basepath = drupal_get_path('module', 'libhours');
    drupal_add_css($basepath . '/libhours.css');
    drupal_add_js($basepath . '/libhours.js');

    return theme('hours_display', $lid, $pid);
}

/**
 * Redirects page for backwards computability
 */
function libhours_redirect($lid = 0) {
    drupal_goto('hours/' . $lid);
}
