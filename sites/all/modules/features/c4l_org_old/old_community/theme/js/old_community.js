if (Drupal.jsEnabled) {
	$(document).ready(function () {
		$('.content .field-field-og-prof .field-items .field-item p').next().next().addClass("more");
		$('.content #mission p').next().next().addClass("more");
	});
}

jQuery(function($){
		//hides all the paragraphs tagged with the class more within the div#content, also uses "Read more..." as text for the button
		$('.content .field-field-og-prof .field-items .field-item').eTruncate({"showText" : "Click to read more...", "hideText" : "Click for less..."});
		$('.content #mission').eTruncate({"showText" : "Click to read more...", "hideText" : "Click for less..."});
		
	});