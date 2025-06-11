// A simple JavaScript function to simulate interaction and make the page more dynamic
function triggerAction() {
    alert("You're about to experience something great!");
}

// Optional: Smooth scroll effect (if needed)
document.querySelectorAll('a[href^="#"]').forEach(anchor => {
    anchor.addEventListener('click', function (e) {
        e.preventDefault();

        document.querySelector(this.getAttribute('href')).scrollIntoView({
            behavior: 'smooth'
        });
    });
});
