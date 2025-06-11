// Function to update the clock and display the current UTC time
function updateClock() {
    const clockElement = document.getElementById("clock");

    // Get current UTC time in the format 'Day, Date Month Year HH:MM:SS GMT'
    const now = new Date();
    const utcTime = now.toUTCString();

    // Update the clock display with UTC time
    clockElement.textContent = utcTime;
}

// Update the clock immediately when the page loads
updateClock();

// Update the clock every second (1000 milliseconds)
setInterval(updateClock, 1000);
