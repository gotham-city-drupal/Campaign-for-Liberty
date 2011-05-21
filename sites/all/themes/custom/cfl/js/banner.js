function videoCarouselInitCallback(carousel) {

  $('.front-video-carousel-controls .sect1').addClass('active-control');

  jQuery('.front-video-carousel-controls .prev').bind('click', function() {
      carousel.prev();
      var first = carousel.first;
      $('.front-video-carousel-controls a').removeClass('active-control');
      if(first <= 1) $('.front-video-carousel-controls .sect1').addClass('active-control');
      else if(first <= 2) $('.front-video-carousel-controls .sect2').addClass('active-control');
      else if(first <= 3) $('.front-video-carousel-controls .sect3').addClass('active-control');
      else $('.front-video-carousel-controls .sect4').addClass('active-control');
      return false;
  });

  jQuery('.front-video-carousel-controls .next').bind('click', function() {
      carousel.next();
      //$('.front-article-carousel .text').text(carousel.first);
      var first = carousel.first;
      $('.front-video-carousel-controls a').removeClass('active-control');
      if(first <= 1) $('.front-video-carousel-controls .sect1').addClass('active-control');
      else if(first <= 2) $('.front-video-carousel-controls .sect2').addClass('active-control');
      else if(first <= 3) $('.front-video-carousel-controls .sect3').addClass('active-control');
      else $('.front-video-carousel-controls .sect4').addClass('active-control');
      return false;
  });

  jQuery('.front-video-carousel-controls .sect1').click(function() {
      carousel.scroll(jQuery.jcarousel.intval(1));
      $('.front-video-carousel-controls a').removeClass('active-control');
      $('.front-video-carousel-controls .sect1').addClass('active-control');
      return false;
  });

  jQuery('.front-video-carousel-controls .sect2').click(function() {
      carousel.scroll(jQuery.jcarousel.intval(2));
      $('.front-video-carousel-controls a').removeClass('active-control');
      $('.front-video-carousel-controls .sect2').addClass('active-control');
      return false;
  });
  
    jQuery('.front-video-carousel-controls .sect3').click(function() {
      carousel.scroll(jQuery.jcarousel.intval(3));
      $('.front-video-carousel-controls a').removeClass('active-control');
      $('.front-video-carousel-controls .sect3').addClass('active-control');
      return false;
  });


  jQuery('.front-video-carousel-controls .sect4').click(function() {
      carousel.scroll(jQuery.jcarousel.intval(4));
      $('.front-video-carousel-controls a').removeClass('active-control');
      $('.front-video-carousel-controls .sect4').addClass('active-control');
      return false;
  });


}
