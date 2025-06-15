#include <iostream>
using namespace std;


// For displaying array elements take input of array and size as parameter.

// void arraypass(int arr[],int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
// }


int main() {
    // Find the index of smallest/Largest in Array
   
    int elements;
    cout << "Enter how many elements you want: ";
    cin >> elements;
    int marks[elements];
    int smallest = INT32_MAX;
    
    int index = 0;


    for (int i = 0; i < elements; i++)
    {
        cout << "Enter Elements of array at index " << i << " :";
        cin >> marks[i];
    }
    
    for ( int i = 0; i < elements; i++)
    {
        if (marks[i] < smallest)
        {
            smallest = marks[i];
            index++;
        }
        
    }
    cout << smallest << " At index: " << index << endl;
    

    
   
   


    return 0;

}