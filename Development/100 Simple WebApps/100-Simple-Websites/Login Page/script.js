// Get the form and error message elements
const loginForm = document.getElementById('login-form');
const errorMessage = document.getElementById('error-message');

// Handle the form submission
loginForm.addEventListener('submit', function(event) {
  event.preventDefault(); // Prevent the form from submitting immediately

  const username = document.getElementById('username').value;
  const password = document.getElementById('password').value;

  // Simple validation (replace with actual login logic)
  if (username === 'admin' && password === 'password') {
    alert('Login successful!');
  } else {
    errorMessage.style.visibility = 'visible';
    errorMessage.textContent = 'Invalid username or password!';
  }
});
