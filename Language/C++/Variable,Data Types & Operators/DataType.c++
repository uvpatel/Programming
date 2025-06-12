#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    // integer data type
    int age = 18;
    cout << sizeof(age) << endl;  // 4
    cout << typeid(age).name() << endl; // return i <int>
    // float data type
    float cgpa = 10.0;
    cout << sizeof(cgpa) << endl;  // 4
    cout << typeid(cgpa).name() << endl;  // return f <float>
    
    // char data type
    char ch = 'A';
    
    cout << sizeof(ch) << endl;   // 1
    cout << typeid(ch).name() << endl;  // return c <char>
    
    // bool data type
    bool isProgrammer = true;
    
    cout << sizeof(isProgrammer) << endl;  // 1
    cout << typeid(isProgrammer).name() << endl;   // return b <bool>
    
    //double data type
    
    double number = 1666551544545454545454.28484;
    cout << sizeof(number) << endl;   // 8
    cout << typeid(number).name() << endl;   // return d  <double>
    return 0;
}