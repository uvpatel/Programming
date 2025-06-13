#include <iostream>
using namespace std;

int main() {
    int row,col;
    cout << "Enter Number of Rows: ";
    cin >> row;
    cout << "Enter Number of Coloumn: ";
    cin >> col;
    for (int i = 0; i <= row; i++)  // outer loop one iteration line = iteration  // 1 to n
    {
        for (int j = 0; j <= col; j++)  // inner line row * col  // 1 to n
        {  
            cout << "* ";
        }
        cout  << endl;
    }
    
    return 0;
}