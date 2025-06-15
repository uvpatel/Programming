#include <iostream>
using namespace std;

int main() {
    // Two Pointer Approch - Applicable in binary search and string.
    //  Time Complexity -> Linear -> O(n)
    //  Hasing and In Dynamic Programming it is useful.
    int sz = 4;
    int arr[] = {1,2,3,4};
    
    int start = 0,end = sz -1;
    while (start < end)
    {
        swap(arr[start],arr[end]);
        start++,end--;
    }
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << endl;
    }
    
    
    
    return 0;
}