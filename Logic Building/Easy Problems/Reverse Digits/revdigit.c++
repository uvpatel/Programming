#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n, digit, rev = 0;
    cin >> n;

    // while (n > 0)
    // {
    //     rev = rev * 10 + n % 10;
    //     n /= 10;
    // }
    // cout << rev;

    string str = to_string(n);

    reverse(str.begin(), str.end());

    n = stoi(str);

    cout << n << endl;

    return 0;
}