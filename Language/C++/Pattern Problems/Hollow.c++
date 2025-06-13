#include <iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter Number of Rows: ";
    cin >> row;

    //top
    for (int i = 0; i < row; i++) {
    // Outer spaces
    for (int j = 0; j < row - i - 1; j++) cout << " ";
    cout << "*";
    if (i != 0) {
        for (int j = 0; j < 2 * i - 1; j++) cout << " ";
        cout << "*";
    }
    cout << endl;
}
    // Bottom
    //   1)  space
    //     "*"
    //   2) spaces
    //     "*"  <- i != n-1
    //  this is for not non last line odd number. 2*(n -  2 --i) - 1 )space 
  for (int i = row - 2; i >= 0; i--) {
    for (int j = 0; j < row - i - 1; j++) cout << " ";
    cout << "*";
    if (i != 0) {
        for (int j = 0; j < 2 * i - 1; j++) cout << " ";
        cout << "*";
    }
    cout << endl;
}

    
    return 0;
}