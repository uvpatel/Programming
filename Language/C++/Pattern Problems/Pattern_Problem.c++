#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            
            cout << ch << " " ;
        }
        cout  << endl;
    }
    
int number_;
    cout << "Enter Number of Rows: ";
    cin >> number_;
    
   
    int num  = 1; // Reset to 'A' for each new line
    for (int i = 0; i < number_; i++) {
        for (int j = 0; j < number_; j++) {
            cout << num << " ";
            num++; // Increment character
        }
        cout << endl;
    }
    return 0;
}