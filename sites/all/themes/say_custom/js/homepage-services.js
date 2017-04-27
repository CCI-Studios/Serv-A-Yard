(function($) {
	
	var services = [
		"service-orange",
		"service-blue",
		"service-green",
		"service-red"
	];
	
	$(function(){
		var $icons = $(".view-homepage-services .homepage-services-menu");
		for (var i in services) {
			(function(machineName){
				$icons.find("."+machineName).click(function(e){
					iconClick(e, machineName);
				});
			})(services[i]);
		}
		$icons.find(".service-orange").addClass("active");
		$(".view-homepage-services .views-row-first").addClass("active");
	});
	function iconClick(e, machineName) {
		e.preventDefault();
		menu_active(e.target);
		homepage_services_hide();
		$(".view-homepage-services .views-row."+machineName).addClass("active");
	}
	function menu_active(a)
	{
		$(a).closest("ul").find(".active").removeClass("active");
		$(a).closest("li").addClass("active");
	}
	function homepage_services_hide()
	{
		$(".view-homepage-services .views-row").removeClass("active");
	}

}(jQuery));
