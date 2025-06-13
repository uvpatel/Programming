#include <iostream>
using namespace std;

int main() {
    int age, isProgrammer;

    cout << "Enter Age: " ;
    cin >> age;

    cout << "You are Programmer or not( 1 , 0)): ";
    cin >> isProgrammer;

    if (age >= 18)
    {
        cout << "You are above 18" << endl;
        if (isProgrammer)
        {
            cout << "You Are a Programmer." << endl;
        }
        else
        {
            cout << "You Are not a Programmer." << endl;
        }
        
    }else{
        cout << "You are Below 18" <<endl;
     }
    
    return 0;
}