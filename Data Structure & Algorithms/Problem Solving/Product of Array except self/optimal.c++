#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> ans;
    int sz = nums.size();
    for (int i = 1; i < sz; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    int suffix = 0;
    for (int i = sz - 2; i >= 0; i--)
    {
        suffix = suffix * nums[i + 1];
        ans[i] *= suffix;
    }
    return ans;
}

int main()
{
    vector<int> vec = {1,2,3,4};
    cout << productExceptSelf << endl;

    return 0;
}

