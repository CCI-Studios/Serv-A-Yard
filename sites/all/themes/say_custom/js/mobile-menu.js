(function($) {
	$(function(){
		$("#block-block-5 a").click(function(){
			$("body").toggleClass("menu-open");
			return false;
		});
		$("#block-system-main-menu .content > ul > li.expanded > .nolink").click(function(){
			console.log("wuuuut");
			$(this).closest("li").toggleClass("open");
		});
	});
}(jQuery));
