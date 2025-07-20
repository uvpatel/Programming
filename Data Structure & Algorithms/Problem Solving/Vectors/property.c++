#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    vec.push_back(5);
    vec.push_back(1);
    vec.push_back(2);

    cout << vec.size() << endl; // 4
    cout << vec.capacity() << endl; // 5
   
//    Capacity is double when we add element 
    vec.push_back(4);


    return 0;
}