// Toggle between Light and Dark Theme
function toggleTheme() {
    const currentTheme = document.body.style.backgroundColor === "rgb(248, 249, 250)" ? "dark" : "light";
    
    if (currentTheme === "light") {
        document.documentElement.style.setProperty('--primary-bg', '#333333');
        document.documentElement.style.setProperty('--secondary-bg', '#444444');
        document.documentElement.style.setProperty('--text-color', '#ffffff');
        document.documentElement.style.setProperty('--accent-color', '#ff4081');
        document.documentElement.style.setProperty('--highlight-color', '#ff80ab');
        document.querySelector('.theme-toggle').textContent = "🌞"; // Change to sun icon for dark mode
    } else {
        document.documentElement.style.setProperty('--primary-bg', '#f8f9fa');
        document.documentElement.style.setProperty('--secondary-bg', '#ffffff');
        document.documentElement.style.setProperty('--text-color', '#333333');
        document.documentElement.style.setProperty('--accent-color', '#4caf50');
        document.documentElement.style.setProperty('--highlight-color', '#ff4081');
        document.querySelector('.theme-toggle').textContent = "🌙"; // Change to moon icon for light mode
    }
}
