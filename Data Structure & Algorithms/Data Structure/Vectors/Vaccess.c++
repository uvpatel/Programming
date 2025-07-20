#include <iostream>
using namespace std;
#include<vector>


int main() {
    vector<int> vec(4,1);

    // we use special loop called for each loop.
    // for each loop, for(iterator  ,vec)
    /*Iterator store index on which index it will store which value.

    iterator type is based on vector type.
    */

    for(int i : vec){
        cout << vec[i] << " ";
    }

    vector<char> alpha = {'a','b','c'};

    // when we use container we use this loop frequently.
    
    for(char c : alpha){
        cout << alpha[c] << " ";
    }



    return 0;
}