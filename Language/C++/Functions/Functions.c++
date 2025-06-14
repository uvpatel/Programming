#include <iostream>
using namespace std;

// Function Defination

void printHello(){
    cout << "Hello" << endl;  
}

int returntype(){
    return 1;
}

// num1 and num2 are called parameters.retrun type can be anything.
int sum(int num1,int num2){
    cout << "The Sum is "<< num1+num2 << endl;
    return num1+num2;
}

// min of 2 num
float minimum(float a , float b){  // parameters
    if (a < b)
    {
        // cout << "The Minimum number is" << a << endl;
        return a;
    }
    else if (b < a)
    {
        // cout << "The Minimum number is" << b << endl;
        return b;
     
    }
    else{
        cout << "Both Numbers are Equal" << endl;
    }

}

int main() {
    printHello();  // function call or function invoke is must.
    
    int return_value  = returntype();
    cout << "Val = " << return_value << endl;

    int num1,num2;
    cout << "Enter Two Number: " << endl;
    cin >> num1;
    cin >> num2;
    cout << "Below function will be executes sum of two number" << endl;
    cout << "Sum = "<<   sum(num1,num2) << endl;  // num1,num2 args

    // sum(num1,num2);  Function call
    
    cout << "Below function will be executes minimum of two number" << endl;
  
    cout << "Min = "<<   minimum(num1,num2) << endl;
    return 0;
}

