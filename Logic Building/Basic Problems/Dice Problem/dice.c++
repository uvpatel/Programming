#include <iostream>
using namespace std;


int dice(int n){
    if (n == 1)
    {
        return 6;
    }
     else if (n == 2)
    {
        return 5;
    }
     else if (n == 3)
    {
        return 4;   
    } 
    else if (n == 4)
    {
        return 3;
    }
    else if (n == 5)
    {
        return 2;
    }
    
    
    
    
}




int main() {
    cout << dice(5);
    return 0;
}