if (Drupal.jsEnabled) {
	$(document).ready(function () {

 
		// FAQ Page
		$('.view-faq .views-field-body').hide();
		$('.view-faq .views-field-title').toggle(
			function(){
				$(this).next().slideDown();
			},
			function(){
				$(this).next().slideUp();			
		});
		
		$('#views-exposed-form-faq-page-1 select').change(function(){
			$('#views-exposed-form-faq-page-1').submit();
		});

		// Featured Articles
		$('#views-exposed-form-featured-articles-page-4 select').change(function(){
			$('#views-exposed-form-featured-articles-page-4').submit();
		});

		// Galleries
		$('#views-exposed-form-photo-gallery-page-2 select').change(function(){
			$('#views-exposed-form-photo-gallery-page-2').submit();
		});
	
		$('ul').each(function(){
			$('li:first', this).addClass('first');
			$('li:last', this).addClass('last');
		});
	
		$('#right-bottom').each(function(){
			$('.block:first', this).addClass('first');
			$('.block:last', this).addClass('last');
		});

	});
}