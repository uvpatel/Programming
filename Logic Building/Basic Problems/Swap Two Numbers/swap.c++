#include <iostream>
using namespace std;

// [Alternate Approach] Built-in Swap
int main() {
    int a,b;
    cin >> a,b;
    cout << "The before swap Value of a = %d, b = %d" <<a , b;
    swap(a,b);
   cout << "The after swap Value of a is " << a << ", b is " << b << endl;
    return 0;
}