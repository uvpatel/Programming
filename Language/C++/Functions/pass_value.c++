#include <iostream>
using namespace std;

int sum(int a, int b)
{
    a += 10;  //15
    b += 10; //14
    return a + b;  // 29
}
int main()
{
    int a = 5 , b = 4;
    
    cout << sum(a,b) << endl;  // here will be above value

    cout << a << endl;  // value 5
    cout << b << endl;  // value 4

    return 0;
}