#include<iostream>
using namespace  std;

// For displaying array elements take input of array and size as parameter.

void arraypass(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
   
}






int main(){
    int array[5] = {1,2,3,4,5};
    // arraypass(array,5);
    // cout << arraypass(array,5) << endl; this is invalid because cout not print function which has no return type.

}
