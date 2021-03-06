<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_testimonials_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_testimonials';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'menu' => '-1',
    'path' => '3',
  );

  $export['content_extra_weights_ca_testimonials'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_testimonials';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_testimonials'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_testimonials_pattern';
  $strongarm->value = 'testimonials/[title-raw]';

  $export['pathauto_node_ca_testimonials_pattern'] = $strongarm;
  return $export;
}
