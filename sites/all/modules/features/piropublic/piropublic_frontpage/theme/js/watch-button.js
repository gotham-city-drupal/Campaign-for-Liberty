
/**
 *  @file
 *  This will use jQuery AJAX to replace a thumbnail with its video version.
 */
Drupal.behaviors.piropublicWatchButton = function(context) {
// Inline videos will click through to the video.
  $('a.emvideo-watch-button:not(.emfield-watch-button-processed)', context).addClass('emfield-watch-button-processed').each(function() {
    // When clicking the image, load the video with AJAX.
    // Note that this only happens if this is not a lightbox.
   
	$(this).click(function() {
      // 'this' won't point to the element when it's inside the ajax closures,
      // so we reference it using a variable.
      var element = this;
      $.ajax({
        url: element.href,  
        dataType: 'html',
        success: function (data) {
          if (data) {
            // Success.
            $('.emvideo-modal').html(data); 
          }
          else {
            // Failure.
            alert('An unknown error occurred.\n'+ element.href);
          }
        },
        error: function (xmlhttp) {
          alert('An HTTP error '+ xmlhttp.status +' occurred.\n'+ element.href);
        }
      });
      return false;
    });
  });
};