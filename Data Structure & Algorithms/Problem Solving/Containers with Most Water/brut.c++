#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> height)
{
    int ans = 0;
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int width = j - i;
            int ht = min(height[i], height[j]);
            int area = width * ht;
            ans = max(ans, area);
        }
    }
    return ans;
}

int main()
{
    
    vector<int> height = {1, 2, 34, 5};
    cout << maxArea(height);
}