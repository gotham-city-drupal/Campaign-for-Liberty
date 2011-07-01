if (Drupal.jsEnabled) {
	$(document).ready(function () {
		$('.view-profile .views-field-body .field-content p').next().next().next().addClass("more");
	});
}

jQuery(function($){
		//hides all the paragraphs tagged with the class more within the div#content, also uses "Read more..." as text for the button
		$("#hide-extra").eTruncate({"showText" : "Click to read more about me...", "hideText" : "Click for less..."});
	});