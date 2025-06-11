document.addEventListener("DOMContentLoaded", function() {
    const guessButton = document.getElementById('guessButton');
    const resetButton = document.getElementById('resetButton');
    const userGuessInput = document.getElementById('userGuess');
    const message = document.getElementById('message');

    let targetNumber;
    let attempts = 0;

    // Initialize the game
    function startGame() {
        targetNumber = Math.floor(Math.random() * 100) + 1;
        attempts = 0;
        message.textContent = "Guess the number between 1 and 100!";
        resetButton.classList.add('hidden');
        guessButton.disabled = false;
        userGuessInput.value = '';
    }

    // Handle the user's guess
    guessButton.addEventListener('click', function() {
        const userGuess = parseInt(userGuessInput.value);
        
        if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
            message.textContent = "Please enter a valid number between 1 and 100.";
            return;
        }

        attempts++;
        
        if (userGuess === targetNumber) {
            message.textContent = `Congratulations! You guessed the number in ${attempts} attempts.`;
            guessButton.disabled = true;
            resetButton.classList.remove('hidden');
        } else if (userGuess < targetNumber) {
            message.textContent = `Try higher! You've made ${attempts} attempts.`;
        } else {
            message.textContent = `Try lower! You've made ${attempts} attempts.`;
        }
    });

    // Reset the game
    resetButton.addEventListener('click', function() {
        startGame();
    });

    // Start the game when the page loads
    startGame();
});
