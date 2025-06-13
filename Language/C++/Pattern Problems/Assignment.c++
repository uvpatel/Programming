#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    int n;
    cout << "Enter Rows: " ;
    cin >> n;
    // ```txt
    // A B C
    // D E F
    // G H I
    // ```
    // Home work from Squre Pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    
    // Home work from Triangle Pattern

        // A
        // BB
        // CCC
        // DDDD
        // EEEEE


        char character = 'A';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
            cout << character << " ";
           }
            character++;
            cout << endl;
        }
    

      /*
      
        A
        B A
        C B A
        D C B A
*/  

        char characters_Fl = 'A';
        for (int i = 0; i < n; i++)
        {
            for (int j =  i + 1; j > 0; j--)
            {
               cout << characters_Fl ;
               characters_Fl++;
            }
            cout << endl;
        }
        // Inveted Triangle Pattern
        /* 
        AAAA
         BBB
          CC
           D

        */
       char count = 'A';
       for (int i = 0; i < n; i++)
       {
        for (int j = 0; j < n - i; j++)
        {
           cout << " ";
            
        }
        for (int k = 0; k <= i; k++)
        {
           cout << count ;
           /*
           cout << count  << " ";
             A 
            B B
           C C C
          D D D D
         E E E E E
 */

        }
        cout<< endl;
        count++;
        
       }
       
        
    return 0;
}