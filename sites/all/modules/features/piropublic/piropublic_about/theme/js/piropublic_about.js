if (Drupal.jsEnabled) {
	$(document).ready(function () {
		// FAQ Page
		$('.view-faq .views-field-body').hide();
		$('.view-faq .views-field-title').toggle(
			function(){
				$(this).next().next().slideDown();
			},
			function(){
				$(this).next().next().slideUp();			
		});
		
		$('#views-exposed-form-faq-page-1 select').change(function(){
			$('#views-exposed-form-faq-page-1').submit();
		});

	});
}