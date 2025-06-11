// Set default countdown time (in seconds)
let countdownTime = 3600; // 1 hour (in seconds)
let countdownInterval;
let isCountingDown = false;

function updateCountdown() {
  const days = Math.floor(countdownTime / (60 * 60 * 24));
  const hours = Math.floor((countdownTime % (60 * 60 * 24)) / (60 * 60));
  const minutes = Math.floor((countdownTime % (60 * 60)) / 60);
  const seconds = countdownTime % 60;

  // Update the displayed countdown values
  document.getElementById("days").textContent = days + "d";
  document.getElementById("hours").textContent = hours + "h";
  document.getElementById("minutes").textContent = minutes + "m";
  document.getElementById("seconds").textContent = seconds + "s";

  // If countdown reaches zero
  if (countdownTime <= 0) {
    clearInterval(countdownInterval);
    document.getElementById("countdown").innerHTML = "<h2>Time's Up!</h2>";
    document.getElementById("message").textContent = "The event has started!";
    document.getElementById("startStopBtn").disabled = true;
  }
}

// Toggle the countdown (Start or Stop)
function toggleCountdown() {
  if (isCountingDown) {
    clearInterval(countdownInterval);
    document.getElementById("startStopBtn").textContent = "Start";
  } else {
    countdownInterval = setInterval(function() {
      countdownTime--;
      updateCountdown();
    }, 1000);
    document.getElementById("startStopBtn").textContent = "Stop";
  }
  isCountingDown = !isCountingDown;
}

// Open the modal for setting custom time
function openTimeModal() {
  document.getElementById("timeModal").style.display = "block";
}

// Close the modal
function closeTimeModal() {
  document.getElementById("timeModal").style.display = "none";
}

// Set the custom countdown time
function setCustomTime() {
  const customTimeInput = document.getElementById("customTime").value;
  if (customTimeInput && !isNaN(customTimeInput)) {
    countdownTime = parseInt(customTimeInput);
    updateCountdown();
    closeTimeModal();
  } else {
    alert("Please enter a valid number!");
  }
}

// Initialize the countdown
updateCountdown();
