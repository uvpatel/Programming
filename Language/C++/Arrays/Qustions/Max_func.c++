#include <iostream>
using namespace std;

int main()
{

   int num;
   cout << "How Many Student's Marks you want to store: ";
   cin >> num;
    int Marks[num];
    // cout << sizeof(Marks) << endl; // total size = datatypesize * elements
    int size = sizeof(Marks) / sizeof(int) ;

    // Input loop for taking user input of marks
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> Marks[i] ;
       
    }
    
    int Largest = INT32_MIN;  // it is minus infinity
    for (int i = 0; i < size; i++)
    {
        Largest = max(Marks[i],Largest);
    }
    
    cout << "Largest = " << Largest << endl;

    
    return 0;
}