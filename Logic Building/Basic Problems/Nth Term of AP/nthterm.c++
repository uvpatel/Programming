#include <iostream>
using namespace std;

int main() {
    int a1,a2,n;
    a1 = 2,a2 = 3,n=4;
    int nthTerm = a1;
    int d = a2 - a1;

    for (int i = 1; i < n; i++)
    {
        nthTerm += d;
    }
    cout << nthTerm << endl;
    
    // a1 + (a2-a1)*d
    
    return 0;
}