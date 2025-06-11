// Define the quiz data with different difficulty levels
const quizData = {
    easy: [
        { question: "What is the capital of France?", options: ["Berlin", "Madrid", "Paris", "Rome"], answer: 2 },
        { question: "Which language is primarily spoken in Brazil?", options: ["Spanish", "Portuguese", "English", "French"], answer: 1 },
        { question: "Who wrote 'Hamlet'?", options: ["Shakespeare", "Dickens", "Tolkien", "Austen"], answer: 0 },
        { question: "What is the largest planet in our Solar System?", options: ["Earth", "Mars", "Jupiter", "Saturn"], answer: 2 },
        { question: "What is the chemical symbol for gold?", options: ["Au", "Ag", "Pb", "Fe"], answer: 0 },
    ],
    medium: [
        { question: "Which of the following is a mammal?", options: ["Shark", "Whale", "Lizard", "Crocodile"], answer: 1 },
        { question: "Which element is most abundant in the Earth's crust?", options: ["Oxygen", "Hydrogen", "Carbon", "Nitrogen"], answer: 0 },
        { question: "Who was the first president of the United States?", options: ["Abraham Lincoln", "George Washington", "Thomas Jefferson", "John Adams"], answer: 1 },
        { question: "What year did the Titanic sink?", options: ["1912", "1920", "1900", "1898"], answer: 0 },
        { question: "What is the longest river in the world?", options: ["Nile", "Amazon", "Yangtze", "Mississippi"], answer: 0 },
    ],
    hard: [
        { question: "What is the square root of 144?", options: ["10", "12", "14", "16"], answer: 1 },
        { question: "Who developed the theory of relativity?", options: ["Isaac Newton", "Galileo Galilei", "Albert Einstein", "Nikola Tesla"], answer: 2 },
        { question: "What is the capital of Australia?", options: ["Sydney", "Melbourne", "Canberra", "Brisbane"], answer: 2 },
        { question: "Which is the largest organ in the human body?", options: ["Heart", "Lungs", "Liver", "Skin"], answer: 3 },
        { question: "Who painted the Mona Lisa?", options: ["Leonardo da Vinci", "Vincent van Gogh", "Pablo Picasso", "Claude Monet"], answer: 0 },
    ]
};

let currentQuestion = 0;
let score = 0;
let timerInterval;
let timeLeft = 30;
let selectedDifficulty = 'easy';

// Function to start the quiz
function startQuiz(difficulty) {
    selectedDifficulty = difficulty;
    currentQuestion = 0;
    score = 0;

    document.getElementById('main-menu').style.display = 'none'; // Hide the main menu
    document.getElementById('quiz-box').style.display = 'block'; // Show the quiz box
    loadQuestion();
}

// Function to load the current question
function loadQuestion() {
    const questionData = quizData[selectedDifficulty][currentQuestion];

    // If there is no question data (e.g., user ran out of questions), end the quiz
    if (!questionData) {
        return showResult();
    }

    document.getElementById('question').textContent = questionData.question; // Display the question

    const options = document.querySelectorAll(".option");
    options.forEach((option, index) => {
        option.textContent = questionData.options[index]; // Set the options
        option.disabled = false; // Enable the options
        option.style.backgroundColor = "#2575fc"; // Reset color to default
        option.style.display = 'inline-block'; // Make sure the options are displayed as block elements
    });

    document.getElementById("feedback").style.opacity = 0;

    // Reset and start the timer
    timeLeft = 30;
    document.getElementById("timer").textContent = timeLeft;
    clearInterval(timerInterval);
    timerInterval = setInterval(updateTimer, 1000);
}

// Function to update the timer
function updateTimer() {
    timeLeft--;
    document.getElementById("timer").textContent = timeLeft;
    if (timeLeft <= 0) {
        clearInterval(timerInterval);
        checkAnswer(-1); // Timeout case
    }
}

// Function to check the answer
function checkAnswer(selectedOption) {
    clearInterval(timerInterval); // Stop the timer when an answer is selected

    const questionData = quizData[selectedDifficulty][currentQuestion];
    const options = document.querySelectorAll(".option");

    // Handle answer correctness
    if (selectedOption === questionData.answer) {
        score++;
        document.getElementById("feedback").textContent = "Correct!";
        playSound('correct');
    } else if (selectedOption !== -1) {
        document.getElementById("feedback").textContent = "Wrong answer!";
        playSound('incorrect');
    }

    // Disable options after answering and highlight the correct one
    options.forEach((option, index) => {
        option.disabled = true;
        if (index === questionData.answer) {
            option.style.backgroundColor = "#4CAF50"; // Correct answer color
        } else if (index === selectedOption && selectedOption !== -1) {
            option.style.backgroundColor = "#F44336"; // Incorrect answer color
        }
    });

    document.getElementById("feedback").style.opacity = 1;

    currentQuestion++;
    if (currentQuestion < quizData[selectedDifficulty].length) {
        setTimeout(loadQuestion, 1000); // Load the next question
    } else {
        setTimeout(showResult, 1000); // Show result when the quiz ends
    }
}

// Function to play sound on correct/incorrect answers
function playSound(type) {
    const sound = new Audio(type === 'correct' ? 'correct.mp3' : 'incorrect.mp3');
    sound.play();
}

// Function to display the result
function showResult() {
    document.getElementById("quiz-box").style.display = "none";
    const resultBox = document.getElementById("result-box");
    document.getElementById("score").textContent = score;
    resultBox.style.display = "block";
}

// Function to restart the quiz
function restartQuiz() {
    document.getElementById("result-box").style.display = "none";
    document.getElementById("main-menu").style.display = "block";
}
