#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4};

    int size = sizeof(arr) / sizeof(int);

    cout << "Original Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //  Reverse array
    for (int i = size - 1; i >= 0; i--)
    {
        // cout << arr[i] << " ";
    }
    


    // Method  2

    int arr2[] = {1,2,3};
    int sz = sizeof(arr2)/sizeof(int);
    int i ,temp;
    for (int i = 0; i < sz/2 ; i++)
    {
        temp = arr2[i];
        arr2[i] = arr2[sz-i-1];
        arr2[sz-i-1] = temp;
    }
    cout << "Reverse Array: " << endl;

    for (int i = 0; i < sz; i++)
    {
        cout << arr2[i] << " ";
    }
    
    
    // Method 3 : This method not work for c++: values are overrighten
    
    // int arr3[] = {1,2,3,4,5};
    
    // int siz = sizeof(arr3)/sizeof(int);
    
    // for (int i = 0; i < siz/2; i++)
    // {
    //    arr3[i] = arr3[siz - i - 1]; 
    // }
    
    // cout  << endl;
    // cout << "Array 3" << endl;

    // for (int i = 0; i < siz; i++)
    // {
    //     cout << arr3[i] <<" ";
    // }
    

    
    
    
    
    
    // Method 4:

    int arr4[] = {1,2,3};
    int s = sizeof(arr4)/sizeof(int);
 
    for (int i = 0; i < s/2 ; i++)
    {
        arr4[i] = arr4[i] ^ arr4[s - 1];  // a = a ^ b
        arr4[s-1] = arr4[i] ^ arr4[s-1]; // b = a ^ b
            arr4[i] = arr4[i] ^ arr4[s-1]; //  a = a ^ b

    }
    cout  << endl;
    cout << "Reverse Array: " << endl;

    for (int i = 0; i < s; i++)
    {
        cout << arr4[i] << " ";
    }


    return 0;
}