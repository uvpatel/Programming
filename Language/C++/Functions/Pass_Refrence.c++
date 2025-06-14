#include <iostream>
using namespace std;

int sum(int &a, int &b)
{
    a += 10;  // modifies original a
    b += 10;  // modifies original b
    return a + b;
}

int main()
{
    int a = 5 , b = 4;
    
    cout << sum(a,b) << endl;  // prints 29 (15 + 14)

    cout << a << endl;  // now prints 15
    cout << b << endl;  // now prints 14

    return 0;
}
