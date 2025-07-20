#include <iostream>
#include<vector>
using namespace std;


// & pass by refrence
void revVector(vector<int> &vec, int sz){

    int start = 0, end = sz - 1;

    while (start < end)
    {
        swap(vec[start],vec[end]);
        start++,end--;
    }
    
    for (int i = 0; i < sz; i++)
    {
        cout << vec[i] << " ";
    }
    

} 





int main() {
    vector <int> vec = {1,2,3,4};
    
    revVector(vec,4);

    return 0;
}