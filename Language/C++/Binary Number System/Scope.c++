#include <iostream>
using namespace std;

int x = 10; // it is a global variable.

void fun(){
    int y = 0;
}
int main() {

    // Block of code
    {
       int x = 5;
    }
    // cout << x << endl; it will be throwing error.because x is in block.


    for (int i = 0; i < 10; i++)
    {
        int x = 0; // x will be 
    }
    // cout << x << endl; // it will be throw an error.

    // 2nd
    for (int i = 0; i < 10; i++)
    {
        /* code */
    }
    // it will not throw any error because it has local scope

    // cout << y << endl;  // it will be not give an error because y is in function . then global.


    return 0;
}