// script.js

let currentInput = '';

function appendNumber(number) {
    currentInput += number;
    document.getElementById('display').value = currentInput;
}

function appendOperator(operator) {
    currentInput += ' ' + operator + ' ';
    document.getElementById('display').value = currentInput;
}

function appendDecimal() {
    if (!currentInput.includes('.')) {
        currentInput += '.';
        document.getElementById('display').value = currentInput;
    }
}

function clearDisplay() {
    currentInput = '';
    document.getElementById('display').value = '';
}

function calculateResult() {
    try {
        // Use eval and replace scientific functions with JavaScript equivalents
        currentInput = eval(currentInput.replace('sin', 'Math.sin')
                                        .replace('cos', 'Math.cos')
                                        .replace('tan', 'Math.tan')
                                        .replace('log', 'Math.log')
                                        .replace('log10', 'Math.log10')
                                        .replace('exp', 'Math.exp')
                                        .replace('sqrt', 'Math.sqrt')
                                        .replace('pow', 'Math.pow')
                                        .replace('abs', 'Math.abs')
                                        .replace('e', 'Math.E')
                                        .replace('pi', 'Math.PI'));
        document.getElementById('display').value = currentInput;
    } catch (e) {
        document.getElementById('display').value = 'Error';
        currentInput = '';
    }
}

// Append scientific functions like sin, cos, log, etc.
function appendScientific(func) {
    currentInput += func + '(';
    document.getElementById('display').value = currentInput;
}

// Add mathematical constants
function appendPi() {
    currentInput += 'Math.PI';
    document.getElementById('display').value = currentInput;
}

function appendConstant(constant) {
    if (constant === 'e') {
        currentInput += 'Math.E';
    }
    document.getElementById('display').value = currentInput;
}

// Add exponentiation or other functions
function appendFunction(func) {
    if (func === 'exp') {
        currentInput += 'Math.exp(';
    } else if (func === 'sqrt') {
        currentInput += 'Math.sqrt(';
    } else if (func === 'pow') {
        currentInput += '**';
    }
    document.getElementById('display').value = currentInput;
}
