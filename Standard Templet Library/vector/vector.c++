#include <iostream>
#include <vector>
using namespace std;

// Dynamic array = vector.

int main() {
    
    vector<int> vec; // initialise

    // cout << vec.size() << endl; // return size of vector

     vec = {1,2,3};


    vector<int> vec1(3,10); // vec1(size,num)
    
    for (int i = 0; i < vec1.size(); i++)
    {
       cout << vec1[i] << " ";
    }
    



    return 0;
}