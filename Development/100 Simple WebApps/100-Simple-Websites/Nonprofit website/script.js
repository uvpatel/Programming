// Add smooth scrolling effect for navigation
document.querySelectorAll('a[href^="#"]').forEach(anchor => {
    anchor.addEventListener('click', function(e) {
        e.preventDefault();

        document.querySelector(this.getAttribute('href')).scrollIntoView({
            behavior: 'smooth',
            block: 'start'
        });
    });
});

// Optional: Dynamic content loading or animations
window.addEventListener('scroll', () => {
    const aboutSection = document.getElementById('about');
    const contactSection = document.getElementById('contact');

    // Fade-in animation based on scroll position
    if (window.scrollY > aboutSection.offsetTop - window.innerHeight / 2) {
        aboutSection.classList.add('fade-in');
    }

    if (window.scrollY > contactSection.offsetTop - window.innerHeight / 2) {
        contactSection.classList.add('fade-in');
    }
});
