var carousel_timer;

(function($) {
	$(function(){
		$(".view-homepage-carousel .views-row-1").addClass("active");

		if ($(".view-homepage-carousel .views-row").length > 1) {
			$("#carousel-arrow-left").click(left);
			$("#carousel-arrow-right").click(right);
			carousel_timer = setInterval(next, 8000);
		} else {
			$("#carousel-arrow-left").remove();
			$("#carousel-arrow-right").remove();
		}
	});

	function left(event)
	{
		previous();
		stopTimer();
		event.preventDefault();
	}
	function right(event)
	{
		next();
		stopTimer();
		event.preventDefault();
	}

	function stopTimer()
	{
		clearInterval(carousel_timer);
	}

	function next()
	{
		var $rows = $(".view-homepage-carousel .views-row");
		var current = $rows.filter(".active").index() || 0;
		var max = $rows.length;

		current++;
		if (current > max - 1)
			current = 0;

		$rows.removeClass("active").filter(".views-row-"+(current+1)).addClass("active");
	}
	function previous()
	{
		var $rows = $(".view-homepage-carousel .views-row");
		var current = $rows.filter(".active").index() || 0;
		var max = $rows.length;

		current--;
		if (current < 0)
			current = max-1;

		$rows.removeClass("active").filter(".views-row-"+(current+1)).addClass("active");
	}
}(jQuery));
