#include <iostream>
#include <vector>
using namespace std;

int BS(vector<int> vec, int target, int st, int end){
    if (st <= end){
    int mid = st + (end - st) / 2;

        if (target > vec[mid]){
            return BS(vec, target, mid + 1, end);
        }
        else if (target < vec[mid]){
            return BS(vec, target, st, mid - 1);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main()
{

    vector<int> vec1 = {1, 2, 3, 4};
    int end = (vec1.size()) - 1;
    cout <<BS(vec1, 4, 0, end);
    return 0;
}