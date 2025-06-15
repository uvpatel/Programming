#include <iostream>
using namespace std;


// Functional Approach
// int Smallest(int size,int nums[]){
//     int nums[] = {1,100,99,56};
//     int size = sizeof(nums)/sizeof(int);

//     int smallest = INT32_MAX;
    
//     for (int i = 0; i < size; i++)
//     {
//         if (nums[i] < smallest)
//         {
//             smallest = nums[i];

//         }
        
//     }
    
//     return smallest;
// }













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
