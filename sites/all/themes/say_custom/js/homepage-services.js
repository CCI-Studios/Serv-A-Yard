var homepage_services_timer;
var homepage_services_current = '';
var services = {
	arboriculture:"Arboriculture",
	lawn:"Lawn-and-Landscape",
	snow:"Snow-and-Ice",
	fencing:"Fencing-and-Security"
};

(function($) {
	$(function(){
		var $icons = $(".view-homepage-services .icons");
		$icons.find(".arboriculture").click(homepage_services_arboriculture);
		$icons.find(".snow-and-ice").click(homepage_services_snow);
		$icons.find(".lawn").click(homepage_services_lawn);
		$icons.find(".fencing").click(homepage_services_fencing);

		var $body = $("body");

		if ($body.hasClass("snow-and-ice-maintenance"))
			homepage_services_change(services.snow);

		if ($body.hasClass("fencing-and-security"))
			homepage_services_change(services.fencing);

		if ($body.hasClass("lawn-and-landscape"))
			homepage_services_change(services.lawn);


		homepage_services_current = "Arboriculture";
		if ($body.hasClass("front"))
			homepage_services_timer = setInterval(homepage_services_next, 4000);
	});

	function homepage_services_change(type)
	{
		$("body").css("padding-bottom","800px");
		homepage_services_hide();
		$(".view-homepage-services .views-row."+type).show();
		homepage_services_current = type;
		$("body").css("padding-bottom","0");
	}

	function homepage_services_arboriculture(event)
	{
		homepage_services_change(services.arboriculture);
		homepage_services_stop();
		event.preventDefault();
	}
	function homepage_services_snow(event)
	{
		homepage_services_change(services.snow);
		homepage_services_stop();
		event.preventDefault();
	}
	function homepage_services_lawn(event)
	{
		homepage_services_change(services.lawn);
		homepage_services_stop();
		event.preventDefault();
	}
	function homepage_services_fencing(event)
	{
		homepage_services_change(services.fencing);
		homepage_services_stop();
		event.preventDefault();
	}

	function homepage_services_hide()
	{
		$(".view-homepage-services .views-row").hide();
	}

	function homepage_services_stop()
	{
		clearInterval(homepage_services_timer);
	}

	function homepage_services_next()
	{
		if (homepage_services_current == services.arboriculture)
		{
			homepage_services_change(services.snow);
		}
		else if (homepage_services_current == services.snow)
		{
			homepage_services_change(services.lawn);
		}
		else if (homepage_services_current == services.lawn)
		{
			homepage_services_change(services.fencing);
		}
		else if (homepage_services_current == services.fencing)
		{
			homepage_services_change(services.arboriculture);
		}
	}

}(jQuery));
