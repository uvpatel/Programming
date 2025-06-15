#include <iostream>
using namespace std;

//  For Performing Search Operation.

//  We use Linear Search
int main() {
    int element,index = 0;
    cout << "Enter element: ";
    cin >> element;
    int array[element];
    int size = sizeof(array) / sizeof(int);

    //input array
    for (int i = 0; i < element; i++)
    {
        cin >> array[i];
    }
    

    int target ;
    cout << "Enter the element you want to search in Array: ";
    cin >> target;
    
    for (int i = 0; i < size; i++)
    {
        if (target == array[i])
        {
            cout << "Element found at " << i << " index." << endl;
        }
         cout << "Element is not Exisist in This Array." << endl;
       
        index++;
        
    }
    
    
    return 0;
}