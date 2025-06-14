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

int print_prime(int n){
    bool isprime = true;
    int i = 2;
   for (; i <= n; i++) {
    if (isprimeornot(i)) {
        cout << i << endl;
    }
}
  return i;
}


// Fibonacci print (recursive)

int fibonacci(int n){

    for (int i = 0; i <= n; i++)
    {
        if (n == 0 || n  == 1)
        {
           return n;
        }
        else if (i == 2)
        {
            return 1;
           
        }
            return fibonacci(n-1) + fibonacci(n-2); 
    }

}

// Iterative approach
int fib(int n){

    int a = 0, b = 1, next;
    
    if (n >= 1)
    {
        cout << a << endl;
    }
    if (n >=2)
    {
        cout << b << endl;

    }
    
    for (int i = 0; i <= n; i++)
    {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;


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
    cout << print_prime(num) <<" ";

    int fibni;
    cout << "Enter the term for number of terms you want for printing fibonacci: " << endl;
    cin >> fibni;
    for (int i = 0; i < fibni; i++)
    {
        cout << fibonacci(fibni) << " ";
       
    }
    

    cout << "Using Normal function printing fibonacci: " << endl;
    cout << "Fibonacci Series: "<< fib(fibni) ;
    
    return 0;
}