(function($) {

	var services = [
		"service-orange",
		"service-blue",
		"service-green",
		"service-red"
	];
	
	$(function(){
		var $select = $(".block--request-quote #webform-component-services-requested select");
		for (var i in services) {
			if ($("body").hasClass(services[i]) && $select.length && !$select.val()) {
				$select.val(services[i]);
			}
		}
	});
}(jQuery));
