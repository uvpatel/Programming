#include <iostream>
using namespace std;

int main() {
    int number,digit = 0,Sum_digit = 0;
    cin >> number;
    while (number > 0)
    {
        digit = number % 10;
        // cout << digit << " ";
        Sum_digit += digit;
        number /= 10;
    }
    cout <<"The sum of digit for "<<number<<" is " << Sum_digit << " ";
    
    return 0;
}