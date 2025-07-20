#include <iostream>
#include <vector>
#include <algorithm>  // algorithm
using namespace std;

// Brute Force TC  O(n)
int majorityElement(vector<int>&nums){
    int n = nums.size();

    for (int val : nums)
    {
       int freq = 0;

       for(int el : nums){
        if (el == val)
        {
            freq++;
        }
        if (freq > n/2)
        {
            return val;
        }
        
       }
        return -1;
    }
    
}


// Optimize based on Sorting.


// 1) sort array //  O(logn)
// 2) sort array // O(n)

// [0,0,1,1,2,2,2,2]
// freq = 0 first and then reset i updated.
// reset to 1.

// for sortin anymethod use we use inbuilt sort.


// Majority Element
// freq = 1; ans = nums[0];



int OpMJ(vector<int>&nums){
    int n = nums.size();

    // freqency counter and ans
    int freq = 1,ans = nums[0];
    // sort array first

    sort(nums.begin(),nums.end());

    
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i-1])       
        {
           freq++;
        } else{
            freq = 1;
            ans = nums[i];
        }
    }
    if (freq > n/2)
    {
        return ans;
    }
    
    return ans;
}














int main() {

    vector<int> vec = {1,5,15,11,1,1,1};
    cout<< majorityElement(vec);


    return 0;
}