#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    // Asterisk Variation
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout <<  endl;
    }
    /*
    *
    **
    ***
    ****

    */


    // Number Variation
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << num;
        }
        cout <<  endl;
        num++;
    }

    /*
    1
    22
    333
    4444
    55555
    */
    

    // n = 4
    // 1
    // 12
    // 123
    // 1234


    int number;
    cout << "Enter number: " ;
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        int k = 1;
       for (int j = 0; j < i + 1; j++)
       {
        cout << k << " ";
        k++;
       }
       cout << endl;
    }
    
    return 0;
}