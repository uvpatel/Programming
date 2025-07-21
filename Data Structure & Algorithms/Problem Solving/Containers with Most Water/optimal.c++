#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int> &height)
{
    int n = height.size();
    int maxwater = 0, lp = 0, rp = n - 1;
    while (lp < rp)
    {
        int width = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currwater = ht * width;
        maxwater = max(maxwater, currwater);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxwater;
}

int main()
{
    vector<int> height = {1,2,3,4};
    cout << maxArea(height);

    return 0;
}
