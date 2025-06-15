#include <iostream>
using namespace std;

int main() {
    
    
    int nums[] = {1,100,99,56};
    int size = sizeof(nums)/sizeof(int);

    int smallest = INT32_MAX;
    
    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];

        }
        
    }
    cout << smallest << endl;



    return 0;
}