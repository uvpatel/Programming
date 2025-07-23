class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
    int sz = nums.size();
    vector<int> ans(sz,1);

    for (int i = 1; i < sz; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int suffix = 1;

    for (int i = sz - 1; i >= 0; i--)
    {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    return ans;
    
    }
};