(function($) {
	$(function(){
		if ($(".block--service-category-photos .field-item").length > 1) {
			$(".block--service-category-photos .field-items").slick({
				centerMode: true,
				slidesToShow: 1,
				centerPadding: "20%",
				focusOnSelect: true
			});	
		}
	});
}(jQuery));
