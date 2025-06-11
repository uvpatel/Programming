// JavaScript to dynamically change background color on scroll
document.addEventListener("scroll", function () {
    let scrollPosition = window.scrollY;
    let galleryItems = document.querySelectorAll(".gallery-item");

    galleryItems.forEach(function (item, index) {
        let offset = item.offsetTop;
        let height = item.offsetHeight;

        if (scrollPosition > offset - height / 2 && scrollPosition < offset + height) {
            item.style.backgroundColor = "#FF6347"; // Tomato color
        } else {
            item.style.backgroundColor = "transparent"; // Reset to transparent
        }
    });
});
