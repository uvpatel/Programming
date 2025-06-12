#include <iostream>
using namespace std;

int main() {

    // Arithemetic Operator
    int num1,num2;
    cout << "Enter Two Numbers" << endl;
    cin >> num1,num2 ;
    
    cout << "Sum = "<< (num1+num2) << endl;
    cout << "Diffrence = "<< (num1-num2) << endl;
    cout << "Multiplication = "<< (num1*num2) << endl;
    cout << "Division (Qution) = "<< (num1/num2) << endl;
    cout << "Modulo = "<< (num1%num2) << endl;
    
    // Logical Operator

    cout << (num1 >  num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 <  num2) << endl;
    cout << (num1 <= num2) << endl;
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;
   
    // Unary Operator (Use in Loops)

    // cout <<"Post Increment: "<< num1++ << endl;
    // cout <<"Pre Increment: "<< ++num1 << endl;
    // cout <<"Pre decrement: "<< --num1 << endl;
    // cout <<"Post decrement: "<< num1-- << endl;


    return 0;
}