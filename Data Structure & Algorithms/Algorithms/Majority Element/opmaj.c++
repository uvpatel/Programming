#include <iostream>
#include <vector>

using namespace std;

// sorted array

// return pair in sorted array with target sum.

// Optimized ->  2 pointer approach

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;         // answer vector
    int n = nums.size();     // size
    int st = 0, end = n - 1; // st and end
    while (st < end)
    {
        int pairSum = nums[st] + nums[end];
        if (pairSum > target)
        {
            end--;
        }
        else if (pairSum < target)
        {
            st++;
        }
        else
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}

// Time Complexity O(n)

int main()
{
    vector<int> nums = {1, 2, 3, 48};
    int target = 4;
    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " , " << ans[1] << endl;
    return 0;
}