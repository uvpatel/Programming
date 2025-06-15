#include <iostream>
using namespace std;

int sum_Arr(int arr[],int sz){
    int sum = 0,product = 1;
    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
        
    }
    return sum;
}

int prod_Arr(int arr[],int sz){
    int product = 1;
    for (int i = 1; i < sz; i++)
    {
        product *= arr[i];
        
    }
    return product;
}

int min(int arr[],int sz){
    int minimum = INT32_MAX;
    // sz = sizeof(arr)/sizeof(int);
    for (int i = 0; i < sz; i++)
    {
        if (minimum > arr[i])
        {
            minimum = arr[i];
        }
    }
    cout << minimum << endl;
    return minimum;
}

int max(int arr[],int sz){
    // sz = sizeof(arr)/sizeof(int);
    int maximum = INT32_MIN;
    for (int i = 0; i < sz; i++)
    {
        if (maximum < arr[i])
        {
            maximum = arr[i];
        }
        
    }
    
    return maximum;
    
}

int all_the_unique(int arr[],int sz){
    int  dup_cancel;
    for (int i = 0; i < sz; i++)
    {
     dup_cancel ^= arr[i+1];

    }
    return arr[sz];
}





int intersect(int arr1[],int arr2[],int sz1,int sz2){

    
    for (int i = 0; i < sz1; i++)
    {
        if (arr1[i] == arr2[i])
        {
           int add[ ] = arr1[i] 
            
        }
        
    }
    
}




int main() {
    int array[] = {1,2,3,1};
    int sz = 3;
    // cout <<"The Sum of Array element: "<< sum_Arr(array,3) ;
    // cout <<"The Product of Array element: "<< prod_Arr(array,3) <<" ";
    
    // int min_ = minimum(array[3],sz);
    // int max_ = max(array[3],sz);

    int maximum = max(array,sz);
    int minimum = min(array,sz);
    cout << "Max = " << maximum<< endl;
    cout << "Min = " << minimum << endl;

// swapping the void function
swap(maximum, minimum);
cout << "maX" << maximum <<minimum;

cout << "After swapping maximum is " << maximum << "Minimum is: " << minimum << endl;
for (int i = 0; i < 3; i++)
{
        swap(maximum,minimum);
        
        cout << array[i] << endl;
    }
    



    // // dupcancel
    // cout << "Now duplicate function will be cancel out." << endl;


    // all_the_unique(array,3);



    int arr1[] = {1,2,3};
    int arr2[] = {1,2,3};




    return 0;
}