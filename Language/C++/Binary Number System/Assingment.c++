#include <iostream>
using namespace std;

/*
1)input n
2) check n> 0 or not run loop
3) rev = rev*10 + rem
*/
int reverse(int num){
    int rev = 0,rem ;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev*10 + rem;
        num /=10;
    }
    // cout << rev << endl;
        return rev;
    }

int power_of_2(int num){
    bool  is_power_2 = true;
    int pow = 1; //(2^0)
    while (pow <= num)
    {
        if (pow == num)
        {
            
            is_power_2 = false;
        }
        is_power_2 = true;
        
        pow *= 2; // it should be below and for checking 
    }
        return is_power_2;
        
}

int wol_power_of_2(int num){
    bool is_pow_2 = true;
    if (num > 0 && (num & (num - 1)) == 0)
    {
        is_pow_2 = true;
    }
    else{

        is_pow_2 = false;
    }
    return is_pow_2;
}

int main() {
    // Solve for: 
    //  6 & 10 -> 0110 & 1010 -> 0010 -> 2
    //  6 | 10 -> 0110 | 1010 -> 1110 ->  14
    //  6 ^ 10 -> 0110 & 1010 -> 1100  ->  12
    
    // Solve for: 
    //  10 << 2 -> 10*2^2 => 10*4  => 40
    //  10 >> 1 -> 10/2^1 => 10/2 =>  5
     

    // int a,b;
    // a = 6, b = 10;
    // cout << (a & b) << endl;
    // cout << (a | b) << endl;
    // cout << (a ^ b) << endl;
    // cout << (10 << 2) << endl;
    // cout << (10 >> 1) << endl;
    
    // Figure out how to find if a number is power of 2 without any loop.

    

        int number;
        cout << "Enter number: ";
        cin >> number;
    
        cout << "The Reverse number: " << reverse(number) << endl;
        int n;
        cin >> n;
        cout << "The Power of 2 or not(if it is print 0 it is not 2's power either it will be 1's power)."<< power_of_2(n) << endl;


        cout << "Without loop check power of 2 for " << n << " output: "<< wol_power_of_2(number) << endl;
    return 0;
}