#include <iostream>
using namespace std;

int main() {
    // 1) Use while loop for finding sum of all odd number 1 to N

   int  sum_odd = 0,number,i = 1;
   cout << "Enter Number: ";
   cin >> number;
   while (i <= number)
   {
    if (i % 2  != 0)
    {
        sum_odd +=i;
    }
    i++;
  
   }
   cout << "The sum of odd number using while "<< sum_odd << endl;
   
   // 2)  use forloop - even sum
   
   int num, sum_even = 0;
   cout << "Enter Number: ";
   cin >> num;
   for (int i = 0; i < num; i++)
   {
       if (i % 2 == 0)
       {
           sum_even += i;
        }
        
        
    }
    cout << "The sum of even number using for "<< sum_even<< endl;
    
    
    
    // 3) Sum of all numbers from 1 to N which are divisible by 3.

    int SumdivThree = 0, count;
    cout << "Enter number you want till sum: ";
    cin >> count;
    for (int i = 0; i <= count; i++)
    {
        if (i % 3 == 0 )
        {
            SumdivThree += i;
        }
        else{
            continue;
        }
    }
    cout << "The Sum of Divisible by three: " << SumdivThree << endl;
    
    
    // 4) Print Factorial of a number N
    int Num,fact = 1;
    cout << "Enter Number: ";
    cin >> Num;
    for (int init = 1; init <= Num; init++)
    {
        if (Num == 0 )
        {
            
            cout << "The Factorial of Given Number "<<Num <<"is: " << 1 << endl;
            break;
        }
        fact *= init;
    }
    cout << "The Factorial of Given Number "<<Num <<"is: " << fact << endl;
    
    
    
    
    
    
    
    
    
    
    return 0;



}