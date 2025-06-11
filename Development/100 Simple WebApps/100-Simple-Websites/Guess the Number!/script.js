let randomNumber = Math.floor(Math.random() * 100) + 1;  
let attempts = 0;  

document.getElementById('submitGuess').addEventListener('click', function() {  
    const guessInput = document.getElementById('guessInput');  
    const feedback = document.getElementById('feedback');  

    const userGuess = Number(guessInput.value);  
    attempts++;  

    if (userGuess === randomNumber) {  
        feedback.textContent = `Congratulations! ${userGuess} is correct! You guessed it in ${attempts} attempts.`;  
        document.getElementById('restartGame').style.display = 'inline-block';  
    } else if (userGuess < randomNumber) {  
        feedback.textContent = 'Too low! Try again.';  
    } else if (userGuess > randomNumber) {  
        feedback.textContent = 'Too high! Try again.';  
    }  

    guessInput.value = '';  
});  

document.getElementById('restartGame').addEventListener('click', function() {  
    randomNumber = Math.floor(Math.random() * 100) + 1;  
    attempts = 0;  
    document.getElementById('feedback').textContent = '';  
    document.getElementById('guessInput').value = '';  
    this.style.display = 'none';  
});  