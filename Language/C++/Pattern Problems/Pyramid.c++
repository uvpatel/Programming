#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter rows: ";
    cin >> n;
    // number of spaces n-i-1
    /*
    i = 0 :       1
    i = 1 :     1 2 1
    i = 2 :   1 2 3 2 1
    i = 3 : 1 2 3 4 3 2 1
    
    
    
    */
    for (int i = 0; i < n; i++)  // outer n times
    {
        // spaces: n - i - 1
        for (int j = 0; j < n - i -1; j++)
        {
            cout << " "; 
        }
        // num1 : i + 1
        for (int k = 1; k <= i + 1 ; k++)
        {
            cout << k ;  
        }
        // num2 : i + 1

        for (int l = i; l > 0 ; l--)
        {
            cout << l ;  //second set of number
        }
        cout  << endl;
    }
        
 


    return 0;
}