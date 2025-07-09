#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

// get the computer move using rand
char getComputerMove()
{
    int move;
    // generating random number between 0-2
    srand(time(NULL));
    move = rand() % 3;

    // returning move based on the random number generated
    if (move == 0)
    {
        return 'p';
    }
    else if (move == 1)
    {
        return 's';
    }
    return 'r';
}

// Function to return the result of the game

int getResults(char playerMove, char computerMove)
{
    if (playerMove == 's' && computerMove == 'p') {
   
    return 1;
}

if (playerMove == 's' && computerMove == 'r') {
   
    return -1;
}

if (playerMove == 'p' && computerMove == 'r') {
 
    return 1;
}

if (playerMove == 'p' && computerMove == 's') {
    
    return -1;
}

if (playerMove == 'r' && computerMove == 'p') {
 
    return -1;
}

if (playerMove == 'r' && computerMove == 's') {
   
    return 1;
}

}




int main()
{
    char playerMove;

    cout << "\n\n\n\t\t Welcome to stone paper scissor game\n"
         << endl;

    cout << "\n\t\tEnter r for ROCK, p for PAPER, and s "
            "for SCISSOR\n\t\t\t\t\t";

    while (1)
    {
        cin >> playerMove;
        if (playerMove == 'p' || playerMove == 'r' || playerMove == 's')
        {
            break;
        }
        else
        {
            cout << "\t\t\tInvalid Player Move!!! Please Try Again" << endl;
        }
    }

    // computer move
    char computerMove = getComputerMove();

    int result = getResults(playerMove,computerMove);

    // printing result

    if (result == 0)
    {
        cout << "\n\t\t\tGame Draw!\n" << endl;
    }
    else if (result == 1)
    {
        cout << "\n\t\t\tCongratulations! Player won the "
                "game!\n";
    }
    else {
        cout << "\n\t\t\tOh! Computer won the game!\n";
    }

// showing both  moves
     cout << "\t\t\tYour Move: " << playerMove << endl;
     cout << "\t\t\tComputer's Move: " << computerMove << endl;

    return 0;
}