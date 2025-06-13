#include <iostream>
using namespace std;

int main() {
    // 1) Print numbers 1 to 5
    int i = 1;  // i is iterable
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }
    
    /*
    dry run:
    i =  1 <=  5  // code will executed condition is true// i++ -> i = 2
    i =  2 <=  5  // code will executed condition is true// i++ -> i = 3
    i =  3 <=  5  // code will executed condition is true// i++ -> i = 4
    i =  4 <=  5  // code will executed condition is true// i++ -> i = 5
    i =  5 <=  5  // code will executed condition is true// i++ -> i = 
    i =  6 <=  5  // code will not executed condition becomes false//


*/
    return 0;
}