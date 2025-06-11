// Theme Toggle Logic
const themeToggleBtn = document.querySelector('.theme-toggle');
const body = document.body;

themeToggleBtn.addEventListener('click', () => {
    // Toggle between light and dark mode
    if (body.dataset.theme === 'dark') {
        body.dataset.theme = 'light';
        themeToggleBtn.textContent = '🌙'; // Switch to dark mode icon
    } else {
        body.dataset.theme = 'dark';
        themeToggleBtn.textContent = '☀️'; // Switch to light mode icon
    }
});
