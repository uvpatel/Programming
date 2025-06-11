// Adding interactive play button for each episode
const playButtons = document.querySelectorAll('.play-btn');

playButtons.forEach(button => {
    button.addEventListener('click', (e) => {
        const episodeTitle = e.target.closest('.episode-card').querySelector('h3').innerText;
        alert(`Playing the podcast: ${episodeTitle}`);
    });
});
