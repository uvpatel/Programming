#include <iostream>
using namespace std;

int main() {
    int count;
    cout << "Enter How many number you want to perform calculation";
    cin >> count;

    float number1,number2;
    char op;
    for (int i = 0; i < count; i++)
    {
        cout << "Enter  Number: ";
        cin >> number1;
        cout << "Enter Operator: ";
        cin >> op;
        cout << "Enter  Number: ";
        cin >> number2;
                
        if (op == '+')
        {
            cout << "The Sum of Two number is: "<< number1 + number2  << endl;
        }
        else if (op == '-')
        {
            cout << "The Subtraction of Two number is: "<< number1 - number2  << endl;
        }
        else if (op == '*')
        {
            cout << "The multiplication of Two number is: "<<  number1 * number2 << endl;
        }
        else if (op == '/')
        {
            cout << "The Division of Two number is: "<<  number1 / number2<< endl;
        }
        else if (op == '%')
        {
            cout << "The remender of (number1 % number2) is: "<<  (int)number1 % (int)number2<< endl;
        }
        else{
            cout << "Enter Valid Operator" << endl;
        }
        
    }
    return 0;
}