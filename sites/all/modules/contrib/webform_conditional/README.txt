
Webform Conditional

***Important update****
Options for this module are now under the "Conditional Rules" fieldset.
************************

This module adds the ability to hide/show components in the webform based on another fields value
This modules allows showing and hiding of Webform components based on another components current value. It requires Webform 6.x-3.x.
If differs from the conditional fields currently in Webforms because it allows dynamically showing and hiding components on the same page. In core Webforms a field can only be conditional on field on a previous page.
The current functions are
Showing and hiding components based on a select field. Multiple selects are not supported.
When components are hidden their values are cleared.
Fieldset can be hidden. 
Multiple values can be used to show component. For instance if a select has the values 1 to 10 then certain components could be shown when 1 to 5 are selected and other components could be shown if 6 to 10 are selected.
**************************************************
In order for Conditionally Mandatory to fields to have the same formating as other required fields your theme must override theme_form_element.
The example below will work.
function theme_form_element($element, $value) {
  // This is also used in the installer, pre-database setup.
  $t = get_t();
  $output = '<div class="form-item"';
  if (!empty($element['#id'])) {
    $output .= ' id="'. $element['#id'] .'-wrapper"';
  }
  $output .= ">\n";
  $webform_conditional_required = !empty($element['#webform_component']['extra']['webform_conditional_mandatory']);
  $required = !empty($element['#required']) || $webform_conditional_required ? '<span class="form-required" title="'. $t('This field is required.') .'">*</span>' : '';
  if (!empty($element['#title'])) {
    $title = $element['#title'];
    if (!empty($element['#id'])) {
      $output .= ' <label for="'. $element['#id'] .'">'. $t('!title: !required', array('!title' => filter_xss_admin($title), '!required' => $required)) ."</label>\n";
    }
    else {
      $output .= ' <label>'. $t('!title: !required', array('!title' => filter_xss_admin($title), '!required' => $required)) ."</label>\n";
    }
  }
  $output .= " $value\n";
  if (!empty($element['#description'])) {
    $output .= ' <div class="description">'. $element['#description'] ."</div>\n";
  }
  $output .= "</div>\n";
  return $output;
}