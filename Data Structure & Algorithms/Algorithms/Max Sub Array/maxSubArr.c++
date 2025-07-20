#include <iostream>

using namespace std;

int main()
{

    int n = 5;

    int arr[] = {1, 2, 3, 4, 5};

    int maxSum = INT32_MIN;

    for (int st = 0; st < n; st++)
    {
        int currSum = 0;

        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
       
    }

    cout << "Maximum Subarray sum = "<<maxSum << endl;  // O(n^2)


    
    // Brute Force Approach // find the which is maximum array

    // Brute force try to find all the possible way to solve a problem.

    // Time complexity O(n^3)

    // We can do one optimisation to reduce the space complexity O(n^2)

    // starting point and we calculate from add new number only. we don't need to calculate common st we should add only new value only.

    // we declare currentSum = 0
    // cs(vrrent sum) += arr[end]

    // maxSum = max(cs,ms);
    // return ms

    return 0;
}