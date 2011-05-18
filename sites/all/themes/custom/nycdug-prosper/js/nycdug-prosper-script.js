// $Id: nycdug-prosper-script.js,v 1.3 2011/04/12 21:36:06 kbell Exp $

Drupal.behaviors.m3_prosperRoundedCorner = function (context) {
  $(".prosper-rounded-title h2.block-title").corner("top 5px"); 
  $(".prosper-shoppingcart h2.block-title").corner("top 5px"); 
  $(".prosper-menu-list h2.block-title").corner("top 5px"); 
  $(".prosper-grayborder-darkbackground .inner").corner("7px"); 
};