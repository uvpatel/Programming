document.addEventListener('DOMContentLoaded', () => {
    const form = document.getElementById('contactForm');
    form.addEventListener('submit', (e) => {
        e.preventDefault();

        // Here, you can add form validation or an AJAX request
        alert("Thank you for your message! We will get back to you soon.");
        form.reset(); // Reset form fields after submission
    });
});
