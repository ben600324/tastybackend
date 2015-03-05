(function($) {
  Drupal.behaviors.TastyBackendFooter = {
    attach: function() {
      $('.navbar-tray-shortcuts ul li a').each(function(){
          var menu_class = $(this).html();
          $(this).addClass(menu_class);
      }); 
    }
  };
})(jQuery);