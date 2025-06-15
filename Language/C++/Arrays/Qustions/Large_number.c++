#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "How Many Student's Marks you want to store: ";
    cin >> num;
    float Marks[num];
    
    int size = sizeof(Marks) / sizeof(int) ;

    // Input loop for taking user input of marks
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Marks: ";
        cin >> Marks[i] ;
       
    }
    
    

    float MaxNumber = Marks[0];

    for (int j = 0; j < size; j++)
    {
        if (MaxNumber < Marks[j])
        {
           MaxNumber =   Marks[j] ;
        }
        
    }
    cout << "The Highest Marks in the Class is: " <<MaxNumber << endl;
    
    


    
    return 0;
}