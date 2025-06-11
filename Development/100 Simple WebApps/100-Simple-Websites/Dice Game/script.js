document.getElementById('roll-btn').addEventListener('click', function() {
    // Generate two random dice rolls between 1 and 6
    let dice1 = Math.floor(Math.random() * 6) + 1;
    let dice2 = Math.floor(Math.random() * 6) + 1;
  
    // Update dice icons based on roll results
    document.getElementById('dice-1').innerText = getDiceFace(dice1);
    document.getElementById('dice-2').innerText = getDiceFace(dice2);
  
    // Display result
    const resultText = dice1 === dice2 ? "You rolled a double! 🎉" : `You rolled ${dice1} and ${dice2}.`;
    document.getElementById('result').innerText = resultText;
  });
  
  // Function to get the dice face emoji based on roll
  function getDiceFace(diceNumber) {
    const diceFaces = {
      1: "⚀",
      2: "⚁",
      3: "⚂",
      4: "⚃",
      5: "⚄",
      6: "⚅"
    };
    return diceFaces[diceNumber];
  }
  