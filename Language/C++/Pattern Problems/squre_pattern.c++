#include <iostream>
using namespace std;

int main() {

    // here row and col should be same if you want to print squre other wise ractangle.

    
    int row,col;
    cout << "Enter Number of Rows: ";
    cin >> row;
    
    cout << "Enter Number of Coloumn: ";
    cin >> col;

    for (int i = 0 ; i < row; i++)   // outerloop n line = row // n times should be.
    {
        for (int j = 0; j < col; j++)  // what should be done it will decided by inner loop.
        {
            cout << "*";
        }
        cout << endl;
    }
    


    return 0;
}