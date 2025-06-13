#include <iostream>
using namespace std;

int main() {
    // ---------------------------------------------
    // 1) Print numbers from 1 to n
    // ---------------------------------------------
    int n;
    cout << "Enter Number until you want to print: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }

    /*
    Dry Run (for n = 5):
    i = 1 → true → print 1 → i++
    i = 2 → true → print 2 → i++
    i = 3 → true → print 3 → i++
    i = 4 → true → print 4 → i++
    i = 5 → true → print 5 → i++
    i = 6 → false → loop ends
    */

    // ---------------------------------------------
    // 2) Find the sum from 1 to a given number
    // ---------------------------------------------
    int sum = 0, number;
    cout << "\nEnter Number for which you want the sum: ";
    cin >> number;

    for (int i = 0; i <= number; i++) {
        sum += i;
    }

    cout << "The sum of " << number << " is " << sum << endl;

    // ---------------------------------------------
    // 3) Print Even and Odd numbers till N
    // ---------------------------------------------
    int Number;
    cout << "\nEnter number till you want even/odd numbers: ";
    cin >> Number;

    cout << "Even numbers till " << Number << ": ";
    for (int i = 0; i <= Number; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << "\nOdd numbers till " << Number << ": ";
    for (int j = 0; j <= Number; j++) {
        if (j % 2 != 0) {
            cout << j << " ";
        }
    }
    cout << endl;

    // ---------------------------------------------
    // 4) Find the sum of all odd numbers from 1 to N
    // ---------------------------------------------
    int sum_odd = 0, num;
    cout << "\nEnter number to find sum of all odd numbers till N: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {
            sum_odd += i;
        }
    }

    cout << "Sum of odd numbers till " << num << " is: " << sum_odd << endl;

    // ---------------------------------------------
    // 5) Check if a number is Prime or Not
    // ---------------------------------------------
    int prime_or_not;
    cout << "\nEnter a number to check if it is prime or not: ";
    cin >> prime_or_not;

    bool isPrime = true;

    if (prime_or_not <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i < prime_or_not; i++) {
            if (prime_or_not % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    
    if (isPrime) {
        cout << prime_or_not << " is a Prime Number." << endl;
    } else {
        cout << prime_or_not << " is NOT a Prime Number." << endl;
    }


    // isPrime -> true  - > prime -> cout
    // isPrime -> false  - > prime -> cout
    
    // Third Approch factors.   - > Optimise Way
    // Run Your loop till 2 to root n
    // i * i <= n
    
    //  1 to root n it will be unique factors.
    // After root n into root n -> factors will be repetive.
    // Prime        ->  only two factors.
    //  Non - Prime ->   it can be anything and it can be reptive
    /*
    number = 12
    1 *  12
    2 * 6
    3 * 4
    -------- repeat.
    4 * 3
    6 * 2
    12 * 1
    
    // root n * root n
    e.g. n = 25
    1 * 25
    5 * 5
    25 * 1
    
    
    
    */
   if (prime_or_not <= 1) {
       isPrime = false;
   } else {
       for (int i = 2; i*i <= prime_or_not; i++) {
           if (prime_or_not % i == 0) {
               isPrime = false;
               break;
           }
       }
   }


   return 0;
}
