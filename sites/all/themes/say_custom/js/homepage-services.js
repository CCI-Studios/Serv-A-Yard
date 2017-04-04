

(function($) {
	
	var services = {
		arboriculture:"Arboriculture",
		lawn:"Lawn-and-Landscape",
		snow:"Snow-and-Ice",
		fencing:"Fencing-and-Security"
	};
	
	$(function(){
		var $icons = $(".view-homepage-services .homepage-services-menu");
		$icons.find(".arboriculture").click(homepage_services_arboriculture).addClass("active");
		$icons.find(".snow-and-ice").click(homepage_services_snow);
		$icons.find(".lawn").click(homepage_services_lawn);
		$icons.find(".fencing").click(homepage_services_fencing);

		
		$(".view-homepage-services .views-row."+services.arboriculture).addClass("active");
	});

	function homepage_services_change(type)
	{
		homepage_services_hide();
		$(".view-homepage-services .views-row."+type).addClass("active");
	}

	function homepage_services_arboriculture(event)
	{
		menu_active(event.target);
		homepage_services_change(services.arboriculture);
		event.preventDefault();
	}
	function homepage_services_snow(event)
	{
		menu_active(event.target);
		homepage_services_change(services.snow);
		event.preventDefault();
	}
	function homepage_services_lawn(event)
	{
		menu_active(event.target);
		homepage_services_change(services.lawn);
		event.preventDefault();
	}
	function homepage_services_fencing(event)
	{
		menu_active(event.target);
		homepage_services_change(services.fencing);
		event.preventDefault();
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
