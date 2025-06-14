// # Assignment Problem for Function

#include <iostream>
using namespace std;

//check prime or not
int isprimeornot(int n){
    bool isprime = true;
    if (n <= 1)
    {
        isprime = false;
    }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
        isprime = false;
        break; // Optimization: no need to check further
    }
}
    return (int)isprime;
}

// Print prime

void print_prime(int n){
    bool isprime = true;

   for (int i = 2; i <= n; i++) {
    if (isprimeornot(i)) {
        cout << i << endl;
    }
}

}


int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    cout << isprimeornot(number) << endl;

    int num;
    cin >> num;
     print_prime(num);


    return 0;
}