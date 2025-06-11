const playPauseButton = document.getElementById('play-pause');
const audio = document.getElementById('audio');
const progressBar = document.getElementById('progress-bar');
const volumeControl = document.getElementById('volume');
const albumArt = document.getElementById('album-cover');

// Toggle play/pause functionality
playPauseButton.addEventListener('click', () => {
    if (audio.paused) {
        audio.play();
        playPauseButton.innerHTML = '&#10074;&#10074;';
        albumArt.style.transform = 'rotate(360deg)';
    } else {
        audio.pause();
        playPauseButton.innerHTML = '&#9654;';
        albumArt.style.transform = 'rotate(0deg)';
    }
});

// Update progress bar while song is playing
audio.addEventListener('timeupdate', () => {
    const progress = (audio.currentTime / audio.duration) * 100;
    progressBar.value = progress;
});

// Update audio current time based on progress bar
progressBar.addEventListener('input', () => {
    const value = progressBar.value;
    audio.currentTime = (value / 100) * audio.duration;
});

// Adjust volume
volumeControl.addEventListener('input', () => {
    audio.volume = volumeControl.value / 100;
});

// Next and Previous functionality (example)
const nextButton = document.getElementById('next');
const prevButton = document.getElementById('prev');

nextButton.addEventListener('click', () => {
    // Logic for next song
    console.log("Next song");
});

prevButton.addEventListener('click', () => {
    // Logic for previous song
    console.log("Previous song");
});
