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
    
    int smallest = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        smallest = min(Marks[i],smallest);
    }
    
    cout << "Smallest = " << smallest << endl;

    
    return 0;
}