#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr,int n,int m,int maxAllowedpages){
    int students = 1,pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedpages)
        {
            return false;
        }
        if (pages + arr[i] <= maxAllowedpages)
        {
            pages += arr[i];
        } else{
            students++;
            pages = arr[i];
        }
        
    }
    return students > m ? false : true;
}



int allocateBooks(vector<int> &arr,int n, int m){
    if (m > n)
    {
        return -1;
    }
    
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

    }

    int ans = -1;
    int st = 0, end = sum;

    while (st <= end)
    {
        int mid = st+ (end-st)/2;

        if (isValid(arr,n,m,mid))
        {
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
        
    }
    
    return ans;
}



















int main()
{


    return 0;
}

