#include <iostream>
#include <string>
using namespace std;

int main()
{
//     char strchar[] = {'U', 'r', 'v', 'i', 'l', '\n'};  // Character Array.
//     char str[] = "Urvil"; // sting literals 
    string str;
    cout << "Enter String: ";
    getline(cin,str);
    cout << str << endl;
    return 0;
}