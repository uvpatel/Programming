#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
      
        fact *= i;
    }
    return fact;
}


int main() {
    int n,r,nCr;
    cout << "Enter n: ";
    cin>>n;
    cout << "Enter r: ";
    cin>>r;
    int factorail_n = factorial(n); // store n factorial 
    // cout << factorail_n << endl;
    int factorial_r = factorial(r); // store r factorial
    // n-r
    int fatorial_nr = factorial(n-r);

    // Binomial coefficient
    nCr = (factorail_n)/(factorial_r*fatorial_nr);

    cout << "The Bionomial Coeficient nCr is "<< nCr << endl;
    return 0;
}