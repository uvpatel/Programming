// Example of a smooth scroll for the "Shop Now" button

document.addEventListener('DOMContentLoaded', function() {
    const shopButton = document.querySelector('.cta-btn');
    
    shopButton.addEventListener('click', function() {
        // Smooth scroll to featured products section
        document.querySelector('.featured-products').scrollIntoView({
            behavior: 'smooth'
        });
    });
});
