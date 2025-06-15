#include <iostream>
using namespace std;


int linear_search(int array[],int size,int target){
    for (int i = 0; i < size; i++)
    {  // FOUND
        if (array[i] == target)
        {
            return i;
            
        }
        
    }
   return -1;
}




int main() {
    // int element,target;
    // cout << "Enter element: " << endl;
    // cin >> element;
    // int array[element];
    // for (int i = 0; i < element; i++)
    // {
    //     cout << "Enter element: ";
    //     cin >> array[i];
        
    // }
    
    // cout << "Enter Target element: ";
    // cin >> target;


    int arr[] = {4,2,37,84,6};
    int size = 5;
    int target = 6;
    cout << linear_search(arr,size,target);

    return 0;
}

// -> Time Complexity => O( n)  => Linear Search
// -> Time Complexity => O(log n)  => Binary Search
