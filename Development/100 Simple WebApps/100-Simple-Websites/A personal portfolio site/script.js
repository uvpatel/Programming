// Optional: You can add interactive elements with JavaScript
// For example, a simple scroll-to-top button or smooth scrolling behavior

// Smooth scrolling behavior for navigation links
document.querySelectorAll('a').forEach(anchor => {
    anchor.addEventListener('click', function (e) {
        e.preventDefault();
        document.querySelector(this.getAttribute('href')).scrollIntoView({
            behavior: 'smooth'
        });
    });
});
