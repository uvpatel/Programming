#include <iostream>
#include <vector>

using namespace std;

int prifix(int arr[],int sz,int index){

    int prifix_ = 1, i;
    for (i = 0; i < sz - 1 ; i++)
    {
        prifix_ *= arr[i];
        
    }
    return prifix_;
}


int main() {
    int nums[] = {1,2,3,4};
    int sz  = sizeof(nums)/sizeof(int);
    int index;
    cout << "Enter index you want to count prifix : " << endl;
    int leftprod, rightprod; // two pointer approach, prefix and suffix
    
    
    // int prifix_ = [];
    // for (i = 1; i < sz  ; i++)
    // {
    //     prifix_[i] = prifix_[i-1] * nums[i-1];
        
    // }
    // cout << prifix_ << endl;
    

    // Suffix
    int suffix[sz];


    for (int i = sz - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i+1];
    }
    

    // cout << prifix(nums,sz) << endl;

 
    



    return 0;
}