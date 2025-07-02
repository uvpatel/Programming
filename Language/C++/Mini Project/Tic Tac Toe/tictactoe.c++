// Tic Tac Toe Game in C++
// By: YourName (replace with your name for GitHub portfolio)

#include <iostream>
using namespace std;

// 3x3 Board initialization
char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };

int choice;
int row, column; // Table converstion
char turn = 'X'; // Player 1 starts
bool draw = false;

// Function to display the current board
void display_board() {
    cout << "\nPLAYER 1 [X]  PLAYER 2 [O]\n\n";
    cout << "\t     |     |     \n";
    cout << "\t  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "\n";
    cout << "\t_____|_____|_____\n";
    cout << "\t     |     |     \n";
    cout << "\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "\n";
    cout << "\t_____|_____|_____\n";
    cout << "\t     |     |     \n";
    cout << "\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "\n";
    cout << "\t     |     |     \n";
}

// Function to take player input, validate, and update the board
void player_turn() {
    bool valid = false;
    while (!valid) {
        if (turn == 'X') {
            cout << "\nPlayer 1 [X] turn: ";
        } else {
            cout << "\nPlayer 2 [O] turn: ";
        }
        cin >> choice;

        switch (choice) {
            case 1: row = 0; column = 0; break;
            case 2: row = 0; column = 1; break;
            case 3: row = 0; column = 2; break;
            case 4: row = 1; column = 0; break;
            case 5: row = 1; column = 1; break;
            case 6: row = 1; column = 2; break;
            case 7: row = 2; column = 0; break;
            case 8: row = 2; column = 1; break;
            case 9: row = 2; column = 2; break;
            default:
                cout << "Invalid Move! Please enter a valid box number (1-9).\n";
                continue;
        }

        if (board[row][column] != 'X' && board[row][column] != 'O') {
            board[row][column] = turn;
            turn = (turn == 'X') ? 'O' : 'X';
            valid = true;
        } else {
            cout << "Box already filled! Please choose another.\n";
        }
    }
    display_board();
}

// Function to check the game status
bool gameContinue() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][0] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[0][i] == board[2][i])) {
            return false; // Win
        }
    }
    // Check diagonals
    if ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[0][2] == board[2][0])) {
        return false; // Win
    }
    // Check for any empty cells (game continues)
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;

    // If no empty cells and no winner, it's a draw
    draw = true;
    return false;
}

// Main function
int main() {
    cout << "\n\tTIC TAC TOE GAME\n";
    cout << "\tFOR 2 PLAYERS\n";
    display_board();

    while (gameContinue()) {
        player_turn();
    }

    if (!draw) {
        // The player who just played is the winner
        if (turn == 'O') {
            cout << "\nCongratulations! Player 1 [X] wins the game!\n";
        } else {
            cout << "\nCongratulations! Player 2 [O] wins the game!\n";
        }
    } else {
        cout << "\nGame Draw!\n";
    }

    return 0;
}
