#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(5,0);

    // size return size of vector
    cout << "Size of Vector: "<<vec.size() << endl; // return size .size() -> this is a method. we are calling.

    cout << "Before Push Back" << endl;
    for (int i : vec)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";



    // it is like appending element in first indexes.
    vec.push_back(25); // in this we are going to add push_back the 25 in this array.
    
    
    cout << "After Push Back" << endl;
    for (int i : vec)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
    

    // pop_back // deleating last element.in which we don't give any value it is known last elements indexs.


    vec.pop_back();


    // Front - it gives first value.
    
    cout << vec.front() << endl;
    
    // Back - it gives last value.
    cout << vec.back() << endl;

    // at - accessing get value at perticular index. it is basic another syntax for accessibilty.

    // Syntax:  cout << vec.at(i) << endl; 

    cout << vec.at(4) << endl; // Index we pass in  method.


    


    return 0;
}