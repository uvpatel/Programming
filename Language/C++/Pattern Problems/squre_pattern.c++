#include <iostream>
using namespace std;

int main() {
    // 1. Print Rectangle/Square Pattern of '*'
    int row, col;
    cout << "Enter Number of Rows: ";
    cin >> row;

    cout << "Enter Number of Columns: ";
    cin >> col;

    for (int i = 0; i < row; i++) { // Outer loop controls the number of lines
        for (int j = 0; j < col; j++) { // Inner loop controls characters per line
            cout << "*";
        }
        cout << endl;
    }

    // 2. Print Number Pattern
    int n;
    cout << "Enter Number of Rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j;
            // cout << j << " "; // Use this if you want space between numbers
        }
        cout << endl;
    }
    
    // 3. Print Character Pattern (e.g., ABCD...)
    int N;
    cout << "Enter Number of Rows: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        char ch = 'A'; // Reset to 'A' for each new line
        for (int j = 0; j < N; j++) {
            cout << ch;
            ch++; // Increment character
        }
        cout << endl;
    }
    
    int number_;
    cout << "Enter Number of Rows: ";
    cin >> number_;
    
   
    int num  = 1; // Not should be reset so we declare on top.

    for (int i = 0; i < number_; i++) {
        for (int j = 0; j < number_; j++) {
            cout << num;
            num++; // Increment character
        }
        cout << endl;
    }

    /*
    Dry Run:
    number_= 3

   1st iteration of i{
 num = 0 < 3 true increment and become 1 , num will be printed .check 1 < 3 , num will be printed 2 and become 2 < 3 , num will be printed 3. then 3 < 3 will be false and output will be in next line. and 0 <3 
}
   second iteration of i{
    num = 0 < 3 true increment and become 1 , num will be printed 4  .check 1 < 3 , num will be printed 5 and become 2 < 3 , num will be printed 6. then 3 < 3 will be false and output will be in next line. and 0 <3 
    }

   Third iteration of i{
    num = 0 < 3 true increment and become 1 , num will be printed 7  .check 1 < 3 , num will be printed 8 and become 2 < 3 , num will be printed 9. then 3 < 3 will be false and output will be in next line. and 0 <3 
    }
    
    1 2 3
    4 5 6 
    7 8 9
 
    */
    return 0;
}
