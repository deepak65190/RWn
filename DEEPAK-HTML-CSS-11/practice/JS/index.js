$(document).ready(function(){
//    slick slider
$('.slick-section').slick({
    infinite: true,
     slidesToShow: 3,
    slidesToScroll: 1,
    autoplay: true,
    autoplaySpeed: 1000,
    dots: true,
  });
    //calender
    $("#cal").flatpickr();
})