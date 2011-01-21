/**
 * JavaScript functions for front-end display of webform conditional components
 */
Drupal.behaviors.webform_conditional = function() {
        
	$.each(Drupal.settings.webform_conditional.fields, function(dependentField, dependentInfo) {
		
		var formItemWrapper = Drupal.behaviors.webform_conditional.getWrapper(dependentInfo);
		if(formItemWrapper.length > 0){
			formItemWrapper.css("display", "none");
			// Add onclick handler to Parent field
			Drupal.behaviors.webform_conditional.addOnChange (dependentField, dependentInfo);
		}
		});
	//after all added - trigger initial 
	$.each(Drupal.settings.webform_conditional.fields, function(dependentField, dependentInfo) {
		var formItemWrapper = Drupal.behaviors.webform_conditional.getWrapper(dependentInfo);
			if(formItemWrapper.length > 0){
				var field_name = Drupal.behaviors.webform_conditional.escapeId(dependentInfo['monitor_field_key']);
				var components = Drupal.behaviors.webform_conditional.getComponentsByName(field_name);
				if(components.attr('type')=='radio' || components.attr('type')=='checkbox'){
					$(components[0]).triggerHandler('click');
				}else{
					components.triggerHandler('change');
				}
			}
		});
	return;
};
//create quasi static var to save perfomance
Drupal.behaviors.webform_conditional.wrappers = new Object();
Drupal.behaviors.webform_conditional.getWrapper = function(dependentInfo){
	if(Drupal.behaviors.webform_conditional.wrappers[dependentInfo['css_id']]){
		return Drupal.behaviors.webform_conditional.wrappers[dependentInfo['css_id']];
	}
	return Drupal.behaviors.webform_conditional.wrappers[dependentInfo['css_id']] = $("#" + dependentInfo['css_id']);
};
Drupal.behaviors.webform_conditional.addOnChange = function(dependentField, dependentInfo) {
	var monitor_field_name = Drupal.behaviors.webform_conditional.escapeId(dependentInfo['monitor_field_key']);
	var changeFunction = function() {
		Drupal.behaviors.webform_conditional.setVisibility(dependentField,dependentInfo);
	};
	var components = Drupal.behaviors.webform_conditional.getComponentsByName(monitor_field_name);
	if(components.attr('type')=='radio' || components.attr('type')=='checkbox'){
		components.click(changeFunction);
	}else{
		components.change(changeFunction);
	}
	
};
Drupal.behaviors.webform_conditional.setVisibility = function(dependentField,dependentInfo,monitorField,monitorInfo){
	monitor_field_name = Drupal.behaviors.webform_conditional.escapeId(dependentInfo['monitor_field_key']);
	var currentValues = Drupal.behaviors.webform_conditional.getFieldValue(monitor_field_name); 
	var monitor_visible = true;
	if(monitorField !== undefined){
		monitor_visible = Drupal.behaviors.webform_conditional.getWrapper(monitorInfo).data('wfc_visible');
	}
	if(((dependentInfo['operator'] == "=" && !Drupal.behaviors.webform_conditional.Matches(currentValues,dependentInfo['monitor_field_value']))
		|| (dependentInfo['operator'] == "!=" && Drupal.behaviors.webform_conditional.Matches(currentValues,dependentInfo['monitor_field_value']))) 
		|| !monitor_visible){
			// show the hidden div
			// have to set wfc_visible so that you check the visibility of this immediately  
		 Drupal.behaviors.webform_conditional.getWrapper(dependentInfo).hide().data('wfc_visible',false);
	}else {
			// otherwise, hide it
		Drupal.behaviors.webform_conditional.getWrapper(dependentInfo).show().data('wfc_visible',true);
			// and clear data (using different selector: want the
			// textarea to be selected, not the parent div)
	}
	Drupal.behaviors.webform_conditional.TriggerDependents(dependentField,dependentInfo);
};
Drupal.behaviors.webform_conditional.components = new Object();
Drupal.behaviors.webform_conditional.getComponentsByName = function (field_name){
	//check to save jquery calls
	if(Drupal.behaviors.webform_conditional.components[field_name]){
		return Drupal.behaviors.webform_conditional.components[field_name];
	}
	field_name = "[" + field_name + "]";
	var nid = Drupal.settings.webform_conditional.nid;
	if(nid instanceof Array){
		nid = Drupal.settings.webform_conditional.nid[0];
	}
	return Drupal.behaviors.webform_conditional.components[field_name] = $("#webform-client-form-" + nid + " *[name*='"+field_name+"']");
};
Drupal.behaviors.webform_conditional.TriggerDependents = function(monitorField,monitorInfo){
	$.each(Drupal.settings.webform_conditional.fields, function(dependentField, dependentInfo) {
		if(dependentInfo['monitor_field_key'] == monitorField){
			Drupal.behaviors.webform_conditional.setVisibility(dependentField, dependentInfo,monitorField,monitorInfo);
		};
	});
};
Drupal.behaviors.webform_conditional.getFieldValue = function(field_name){
	field_name = "[" + field_name + "]";
	var selected = [];
	var vals = [];
	if($('form input[name*="'+field_name+'"]:checked').length >= 1){
		selected =  $('form input[name*="'+field_name+'"]:checked');
	}else if($('form select[name*="'+field_name+'"] option:selected').length >= 1){
		selected = $('form select[name*="'+field_name+'"] option:selected');
	}
	if(selected.length == 0){
		return vals;
	}
	selected.each(function(i){
	     vals[i] = $(this).val();
	    });
	return vals;
};
Drupal.behaviors.webform_conditional.Matches = function(currentValues,triggerValues){
	var found = false;
	$.each(triggerValues, function(index, value) { 
		  if(jQuery.inArray(value,currentValues)> -1){
			  found = true;
			  return false;
		  }
		});
	return found;
};
//Drupal.behaviors.webform_conditional.escapeId
Drupal.behaviors.webform_conditional.escapeId = function(myid) { 
	   return  myid.replace(/(:|\.)/g,'\\$1');
};
