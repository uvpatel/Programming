#include <iostream>
#include <vector>


using namespace std;

int main() {

    vector<int> vec;
    
    vec.push_back(4);
    vec.push_back(5);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] <<" " <<endl;
    }
    
    vec.pop_back(); // remove last element
    
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " " << endl;
    }
    
    
    vector<int> vec3(vec);
    for (int i = 0; i < vec3.size(); i++)
    {
        cout << vec3[i] << " " << endl;
    }
    


    return 0;
}