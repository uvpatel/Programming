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
    
    

    float MinimumMarks = 0;

    for (int j = 0; j < size; j++)
    {
        if (MinimumMarks > Marks[j])
        {
            Marks[j] = MinimumMarks;
        }
        
    }
    cout << "The Lowest Marks in the Class is: " <<MinimumMarks << endl;
    
    


    
    return 0;
}