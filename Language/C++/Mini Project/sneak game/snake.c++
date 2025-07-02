#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <ctime>
using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Function prototypes
void welcome();
void instructions();
void record();
void incorrectChoice();
void lostgame();
void win();

// Game settings
bool game = false;
const int width = 50;
const int height = 20;
int x, y, fx, fy, score, highScore = 0;
int tx[100], ty[100];
int nt;
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir, prevDir;

// Initialize game state
void Init() {
    game = true;
    dir = STOP;
    prevDir = STOP;
    x = width / 2;
    y = height / 2;
    score = 0;
    nt = 0;
    for (int i = 0; i < 100; i++) {
        tx[i] = 0;
        ty[i] = 0;
    }
    srand(time(0)); // Seed random number generator
    do {
        fx = rand() % width;
        fy = rand() % height;
    } while (fx == x && fy == y); // Ensure fruit doesn't spawn on snake
}

// Draw game board
void Map() {
    system("cls");
    SetConsoleTextAttribute(hConsole, 180);
    cout << string(width + 2, '#') << endl;
    for (int i = 0; i < height; i++) {
        cout << '#';
        for (int j = 0; j < width; j++) {
            if (i == y && j == x)
                cout << 'O';
            else if (i == fy && j == fx)
                cout << 'X';
            else {
                bool print = false;
                for (int k = 0; k < nt; k++) {
                    if (tx[k] == j && ty[k] == i) {
                        cout << 'o';
                        print = true;
                    }
                }
                if (!print)
                    cout << ' ';
            }
        }
        cout << '#' << endl;
    }
    cout << string(width + 2, '#') << endl;
    cout << "Score: " << score << "  High Score: " << highScore << endl;
}

// Handle keyboard input
void Input() {
    if (_kbhit()) {
        char key = _getch();
        Direction newDir = dir;
        switch (key) {
        case 'a':
            if (prevDir != RIGHT) newDir = LEFT;
            break;
        case 'd':
            if (prevDir != LEFT) newDir = RIGHT;
            break;
        case 'w':
            if (prevDir != DOWN) newDir = UP;
            break;
        case 's':
            if (prevDir != UP) newDir = DOWN;
            break;
        case 'x':
            game = false;
            break;
        case 'r':
            welcome();
            return;
        }
        dir = newDir;
    }
}

// Game logic
void Logic() {
    // Update tail
    int prevx = tx[0], prevy = ty[0], prev2x, prev2y;
    tx[0] = x;
    ty[0] = y;
    for (int i = 1; i < nt; i++) {
        prev2x = tx[i];
        prev2y = ty[i];
        tx[i] = prevx;
        ty[i] = prevy;
        prevx = prev2x;
        prevy = prev2y;
    }

    // Move snake
    switch (dir) {
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    }
    prevDir = dir;

    // Wrap around edges
    if (x >= width) x = 0; else if (x < 0) x = width - 1;
    if (y >= height) y = 0; else if (y < 0) y = height - 1;

    // Check for collision with tail
    for (int i = 0; i < nt; i++) {
        if (tx[i] == x && ty[i] == y) {
            lostgame();
            return;
        }
    }

    // Check for fruit collision
    if (x == fx && y == fy) {
        score++;
        nt++;
        if (score > highScore) highScore = score;
        do {
            fx = rand() % width;
            fy = rand() % height;
            bool valid = true;
            if (fx == x && fy == y) valid = false;
            for (int i = 0; i < nt; i++) {
                if (fx == tx[i] && fy == ty[i]) valid = false;
            }
            if (valid) break;
        } while (true);
    }
}

// Check win condition
void win() {
    if (score >= 100) {
        system("cls");
        cout << "\n\n\n\n\n";
        cout << string(30, ' ') << "Congratulations, you won the game!\n";
        cout << string(30, ' ') << "Final Score: " << score << "\n";
        cout << string(30, ' ') << "Press any key to return to menu\n";
        _getch();
        welcome();
    }
}

// Start game loop
void startGame() {
    Init();
    while (game) {
        Map();
        Input();
        Logic();
        win();
        Sleep(50); // Slower speed for better control
    }
}

// Welcome menu
void welcome() {
    system("cls");
    cout << "\n\n\n\n\n\n\n";
    cout << string(30, ' ') << "Welcome to the Snake Game!\n";
    cout << string(30, ' ') << "1. Start Game\n";
    cout << string(30, ' ') << "2. Instructions\n";
    cout << string(30, ' ') << "3. View Record\n";
    char choice;
    cout << string(30, ' ') << "Enter choice: ";
    cin >> choice;
    switch (choice) {
    case '1':
        startGame();
        break;
    case '2':
        instructions();
        break;
    case '3':
        record();
        break;
    default:
        incorrectChoice();
    }
}

// Instructions menu
void instructions() {
    system("cls");
    cout << "\n\n\n\n\n\n\n";
    cout << string(30, ' ') << "Snake Game Instructions\n\n";
    cout << string(30, ' ') << "1. Use W, A, S, D to move the snake.\n";
    cout << string(30, ' ') << "2. Eat 'X' to grow and increase score.\n";
    cout << string(30, ' ') << "3. Avoid hitting your own tail.\n";
    cout << string(30, ' ') << "4. Reach a score of 100 to win.\n";
    cout << string(30, ' ') << "5. Press 'x' to exit, 'r' to restart.\n";
    cout << "\n" << string(30, ' ') << "Press any key to return\n";
    _getch();
    welcome();
}

// Record menu
void record() {
    system("cls");
    cout << "\n\n\n\n\n\n\n";
    cout << string(30, ' ') << "Game Record\n\n";
    cout << string(30, ' ') << "Current High Score: " << highScore << "\n";
    cout << string(30, ' ') << "Win Condition: Reach 100 points\n";
    cout << "\n" << string(30, ' ') << "Press any key to return\n";
    _getch();
    welcome();
}

// Incorrect choice handler
void incorrectChoice() {
    system("cls");
    cout << "\n\n\n\n\n\n\n";
    cout << string(30, ' ') << "Invalid choice, please try again.\n";
    cout << string(30, ' ') << "Press any key to return\n";
    _getch();
    welcome();
}

// Game over handler
void lostgame() {
    game = false;
    system("cls");
    cout << "\n\n\n\n\n\n\n";
    cout << string(30, ' ') << "Game Over!\n";
    cout << string(30, ' ') << "Final Score: " << score << "\n";
    cout << string(30, ' ') << "High Score: " << highScore << "\n";
    cout << string(30, ' ') << "Press any key to return\n";
    _getch();
    welcome();
}

int main() {
    SetConsoleTextAttribute(hConsole, 116);
    srand(time(0)); // Seed random number generator
    welcome();
    return 0;
}