#include <iostream>

// in interview's ask which is specific for vector.and it is best practice.

#include <vector> // This is a Specific for Vector. cleaner approch.

// #include<bits/c++.h>  //it can do error in namespace and also the in this some task are not nessecassry which are we include and use unessarily. cleaner approch.



using namespace std;

int main()
{
    // vector<int> vec; // 0 <- declaration
    
    // cout << vec[0] << endl; // segmentation error.if elements are not present.

    
    vector<int> vec = {1,2,3};

    // cout << vec[0] << endl; access value at perticular index.


    //  Accessing all the elements.
    for (int i = 0; i < 3; i++)
    {
        cout << vec[i] << " ";
    }
    
    // vector <int> vec(3,0) // first size of the vec , // on index which value will be there.


    vector<int> Vector (5,0);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << Vector[i] << " "; // 0 0 0 0 0 
    // }
    
    

    return 0;
}