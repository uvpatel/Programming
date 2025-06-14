// Qustion : Calculates sum of numbers from 1 to N.

#include <iostream>
using namespace std;

// Function for Printing sum of number.
int sum_N(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

// Function for calculating Factorial of given number.

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
// Pass by value example function

int changeX(int x)
{
    x = 2 * x;                   // pass x = 5
    cout << "x = " << x << endl; // x = 10
    // output 10
}

// Q.s Calculate sum of digits of a number.

//  Num = 145 -> 10

int Sum_digit(int number)
{
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
}

int main()
{
    int num;
    cout << "Enter number for you want sum of n: ";
    cin >> num;

    // Calling Function Sum_N for num
    cout << "The Sum for number " << num << " is " << sum_N(num) << endl;
    // This will reduce the redutancy.

    // Calling Function factorial for num

    cout << "The Factorial for given number " << num << " is " << factorial(num) << endl;

    // Guess The output
    int x = 5;
    changeX(x);
    cout << "x = " << x << endl; // 5 -> output.

    /*

    logic first x is in  main x =5
    it copies into other function x = 5
    return 2*5 modified and returns 10
    */

    int number;
    cin >> number;

    return 0;
}