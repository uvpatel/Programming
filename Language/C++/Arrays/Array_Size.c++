#include <iostream>
using namespace std;

int main()
{

    // int Array[5] = {1,2,3,4,5};
    int Marks[] = {1, 2, 3, 4, 5};
    // cout << sizeof(Marks) << endl; // total size = datatypesize * elements
    int size = sizeof(Marks) / sizeof(int) ;

    // loops : 0 to size -1
    for (int i = 0; i < size; i++)
    {
        cout << Marks[i] << " ";
    }
    

    
    return 0;
}