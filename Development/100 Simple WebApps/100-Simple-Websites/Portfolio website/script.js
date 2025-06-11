document.addEventListener('DOMContentLoaded', function () {

    // Smooth Scroll to Section on CTA Button Click
    const ctaButton = document.querySelector('.cta-button');
    if (ctaButton) {
        ctaButton.addEventListener('click', function (e) {
            e.preventDefault();
            document.querySelector('#portfolio').scrollIntoView({ behavior: 'smooth' });
        });
    }

    // Portfolio Item Fade-In Effect on Scroll
    const portfolioItems = document.querySelectorAll('.portfolio-item');
    const handleScroll = () => {
        portfolioItems.forEach(item => {
            const rect = item.getBoundingClientRect();
            if (rect.top < window.innerHeight && rect.bottom >= 0) {
                item.classList.add('fade-in');
            }
        });
    };

    window.addEventListener('scroll', handleScroll);
    handleScroll(); // Initial check to show portfolio items on load

});
