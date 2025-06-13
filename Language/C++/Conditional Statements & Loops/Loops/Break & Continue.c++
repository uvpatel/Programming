#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Break Statement.
    for (int i = 0; i < n; i++)
    {
        if (n == 5)
        {
           break;  // break statement generally use for terminate the loop at perticular iterantion
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        if (n == 5)
        {
           continue;  // we use for skip the perticular iteration. we want at some iteration our code should not be execute we write continue.
        }
    }
    return 0;

    
}