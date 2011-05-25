// $Id: clean.js,v 1.0 2011/4/28 00:32:00 pirog Exp $

Drupal.behaviors.clean = function (context) {
  $('div.fieldset:not(.clean-processed)').each(function() {
    $(this).addClass('clean-processed');
    if ($(this).is('.collapsible')) {
      if ($('input.error, textarea.error, select.error', this).size() > 0) {
        $(this).removeClass('collapsed');
      }
      // Pre click states.
      if ($(this).is('.collapsed')) {
        $(this).removeClass('expanded');
      }
      else {
        $(this).addClass('expanded');
      };
      // Note that .children() only returns the immediate ancestors rather than
      // recursing down all children.
      $(this).children('.fieldset-title').click(function() {
        if ($(this).parent().is('.collapsed')) {
          $(this).siblings('.fieldset-content').show();
          $(this).parent().removeClass('collapsed').addClass('expanded');
        }
        else {
          $(this).siblings('.fieldset-content').hide();
          $(this).parent().removeClass('expanded').addClass('collapsed');
        }
        return false;
      });
    }
  });
}
