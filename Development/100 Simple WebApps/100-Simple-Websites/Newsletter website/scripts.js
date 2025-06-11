// Simple form validation and submission
document.querySelector('.newsletter-form').addEventListener('submit', function (e) {
    e.preventDefault();

    const emailInput = document.getElementById('email');
    const email = emailInput.value.trim();

    if (email === '') {
        alert('Please enter a valid email address.');
        return;
    }

    // Simulating a successful submission (could be integrated with a real backend)
    alert('Thank you for subscribing!');

    // Reset the form
    emailInput.value = '';
});
