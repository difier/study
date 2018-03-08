(function($) {

  Drupal.behaviors.button = {
    attach: function (context, settings) {
      $('#webform-client-form-28 .form-actions').insertAfter('#webform-client-form-28 .webform-component--second-col .webform-component--second-col--time');
    }
  };

  // Drupal.behaviors.svg = {
  //   attach: function (context, settings) {
  //     this.svgParse('svg-name', '.selector' , 'dvc_theme', context);
  //   },
  //   svgParse: function (el, path, theme, context) {
  //     $.get('sites/all/themes/' + theme + '/images/svg/' + el + '.svg', function(data) {
  //       var myvar = data.getElementsByTagName('svg')[0].outerHTML;
  //       $(path).append('<div>' + myvar + '</div>');
  //     });
  //   }
  // }

})(jQuery);
