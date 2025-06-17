#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> nums = {1,2,3,4,5};
    int currSum = 0,maxSum = INT32_MIN;

    for (int val : nums)
    {
        currSum += max(currSum,maxSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
        
        return maxSum;
    }
    


    return 0;
}