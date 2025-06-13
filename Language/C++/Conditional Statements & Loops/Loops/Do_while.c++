#include <iostream>
using namespace std;

int main() {
    // do
    // {
    //     // Do some work
    // } while (condition);
    
    // return 0;



    // Diffrence between while and do while

    // Do while
    do
    {
        cout << "Hello , I am Do while" << endl;
    } while (3 > 6);  // it will be executed whether condition is true or false.
    
    //  while
    
    while (3 > 6)
    {
        cout << "Hello , I am in while" << endl;
        
    }
    // it will be not executed it depends on  condition is true or false.
    
    int i=0,n = 10;
    do
    {
        cout << i << " ";
        i++;
    } while (i < n);
    
    /*Output:
    0 1 2 3 4 5 6 7 8 9 10  (i<=n)
    */


    
    return 0;

}