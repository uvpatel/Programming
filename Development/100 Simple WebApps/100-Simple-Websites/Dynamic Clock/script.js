// Initialize the start time
const startTime = new Date();

// Function to update the clock
function updateClock() {
    // Get the current time
    const currentTime = new Date();
    
    // Calculate the difference in seconds
    const timeDifference = Math.floor((currentTime - startTime) / 1000);
    
    // Calculate hours, minutes, seconds
    const hours = Math.floor(timeDifference / 3600);
    const minutes = Math.floor((timeDifference % 3600) / 60);
    const seconds = timeDifference % 60;
    
    // Format the time string with leading zeros for single digits
    const timeString = `${padZero(hours)}:${padZero(minutes)}:${padZero(seconds)}`;
    
    // Update the clock element
    document.getElementById('clock').textContent = timeString;
}

// Helper function to add leading zeros to single digits
function padZero(number) {
    return number < 10 ? '0' + number : number;
}

// Update the clock every second
setInterval(updateClock, 1000);
