#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> vec,int target){
    int st = 0,end = vec.size() - 1;
    
    while (st <= end)
    {
        int mid = (st + end )/ 2;
        if (target > vec[mid])
        {
            st = mid + 1; // First Half
        }else if (target < vec[mid])
        {
            end = mid - 1;  // Second Half
        }else{
            return mid;
        }
    }
    return -1;

}









int main() {
    vector<int> vec1 = {1,2,3,4,12};
    vector<int> vec2 = {1,2,4,12};

    int target = 4;
    
    cout << binarySearch(vec2,target) << endl;
    

    return 0;
}