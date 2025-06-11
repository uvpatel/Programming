// Dynamic color change effect
document.addEventListener('DOMContentLoaded', function () {
    const banner = document.querySelector('.banner');
    const colors = ['#ff6347', '#ff9a8b', '#fbcf72', '#ffdf00'];
    let currentColorIndex = 0;

    setInterval(() => {
        banner.style.background = `linear-gradient(to right, ${colors[currentColorIndex]}, ${colors[(currentColorIndex + 1) % colors.length]})`;
        currentColorIndex = (currentColorIndex + 1) % colors.length;
    }, 5000); // Change color every 5 seconds
});
