// Linear search on Vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4};

    int target = 5;

    for (int i = 0; i < vec.size(); i++)
    {
        if (target == vec[i])
        {
            cout << "Element Found At index "<< i << endl;
            break;
        }
    }
    cout << "Not Found! 404!" << endl; // else for with else
    

    return 0;
}