#include <iostream>
using namespace std;

int main() {
    
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5};
    int arr3[] = {1,2,3,4,6};

    int sz = sizeof(arr1)/sizeof(int);

    int iseq = 1;
    for (int i = 0; i < sz; i++)
    {
        if (arr1[i] != arr2[i])
        {
        iseq = 0;
        cout << "Arrays differ at index: "<<" " << i << " " << i << arr1[i] << " " << i << arr2[i];
        }
    }
    if (iseq)
    {
        cout << "Both arrays are identical" << endl;        
    }
    else{
        cout << "Array are not identical" << endl;
    }
    
    return 0;
}