#include <iostream>
using namespace std;

int main() {
  
    int arr1[] = {1,2,3,4};
    int arr2[4];

    int size = sizeof(arr1) / sizeof(int);
    
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }
    cout << "Copied array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";    

    }
    
    
    

    return 0;
}