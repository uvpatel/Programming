function updateClock() {
    const options = { 
      weekday: 'long', 
      year: 'numeric', 
      month: 'long', 
      day: 'numeric' 
    };
  
    // Get the current time
    const now = new Date();
    
    // Convert to Bangladesh Standard Time (BST)
    const bangladeshTime = new Date(now.toLocaleString('en-US', { timeZone: 'Asia/Dhaka' }));
  
    // Get the current hours, minutes, and seconds
    const hours = bangladeshTime.getHours().toString().padStart(2, '0');
    const minutes = bangladeshTime.getMinutes().toString().padStart(2, '0');
    const seconds = bangladeshTime.getSeconds().toString().padStart(2, '0');
  
    // Format the date
    const date = bangladeshTime.toLocaleDateString('en-US', options);
  
    // Update the time and date in the HTML
    document.getElementById('time').innerHTML = `${hours}:${minutes}:${seconds}`;
    document.getElementById('date').innerHTML = date;
  }
  
  // Update the clock every second
  setInterval(updateClock, 1000);
  
  // Initial call to display the time immediately on page load
  updateClock();
  