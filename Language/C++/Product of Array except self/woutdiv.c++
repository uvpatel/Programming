#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    
    // Bruteforce - O(n^2) without division.
    
    for (int i = 0; i < 4; i++)
    {
        int prod = 1;
        
        for (int j = 0; j < 4; j++)
        {
            if (i != j)
            {
                prod *= arr[j];
            }
            arr[i] = prod;
            
        }
    }
    

    // cout << "Product except self result is : "<<prod/arr[targetIndex] << endl;

    return 0;
}