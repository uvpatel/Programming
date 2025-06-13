#include <iostream>
using namespace std;

int main() {
    int row;
    
    cout << "Enter Rows: " ;
    cin >> row;
    
    for (int i = row; i > 0; i--)
    {
        for (int j = 0; j <row - i ; j++)
        {
            cout << " ";
           
        }
        for (int k = 0; k < i; k++)
        {
            
            cout << "*";
        }
        
        cout  << endl;
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <  i ; j++)
        {
            cout << " ";
           
        }
        for (int k = 0; k < row -i; k++)
        {
            
            cout << i+1;
        }
        
        cout  << endl;
        
    }
    
    return 0;
}