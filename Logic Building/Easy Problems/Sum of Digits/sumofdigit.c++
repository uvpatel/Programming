#include <iostream>
using namespace std;

int main() {
    int num,digit,sum;
    cin >> num;
    sum = 0;

    while (num != 0)
    {
      digit = num % 10;
      sum += digit;
      num /= 10;

    }
    cout << sum << endl;
    
    return 0;
}