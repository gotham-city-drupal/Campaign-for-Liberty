$(document).ready(function() {
	
	 $().append('<div id="banner-pager">');

	$('#homepage_banner').cycle({ 
		 prev:  '.prev',
		 next:  '.next',
		fx:     'fade', 
		pauseOnPagerHover: 1,
		pause: 1,
		timeout: 5000, 
		pager:  '#banner-pager', 
		pagerAnchorBuilder: function(idx, slide) { 
			// return selector string for existing anchor 
			label= idx+1;
			return '<a href="#" class="sect' + idx + '">' + label + '</a>'; 
		} 
	});
	
	$('#homepage_banner, #homepage_banner div').css({background:'transparent'});

});
