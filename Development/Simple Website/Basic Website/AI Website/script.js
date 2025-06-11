// Smooth Scroll for 'Learn More' button
document.querySelector('.cta-btn').addEventListener('click', function(e) {
    e.preventDefault();
    const target = document.querySelector(this.getAttribute('href'));
    window.scrollTo({
        top: target.offsetTop - 80,
        behavior: 'smooth'
    });
});