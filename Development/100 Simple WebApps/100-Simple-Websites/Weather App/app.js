// OpenWeatherMap API key (replace with your actual key)
const apiKey = 'YOUR_API_KEY'; // Replace this with your API key
const searchBtn = document.getElementById('search-btn');
const getLocationBtn = document.getElementById('get-location');
const cityInput = document.getElementById('city-input');
const tempElement = document.getElementById('temp');
const descElement = document.getElementById('desc');
const humidityElement = document.getElementById('humidity');
const windElement = document.getElementById('wind');

// Fetch weather data using lat and lon
async function getWeatherByCoordinates(lat, lon) {
  const apiUrl = `https://api.openweathermap.org/data/2.5/weather?lat=${lat}&lon=${lon}&units=metric&appid=${apiKey}`;
  
  try {
    const response = await fetch(apiUrl);
    const data = await response.json();

    // Handle error for invalid response
    if (data.cod !== 200) {
      alert('Error fetching weather data');
      return;
    }

    // Update the UI with weather data
    tempElement.textContent = `${data.main.temp}°C`;
    descElement.textContent = data.weather[0].description;
    humidityElement.textContent = `Humidity: ${data.main.humidity}%`;
    windElement.textContent = `Wind: ${data.wind.speed} m/s`;
  } catch (error) {
    console.error('Error fetching weather data', error);
    alert('There was an error retrieving weather data.');
  }
}

// Fetch weather data by city name
async function getWeatherByCity(city) {
  const apiUrl = `https://api.openweathermap.org/data/2.5/weather?q=${city}&units=metric&appid=${apiKey}`;

  try {
    const response = await fetch(apiUrl);
    const data = await response.json();

    // Handle error for invalid response
    if (data.cod !== 200) {
      alert('City not found');
      resetWeatherInfo();
      return;
    }

    // Update the UI with weather data
    tempElement.textContent = `${data.main.temp}°C`;
    descElement.textContent = data.weather[0].description;
    humidityElement.textContent = `Humidity: ${data.main.humidity}%`;
    windElement.textContent = `Wind: ${data.wind.speed} m/s`;
  } catch (error) {
    console.error('Error fetching weather data', error);
    alert('There was an error retrieving weather data.');
  }
}

// Get the user's current location using geolocation API
function getUserLocation() {
  if (navigator.geolocation) {
    navigator.geolocation.getCurrentPosition((position) => {
      const lat = position.coords.latitude;
      const lon = position.coords.longitude;

      // Fetch weather based on geolocation
      getWeatherByCoordinates(lat, lon);
    }, () => {
      alert('Could not retrieve your location.');
    });
  } else {
    alert('Geolocation is not supported by this browser.');
  }
}

// Reset the weather information to default
function resetWeatherInfo() {
  tempElement.textContent = '--°C';
  descElement.textContent = '--';
  humidityElement.textContent = 'Humidity: --%';
  windElement.textContent = 'Wind: -- m/s';
}

// Event listener for the search button (by city name)
searchBtn.addEventListener('click', () => {
  const city = cityInput.value.trim();
  if (city) {
    getWeatherByCity(city);
    cityInput.value = ''; // Clear input field
  }
});

// Event listener for the "Get My Location" button
getLocationBtn.addEventListener('click', () => {
  getUserLocation();
});

// Optional: Allow pressing "Enter" to search
cityInput.addEventListener('keydown', (e) => {
  if (e.key === 'Enter') {
    searchBtn.click();
  }
});
