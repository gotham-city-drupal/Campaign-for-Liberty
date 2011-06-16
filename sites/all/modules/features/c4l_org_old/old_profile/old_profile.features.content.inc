<?php

/**
 * Implementation of hook_content_default_fields().
 */
function old_profile_content_default_fields() {
  $fields = array();

  // Exported field: field_prof_address
  $fields['personal-field_prof_address'] = array(
    'field_name' => 'field_prof_address',
    'type_name' => 'personal',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'location',
    'required' => '1',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'name' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '-100',
          ),
          'street' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '-99',
          ),
          'additional' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '-98',
          ),
          'city' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '-97',
          ),
          'province' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '-96',
          ),
          'country' => array(
            'collect' => '2',
            'default' => 'us',
            'weight' => '-95',
          ),
          'postal_code' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '-94',
          ),
          'locpick' => array(
            'collect' => '0',
            'weight' => '-93',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'street' => 'street',
          'additional' => 'additional',
          'city' => 'city',
          'province' => 'province',
          'postal_code' => 'postal_code',
          'country' => 'country',
          'name' => 0,
          'locpick' => 0,
          'province_name' => 0,
          'country_name' => 0,
          'map_link' => 0,
          'coords' => 0,
        ),
      ),
    ),
    'gmap_macro' => '',
    'gmap_marker' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'street' => '',
          'additional' => '',
          'city' => '',
          'province' => '',
          'country' => 'us',
          'postal_code' => '',
          'locpick' => array(
            'user_latitude' => '',
            'user_longitude' => '',
          ),
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'name' => array(
                  'default' => '',
                  'collect' => '0',
                  'weight' => '-100',
                ),
                'street' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => '-99',
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '-98',
                ),
                'city' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '-97',
                ),
                'province' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '-96',
                ),
                'country' => array(
                  'default' => 'us',
                  'collect' => 1,
                  'weight' => '-95',
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => '-94',
                ),
                'locpick' => array(
                  'default' => array(
                    'user_latitude' => '',
                    'user_longitude' => '',
                  ),
                  'collect' => '1',
                  'weight' => '-93',
                  'nodiff' => TRUE,
                ),
                'cck_preview_in_progress' => array(
                  'default' => TRUE,
                ),
                'location_settings' => array(
                  'default' => array(
                    'form' => array(
                      'fields' => array(
                        'name' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-100',
                        ),
                        'street' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-99',
                        ),
                        'additional' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-98',
                        ),
                        'city' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-97',
                        ),
                        'province' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-96',
                        ),
                        'country' => array(
                          'default' => 'us',
                          'collect' => '1',
                          'weight' => '-95',
                        ),
                        'postal_code' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-94',
                        ),
                        'locpick' => array(
                          'default' => FALSE,
                          'collect' => 1,
                          'weight' => '-93',
                          'nodiff' => TRUE,
                        ),
                        'cck_preview_in_progress' => array(
                          'default' => TRUE,
                        ),
                        'location_settings' => array(
                          'default' => array(
                            'form' => array(
                              'fields' => array(
                                'name' => array(
                                  'default' => '',
                                  'collect' => '0',
                                  'weight' => '-100',
                                ),
                                'street' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '-99',
                                ),
                                'additional' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '-98',
                                ),
                                'city' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '-97',
                                ),
                                'province' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '-96',
                                ),
                                'country' => array(
                                  'default' => 'us',
                                  'collect' => 1,
                                  'weight' => '-95',
                                ),
                                'postal_code' => array(
                                  'default' => '',
                                  'collect' => 1,
                                  'weight' => '-94',
                                ),
                                'locpick' => array(
                                  'default' => FALSE,
                                  'collect' => '0',
                                  'weight' => '-93',
                                  'nodiff' => TRUE,
                                ),
                                'cck_preview_in_progress' => array(
                                  'default' => TRUE,
                                ),
                                'location_settings' => array(
                                  'default' => array(
                                    'form' => array(
                                      'fields' => array(
                                        'name' => array(
                                          'default' => '',
                                          'collect' => '0',
                                          'weight' => '-100',
                                        ),
                                        'street' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '-99',
                                        ),
                                        'additional' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '-98',
                                        ),
                                        'city' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '-97',
                                        ),
                                        'province' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '-96',
                                        ),
                                        'country' => array(
                                          'default' => 'us',
                                          'collect' => 1,
                                          'weight' => '-95',
                                        ),
                                        'postal_code' => array(
                                          'default' => '',
                                          'collect' => 1,
                                          'weight' => '-94',
                                        ),
                                        'locpick' => array(
                                          'default' => FALSE,
                                          'collect' => '0',
                                          'weight' => '-93',
                                          'nodiff' => TRUE,
                                        ),
                                        'cck_preview_in_progress' => array(
                                          'default' => TRUE,
                                        ),
                                        'location_settings' => array(
                                          'default' => array(
                                            'form' => array(
                                              'fields' => array(
                                                'name' => array(
                                                  'default' => '',
                                                  'collect' => '0',
                                                  'weight' => '-100',
                                                ),
                                                'street' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '-99',
                                                ),
                                                'additional' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '-98',
                                                ),
                                                'city' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '-97',
                                                ),
                                                'province' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '-96',
                                                ),
                                                'country' => array(
                                                  'default' => 'us',
                                                  'collect' => 1,
                                                  'weight' => '-95',
                                                ),
                                                'postal_code' => array(
                                                  'default' => '',
                                                  'collect' => 1,
                                                  'weight' => '-94',
                                                ),
                                                'locpick' => array(
                                                  'default' => FALSE,
                                                  'collect' => '0',
                                                  'weight' => '-93',
                                                  'nodiff' => TRUE,
                                                ),
                                                'cck_preview_in_progress' => array(
                                                  'default' => TRUE,
                                                ),
                                                'location_settings' => array(
                                                  'default' => array(
                                                    'form' => array(
                                                      'fields' => array(
                                                        'name' => array(
                                                          'default' => '',
                                                          'collect' => '0',
                                                          'weight' => '-100',
                                                        ),
                                                        'street' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '-99',
                                                        ),
                                                        'additional' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '-98',
                                                        ),
                                                        'city' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '-97',
                                                        ),
                                                        'province' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '-96',
                                                        ),
                                                        'country' => array(
                                                          'default' => 'us',
                                                          'collect' => 1,
                                                          'weight' => '-95',
                                                        ),
                                                        'postal_code' => array(
                                                          'default' => '',
                                                          'collect' => 1,
                                                          'weight' => '-94',
                                                        ),
                                                        'locpick' => array(
                                                          'default' => FALSE,
                                                          'collect' => '0',
                                                          'weight' => '-93',
                                                          'nodiff' => TRUE,
                                                        ),
                                                        'cck_preview_in_progress' => array(
                                                          'default' => TRUE,
                                                        ),
                                                        'location_settings' => array(
                                                          'default' => array(
                                                            'form' => array(
                                                              'fields' => array(
                                                                'name' => array(
                                                                  'default' => '',
                                                                  'collect' => '0',
                                                                  'weight' => '-100',
                                                                ),
                                                                'street' => array(
                                                                  'default' => '',
                                                                  'collect' => 1,
                                                                  'weight' => '-99',
                                                                ),
                                                                'additional' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '-98',
                                                                ),
                                                                'city' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '-97',
                                                                ),
                                                                'province' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '-96',
                                                                ),
                                                                'country' => array(
                                                                  'default' => 'us',
                                                                  'collect' => 1,
                                                                  'weight' => '-95',
                                                                ),
                                                                'postal_code' => array(
                                                                  'default' => '',
                                                                  'collect' => 1,
                                                                  'weight' => '-94',
                                                                ),
                                                                'locpick' => array(
                                                                  'default' => array(
                                                                    'user_latitude' => '',
                                                                    'user_longitude' => '',
                                                                  ),
                                                                  'collect' => '0',
                                                                  'weight' => '-93',
                                                                  'nodiff' => TRUE,
                                                                ),
                                                                'cck_preview_in_progress' => array(
                                                                  'default' => TRUE,
                                                                ),
                                                                'location_settings' => array(
                                                                  'default' => array(
                                                                    'form' => array(
                                                                      'fields' => array(
                                                                        'name' => array(
                                                                          'default' => '',
                                                                          'collect' => '0',
                                                                          'weight' => '-100',
                                                                        ),
                                                                        'street' => array(
                                                                          'default' => '',
                                                                          'collect' => '1',
                                                                          'weight' => '-99',
                                                                        ),
                                                                        'additional' => array(
                                                                          'default' => '',
                                                                          'collect' => '1',
                                                                          'weight' => '-98',
                                                                        ),
                                                                        'city' => array(
                                                                          'default' => '',
                                                                          'collect' => '1',
                                                                          'weight' => '-97',
                                                                        ),
                                                                        'province' => array(
                                                                          'default' => '',
                                                                          'collect' => '1',
                                                                          'weight' => '-96',
                                                                        ),
                                                                        'country' => array(
                                                                          'default' => 'us',
                                                                          'collect' => '1',
                                                                          'weight' => '-95',
                                                                        ),
                                                                        'postal_code' => array(
                                                                          'default' => '',
                                                                          'collect' => 1,
                                                                          'weight' => '-94',
                                                                        ),
                                                                        'locpick' => array(
                                                                          'default' => array(
                                                                            'user_latitude' => '',
                                                                            'user_longitude' => '',
                                                                          ),
                                                                          'collect' => '4',
                                                                          'weight' => '-93',
                                                                          'nodiff' => TRUE,
                                                                        ),
                                                                        'cck_preview_in_progress' => array(
                                                                          'default' => TRUE,
                                                                        ),
                                                                        'location_settings' => array(
                                                                          'default' => array(
                                                                            'form' => array(
                                                                              'fields' => array(
                                                                                'name' => array(
                                                                                  'default' => '',
                                                                                  'collect' => '0',
                                                                                  'weight' => '-100',
                                                                                ),
                                                                                'street' => array(
                                                                                  'default' => '',
                                                                                  'collect' => '1',
                                                                                  'weight' => '-99',
                                                                                ),
                                                                                'additional' => array(
                                                                                  'default' => '',
                                                                                  'collect' => '1',
                                                                                  'weight' => '-98',
                                                                                ),
                                                                                'city' => array(
                                                                                  'default' => '',
                                                                                  'collect' => '1',
                                                                                  'weight' => '-97',
                                                                                ),
                                                                                'province' => array(
                                                                                  'default' => '',
                                                                                  'collect' => '1',
                                                                                  'weight' => '-96',
                                                                                ),
                                                                                'country' => array(
                                                                                  'default' => 'us',
                                                                                  'collect' => '1',
                                                                                  'weight' => '-95',
                                                                                ),
                                                                                'postal_code' => array(
                                                                                  'default' => '',
                                                                                  'collect' => 1,
                                                                                  'weight' => '-94',
                                                                                ),
                                                                                'locpick' => array(
                                                                                  'default' => array(
                                                                                    'user_latitude' => '',
                                                                                    'user_longitude' => '',
                                                                                  ),
                                                                                  'collect' => '1',
                                                                                  'weight' => '-93',
                                                                                  'nodiff' => TRUE,
                                                                                ),
                                                                                'cck_preview_in_progress' => array(
                                                                                  'default' => TRUE,
                                                                                ),
                                                                                'location_settings' => array(
                                                                                  'default' => array(
                                                                                    'form' => array(
                                                                                      'fields' => array(
                                                                                        'name' => array(
                                                                                          'default' => '',
                                                                                          'collect' => '0',
                                                                                          'weight' => '-100',
                                                                                        ),
                                                                                        'street' => array(
                                                                                          'default' => '',
                                                                                          'collect' => '1',
                                                                                          'weight' => '-99',
                                                                                        ),
                                                                                        'additional' => array(
                                                                                          'default' => '',
                                                                                          'collect' => '1',
                                                                                          'weight' => '-98',
                                                                                        ),
                                                                                        'city' => array(
                                                                                          'default' => '',
                                                                                          'collect' => '1',
                                                                                          'weight' => '-97',
                                                                                        ),
                                                                                        'province' => array(
                                                                                          'default' => '',
                                                                                          'collect' => '1',
                                                                                          'weight' => '-96',
                                                                                        ),
                                                                                        'country' => array(
                                                                                          'default' => 'us',
                                                                                          'collect' => '1',
                                                                                          'weight' => '-95',
                                                                                        ),
                                                                                        'postal_code' => array(
                                                                                          'default' => '',
                                                                                          'collect' => 1,
                                                                                          'weight' => '-94',
                                                                                        ),
                                                                                        'locpick' => array(
                                                                                          'default' => FALSE,
                                                                                          'collect' => 1,
                                                                                          'weight' => '-93',
                                                                                          'nodiff' => TRUE,
                                                                                        ),
                                                                                        'cck_preview_in_progress' => array(
                                                                                          'default' => TRUE,
                                                                                        ),
                                                                                        'location_settings' => array(
                                                                                          'default' => array(
                                                                                            'form' => array(
                                                                                              'fields' => array(
                                                                                                'name' => array(
                                                                                                  'default' => '',
                                                                                                  'collect' => '0',
                                                                                                  'weight' => '-100',
                                                                                                ),
                                                                                                'street' => array(
                                                                                                  'default' => '',
                                                                                                  'collect' => '1',
                                                                                                  'weight' => '-99',
                                                                                                ),
                                                                                                'additional' => array(
                                                                                                  'default' => '',
                                                                                                  'collect' => '1',
                                                                                                  'weight' => '-98',
                                                                                                ),
                                                                                                'city' => array(
                                                                                                  'default' => '',
                                                                                                  'collect' => '1',
                                                                                                  'weight' => '-97',
                                                                                                ),
                                                                                                'province' => array(
                                                                                                  'default' => '',
                                                                                                  'collect' => '1',
                                                                                                  'weight' => '-96',
                                                                                                ),
                                                                                                'country' => array(
                                                                                                  'default' => 'us',
                                                                                                  'collect' => '1',
                                                                                                  'weight' => '-95',
                                                                                                ),
                                                                                                'postal_code' => array(
                                                                                                  'default' => '',
                                                                                                  'collect' => 1,
                                                                                                  'weight' => '-94',
                                                                                                ),
                                                                                                'locpick' => array(
                                                                                                  'default' => array(
                                                                                                    'user_latitude' => '',
                                                                                                    'user_longitude' => '',
                                                                                                  ),
                                                                                                  'collect' => '0',
                                                                                                  'weight' => '-93',
                                                                                                  'nodiff' => TRUE,
                                                                                                ),
                                                                                                'cck_preview_in_progress' => array(
                                                                                                  'default' => TRUE,
                                                                                                ),
                                                                                                'location_settings' => array(
                                                                                                  'default' => array(
                                                                                                    'form' => array(
                                                                                                      'fields' => array(
                                                                                                        'lid' => array(
                                                                                                          'default' => FALSE,
                                                                                                        ),
                                                                                                        'name' => array(
                                                                                                          'default' => '',
                                                                                                          'collect' => 1,
                                                                                                          'weight' => 2,
                                                                                                        ),
                                                                                                        'street' => array(
                                                                                                          'default' => '',
                                                                                                          'collect' => 1,
                                                                                                          'weight' => 4,
                                                                                                        ),
                                                                                                        'additional' => array(
                                                                                                          'default' => '',
                                                                                                          'collect' => 1,
                                                                                                          'weight' => 6,
                                                                                                        ),
                                                                                                        'city' => array(
                                                                                                          'default' => '',
                                                                                                          'collect' => 0,
                                                                                                          'weight' => 8,
                                                                                                        ),
                                                                                                        'province' => array(
                                                                                                          'default' => '',
                                                                                                          'collect' => 0,
                                                                                                          'weight' => 10,
                                                                                                        ),
                                                                                                        'postal_code' => array(
                                                                                                          'default' => '',
                                                                                                          'collect' => 0,
                                                                                                          'weight' => 12,
                                                                                                        ),
                                                                                                        'country' => array(
                                                                                                          'default' => 'us',
                                                                                                          'collect' => 1,
                                                                                                          'weight' => 14,
                                                                                                        ),
                                                                                                        'locpick' => array(
                                                                                                          'default' => FALSE,
                                                                                                          'collect' => 1,
                                                                                                          'weight' => 20,
                                                                                                          'nodiff' => TRUE,
                                                                                                        ),
                                                                                                        'latitude' => array(
                                                                                                          'default' => 0,
                                                                                                        ),
                                                                                                        'longitude' => array(
                                                                                                          'default' => 0,
                                                                                                        ),
                                                                                                        'source' => array(
                                                                                                          'default' => 0,
                                                                                                        ),
                                                                                                        'is_primary' => array(
                                                                                                          'default' => 0,
                                                                                                        ),
                                                                                                        'delete_location' => array(
                                                                                                          'default' => FALSE,
                                                                                                          'nodiff' => TRUE,
                                                                                                        ),
                                                                                                      ),
                                                                                                    ),
                                                                                                  ),
                                                                                                ),
                                                                                                'lid' => array(
                                                                                                  'default' => FALSE,
                                                                                                ),
                                                                                                'latitude' => array(
                                                                                                  'default' => 0,
                                                                                                ),
                                                                                                'longitude' => array(
                                                                                                  'default' => 0,
                                                                                                ),
                                                                                                'source' => array(
                                                                                                  'default' => 0,
                                                                                                ),
                                                                                                'is_primary' => array(
                                                                                                  'default' => 0,
                                                                                                ),
                                                                                                'delete_location' => array(
                                                                                                  'default' => FALSE,
                                                                                                  'nodiff' => TRUE,
                                                                                                ),
                                                                                              ),
                                                                                            ),
                                                                                            'display' => array(
                                                                                              'hide' => array(
                                                                                                'name' => 'name',
                                                                                                'locpick' => 'locpick',
                                                                                                'province_name' => 'province_name',
                                                                                                'country_name' => 'country_name',
                                                                                                'map_link' => 'map_link',
                                                                                                'coords' => 'coords',
                                                                                                'street' => 0,
                                                                                                'additional' => 0,
                                                                                                'city' => 0,
                                                                                                'province' => 0,
                                                                                                'postal_code' => 0,
                                                                                                'country' => 0,
                                                                                              ),
                                                                                            ),
                                                                                          ),
                                                                                        ),
                                                                                        'lid' => array(
                                                                                          'default' => FALSE,
                                                                                        ),
                                                                                        'latitude' => array(
                                                                                          'default' => 0,
                                                                                        ),
                                                                                        'longitude' => array(
                                                                                          'default' => 0,
                                                                                        ),
                                                                                        'source' => array(
                                                                                          'default' => 0,
                                                                                        ),
                                                                                        'is_primary' => array(
                                                                                          'default' => 0,
                                                                                        ),
                                                                                        'delete_location' => array(
                                                                                          'default' => FALSE,
                                                                                          'nodiff' => TRUE,
                                                                                        ),
                                                                                      ),
                                                                                    ),
                                                                                    'display' => array(
                                                                                      'hide' => array(
                                                                                        'name' => 'name',
                                                                                        'locpick' => 'locpick',
                                                                                        'province_name' => 'province_name',
                                                                                        'country_name' => 'country_name',
                                                                                        'map_link' => 'map_link',
                                                                                        'coords' => 'coords',
                                                                                        'street' => 0,
                                                                                        'additional' => 0,
                                                                                        'city' => 0,
                                                                                        'province' => 0,
                                                                                        'postal_code' => 0,
                                                                                        'country' => 0,
                                                                                      ),
                                                                                    ),
                                                                                  ),
                                                                                ),
                                                                                'lid' => array(
                                                                                  'default' => FALSE,
                                                                                ),
                                                                                'latitude' => array(
                                                                                  'default' => 0,
                                                                                ),
                                                                                'longitude' => array(
                                                                                  'default' => 0,
                                                                                ),
                                                                                'source' => array(
                                                                                  'default' => 0,
                                                                                ),
                                                                                'is_primary' => array(
                                                                                  'default' => 0,
                                                                                ),
                                                                                'delete_location' => array(
                                                                                  'default' => FALSE,
                                                                                  'nodiff' => TRUE,
                                                                                ),
                                                                              ),
                                                                            ),
                                                                            'display' => array(
                                                                              'hide' => array(
                                                                                'name' => 'name',
                                                                                'locpick' => 'locpick',
                                                                                'province_name' => 'province_name',
                                                                                'country_name' => 'country_name',
                                                                                'map_link' => 'map_link',
                                                                                'coords' => 'coords',
                                                                                'street' => 0,
                                                                                'additional' => 0,
                                                                                'city' => 0,
                                                                                'province' => 0,
                                                                                'postal_code' => 0,
                                                                                'country' => 0,
                                                                              ),
                                                                            ),
                                                                          ),
                                                                        ),
                                                                        'lid' => array(
                                                                          'default' => FALSE,
                                                                        ),
                                                                        'latitude' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'longitude' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'source' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'is_primary' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'delete_location' => array(
                                                                          'default' => FALSE,
                                                                          'nodiff' => TRUE,
                                                                        ),
                                                                      ),
                                                                    ),
                                                                    'display' => array(
                                                                      'hide' => array(
                                                                        'name' => 'name',
                                                                        'locpick' => 'locpick',
                                                                        'province_name' => 'province_name',
                                                                        'country_name' => 'country_name',
                                                                        'map_link' => 'map_link',
                                                                        'coords' => 'coords',
                                                                        'street' => 0,
                                                                        'additional' => 0,
                                                                        'city' => 0,
                                                                        'province' => 0,
                                                                        'postal_code' => 0,
                                                                        'country' => 0,
                                                                      ),
                                                                    ),
                                                                  ),
                                                                ),
                                                                'lid' => array(
                                                                  'default' => FALSE,
                                                                ),
                                                                'latitude' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'longitude' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'source' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'is_primary' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'delete_location' => array(
                                                                  'default' => FALSE,
                                                                  'nodiff' => TRUE,
                                                                ),
                                                              ),
                                                            ),
                                                            'display' => array(
                                                              'hide' => array(
                                                                'name' => 'name',
                                                                'locpick' => 'locpick',
                                                                'province_name' => 'province_name',
                                                                'country_name' => 'country_name',
                                                                'map_link' => 'map_link',
                                                                'coords' => 'coords',
                                                                'street' => 0,
                                                                'additional' => 0,
                                                                'city' => 0,
                                                                'province' => 0,
                                                                'postal_code' => 0,
                                                                'country' => 0,
                                                              ),
                                                            ),
                                                          ),
                                                        ),
                                                        'lid' => array(
                                                          'default' => FALSE,
                                                        ),
                                                        'latitude' => array(
                                                          'default' => 0,
                                                        ),
                                                        'longitude' => array(
                                                          'default' => 0,
                                                        ),
                                                        'source' => array(
                                                          'default' => 0,
                                                        ),
                                                        'is_primary' => array(
                                                          'default' => 0,
                                                        ),
                                                        'delete_location' => array(
                                                          'default' => FALSE,
                                                          'nodiff' => TRUE,
                                                        ),
                                                      ),
                                                    ),
                                                    'display' => array(
                                                      'hide' => array(
                                                        'name' => 'name',
                                                        'locpick' => 'locpick',
                                                        'province_name' => 'province_name',
                                                        'country_name' => 'country_name',
                                                        'map_link' => 'map_link',
                                                        'coords' => 'coords',
                                                        'street' => 0,
                                                        'additional' => 0,
                                                        'city' => 0,
                                                        'province' => 0,
                                                        'postal_code' => 0,
                                                        'country' => 0,
                                                      ),
                                                    ),
                                                  ),
                                                ),
                                                'lid' => array(
                                                  'default' => FALSE,
                                                ),
                                                'latitude' => array(
                                                  'default' => 0,
                                                ),
                                                'longitude' => array(
                                                  'default' => 0,
                                                ),
                                                'source' => array(
                                                  'default' => 0,
                                                ),
                                                'is_primary' => array(
                                                  'default' => 0,
                                                ),
                                                'delete_location' => array(
                                                  'default' => FALSE,
                                                  'nodiff' => TRUE,
                                                ),
                                              ),
                                            ),
                                            'display' => array(
                                              'hide' => array(
                                                'name' => 'name',
                                                'locpick' => 'locpick',
                                                'province_name' => 'province_name',
                                                'country_name' => 'country_name',
                                                'map_link' => 'map_link',
                                                'coords' => 'coords',
                                                'street' => 0,
                                                'additional' => 0,
                                                'city' => 0,
                                                'province' => 0,
                                                'postal_code' => 0,
                                                'country' => 0,
                                              ),
                                            ),
                                          ),
                                        ),
                                        'lid' => array(
                                          'default' => FALSE,
                                        ),
                                        'latitude' => array(
                                          'default' => 0,
                                        ),
                                        'longitude' => array(
                                          'default' => 0,
                                        ),
                                        'source' => array(
                                          'default' => 0,
                                        ),
                                        'is_primary' => array(
                                          'default' => 0,
                                        ),
                                        'delete_location' => array(
                                          'default' => FALSE,
                                          'nodiff' => TRUE,
                                        ),
                                      ),
                                    ),
                                    'display' => array(
                                      'hide' => array(
                                        'name' => 'name',
                                        'street' => 'street',
                                        'additional' => 'additional',
                                        'city' => 'city',
                                        'province' => 'province',
                                        'postal_code' => 'postal_code',
                                        'country' => 'country',
                                        'locpick' => 'locpick',
                                        'province_name' => 'province_name',
                                        'country_name' => 'country_name',
                                        'map_link' => 'map_link',
                                        'coords' => 'coords',
                                      ),
                                    ),
                                  ),
                                ),
                                'lid' => array(
                                  'default' => FALSE,
                                ),
                                'latitude' => array(
                                  'default' => 0,
                                ),
                                'longitude' => array(
                                  'default' => 0,
                                ),
                                'source' => array(
                                  'default' => 0,
                                ),
                                'is_primary' => array(
                                  'default' => 0,
                                ),
                                'delete_location' => array(
                                  'default' => FALSE,
                                  'nodiff' => TRUE,
                                ),
                              ),
                            ),
                            'display' => array(
                              'hide' => array(
                                'name' => 'name',
                                'street' => 'street',
                                'additional' => 'additional',
                                'city' => 'city',
                                'province' => 'province',
                                'postal_code' => 'postal_code',
                                'country' => 'country',
                                'province_name' => 'province_name',
                                'country_name' => 'country_name',
                                'map_link' => 'map_link',
                                'coords' => 'coords',
                                'locpick' => 0,
                              ),
                            ),
                          ),
                        ),
                        'lid' => array(
                          'default' => FALSE,
                        ),
                        'latitude' => array(
                          'default' => 0,
                        ),
                        'longitude' => array(
                          'default' => 0,
                        ),
                        'source' => array(
                          'default' => 0,
                        ),
                        'is_primary' => array(
                          'default' => 0,
                        ),
                        'delete_location' => array(
                          'default' => FALSE,
                          'nodiff' => TRUE,
                        ),
                      ),
                    ),
                    'display' => array(
                      'hide' => array(
                        'name' => 'name',
                        'street' => 'street',
                        'additional' => 'additional',
                        'city' => 'city',
                        'province' => 'province',
                        'postal_code' => 'postal_code',
                        'country' => 'country',
                        'province_name' => 'province_name',
                        'country_name' => 'country_name',
                        'locpick' => 0,
                        'map_link' => 0,
                        'coords' => 0,
                      ),
                    ),
                  ),
                ),
                'lid' => array(
                  'default' => FALSE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
              ),
            ),
            'display' => array(
              'hide' => array(
                'street' => 'street',
                'additional' => 'additional',
                'city' => 'city',
                'province' => 'province',
                'postal_code' => 'postal_code',
                'country' => 'country',
                'name' => 0,
                'locpick' => 0,
                'province_name' => 0,
                'country_name' => 0,
                'map_link' => 0,
                'coords' => 0,
              ),
            ),
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Address',
      'weight' => '31',
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_prof_dob
  $fields['personal-field_prof_dob'] = array(
    'field_name' => 'field_prof_dob',
    'type_name' => 'personal',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d H:i:s',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-80:-5',
      'label_position' => 'within',
      'label' => 'Birthday',
      'weight' => '28',
      'description' => '',
      'type' => 'date_select',
      'module' => 'date',
    ),
  );

  // Exported field: field_prof_first
  $fields['personal-field_prof_first'] = array(
    'field_name' => 'field_prof_first',
    'type_name' => 'personal',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_prof_first][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First Name',
      'weight' => '26',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_prof_gender
  $fields['personal-field_prof_gender'] = array(
    'field_name' => 'field_prof_gender',
    'type_name' => 'personal',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Female
Male
Other',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'I Am',
      'weight' => '29',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_prof_last
  $fields['personal-field_prof_last'] = array(
    'field_name' => 'field_prof_last',
    'type_name' => 'personal',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_prof_last][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Last Name',
      'weight' => '27',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_prof_phone
  $fields['personal-field_prof_phone'] = array(
    'field_name' => 'field_prof_phone',
    'type_name' => 'personal',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_prof_phone][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Phone',
      'weight' => '30',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_prof_haii
  $fields['profile-field_prof_haii'] = array(
    'field_name' => 'field_prof_haii',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '280',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_prof_haii][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'How Am I Involved',
      'weight' => '-2',
      'description' => 'Tell us how you are involved in 280 characters or less.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_prof_microbio
  $fields['profile-field_prof_microbio'] = array(
    'field_name' => 'field_prof_microbio',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '2',
          '_error_element' => 'default_value_widget][field_prof_microbio][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Micro Bio',
      'weight' => '-3',
      'description' => 'Input a microbio about yourself, 140 characters or less.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_prof_pic
  $fields['profpic-field_prof_pic'] = array(
    'field_name' => 'field_prof_pic',
    'type_name' => 'profpic',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'resolution' => '225x250',
      'enforce_ratio' => 1,
      'croparea' => '500x500',
      'enforce_minimum' => 1,
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'userprofile_pics/[user-id]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '500K',
      'max_filesize_per_node' => '',
      'max_resolution' => '500x500',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'default_avatar1234375017.jpg',
        'filepath' => 'sites/default/files/imagefield_default_images/default_avatar1234375017_1.jpg',
        'filemime' => 'image/jpeg',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/default_avatar1234375017_1.jpg',
        'filesize' => 13492,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1269292303,
        'fid' => '842',
      ),
      'use_default_image' => 1,
      'collapsible' => '2',
      'label' => 'Profile Picture',
      'weight' => '-4',
      'description' => '',
      'type' => 'imagefield_crop_widget',
      'module' => 'imagefield_crop',
    ),
  );

  // Exported field: field_prof_boot
  $fields['settings-field_prof_boot'] = array(
    'field_name' => 'field_prof_boot',
    'type_name' => 'settings',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_prof_boot][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Bootcamp Progress',
      'weight' => '2',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_prof_country
  $fields['settings-field_prof_country'] = array(
    'field_name' => 'field_prof_country',
    'type_name' => 'settings',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'country' => 'country',
      'blog' => 0,
      'civicrmactivity' => 0,
      'county' => 0,
      'faq' => 0,
      'farticle' => 0,
      'fauthor' => 0,
      'forum' => 0,
      'image' => 0,
      'lawmaker' => 0,
      'natblog' => 0,
      'page' => 0,
      'personal' => 0,
      'mediagall' => 0,
      'pr' => 0,
      'profile' => 0,
      'profpic' => 0,
      'region' => 0,
      'settings' => 0,
      'staff' => 0,
      'state' => 0,
      'story' => 0,
      'video' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_prof_country][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Country Group',
      'weight' => '-1',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_prof_county
  $fields['settings-field_prof_county'] = array(
    'field_name' => 'field_prof_county',
    'type_name' => 'settings',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'county' => 'county',
      'blog' => 0,
      'civicrmactivity' => 0,
      'country' => 0,
      'faq' => 0,
      'farticle' => 0,
      'fauthor' => 0,
      'forum' => 0,
      'image' => 0,
      'lawmaker' => 0,
      'natblog' => 0,
      'page' => 0,
      'personal' => 0,
      'mediagall' => 0,
      'pr' => 0,
      'profile' => 0,
      'profpic' => 0,
      'region' => 0,
      'settings' => 0,
      'staff' => 0,
      'state' => 0,
      'story' => 0,
      'video' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_prof_county][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'County Group',
      'weight' => '-4',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_prof_profdis
  $fields['settings-field_prof_profdis'] = array(
    'field_name' => 'field_prof_profdis',
    'type_name' => 'settings',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'ON|Enabled
OFF|Disabled',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'DIS',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Profile is Disabled',
      'weight' => '1',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_prof_promby
  $fields['settings-field_prof_promby'] = array(
    'field_name' => 'field_prof_promby',
    'type_name' => 'settings',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '16' => 16,
      '17' => 17,
      '13' => 13,
      '12' => 12,
      '11' => 11,
      '2' => 0,
      '3' => 0,
      '4' => 0,
      '8' => 0,
      '14' => 0,
      '6' => 0,
      '7' => 0,
      '9' => 0,
      '5' => 0,
      '15' => 0,
      '10' => 0,
    ),
    'referenceable_status' => '1',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_prof_promby][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Made Coordinatior By',
      'weight' => 0,
      'description' => '',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_prof_region
  $fields['settings-field_prof_region'] = array(
    'field_name' => 'field_prof_region',
    'type_name' => 'settings',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'region' => 'region',
      'blog' => 0,
      'civicrmactivity' => 0,
      'country' => 0,
      'county' => 0,
      'faq' => 0,
      'farticle' => 0,
      'fauthor' => 0,
      'forum' => 0,
      'image' => 0,
      'lawmaker' => 0,
      'natblog' => 0,
      'page' => 0,
      'personal' => 0,
      'mediagall' => 0,
      'pr' => 0,
      'profile' => 0,
      'profpic' => 0,
      'settings' => 0,
      'staff' => 0,
      'state' => 0,
      'story' => 0,
      'video' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_prof_region][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Region Group',
      'weight' => '-3',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_prof_state
  $fields['settings-field_prof_state'] = array(
    'field_name' => 'field_prof_state',
    'type_name' => 'settings',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'state' => 'state',
      'blank' => 0,
      'candidate_survey_2010' => 0,
      'coordinatortools' => 0,
      'country' => 0,
      'county' => 0,
      'event' => 0,
      'faq' => 0,
      'farticle' => 0,
      'fauthor' => 0,
      'featured_blocks' => 0,
      'forum' => 0,
      'fp' => 0,
      'fullnatblog' => 0,
      'group_announcement' => 0,
      'image' => 0,
      'lawmaker' => 0,
      'memblog' => 0,
      'natblog' => 0,
      'newswire' => 0,
      'page' => 0,
      'personal' => 0,
      'mediagall' => 0,
      'pr' => 0,
      'product' => 0,
      'profile' => 0,
      'profpic' => 0,
      'project' => 0,
      'region' => 0,
      'res' => 0,
      'settings' => 0,
      'staff' => 0,
      'story' => 0,
      'demopost' => 0,
      'trainingvideo' => 0,
      'video' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_prof_state][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'State Group',
      'weight' => '-2',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Birthday');
  t('Bootcamp Progress');
  t('Country Group');
  t('County Group');
  t('First Name');
  t('How Am I Involved');
  t('I Am');
  t('Last Name');
  t('Made Coordinatior By');
  t('Micro Bio');
  t('Phone');
  t('Profile Picture');
  t('Profile is Disabled');
  t('Region Group');
  t('State Group');

  return $fields;
}
