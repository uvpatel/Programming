// Theme switcher to toggle between light and dark mode
const themeToggleButton = document.createElement('button');
themeToggleButton.innerText = '🌙';
themeToggleButton.style.position = 'fixed';
themeToggleButton.style.top = '20px';
themeToggleButton.style.right = '20px';
themeToggleButton.style.backgroundColor = 'transparent';
themeToggleButton.style.border = 'none';
themeToggleButton.style.fontSize = '1.5em';
themeToggleButton.style.cursor = 'pointer';

document.body.appendChild(themeToggleButton);

// Listen for theme toggle
themeToggleButton.addEventListener('click', () => {
    document.body.classList.toggle('dark-theme');
    if (document.body.classList.contains('dark-theme')) {
        themeToggleButton.innerText = '☀️';
    } else {
        themeToggleButton.innerText = '🌙';
    }
});
