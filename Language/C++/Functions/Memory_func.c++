#include <iostream>
using namespace std;

void fun()
{
    int x = 25;
    cout << " x = " << endl;
}

int main()
{

    fun();
    // cout << x << endl;
    /* It will Throw an error
    Memory_func.c++: In function 'int main()':
    Memory_func.c++:14:13: error: 'x' was not declared in this scope
    cout << x << endl;
             ^

    // Why it is happen because after fun return x will be deleted.
    */

    return 0;
}