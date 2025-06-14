#include <iostream>
using namespace std;

// Logic code
/*
// decNum answer  // binNum
// while(decNum > 0 ){
    //   int rem = rem % 2;  // for remender
    // decNum = decNum / 2;   // for Quetionat.
    // -> backward calculate. 
    // }

    we add  0 <- 1
    we mulyply 10 to power form convert. 
    // 101  <- 1*100 + 0*10 + 1*1
    // 102  <- 1*100 + 0*10 + 1*1

    for n = 5. 
    power variable
    2  |  5     -> 1*10^0  = 1
    2  |  2     -> 1*10^1  = 0
    2  |  1     -> 1*10^2  = 0
       |  0    
    */




    int decToBinary(int decNum){
        int ans = 0,pow = 1;

        while(decNum > 0){
            int rem = decNum % 2;
            decNum /= 2;

            ans += (rem * pow);
            pow *= 10;


        }
        return ans;
    }



    int main() {
    
        int decNum = 50;
        for (int i = 0; i <= 10; i++)
        {
            cout << decToBinary(i) << endl;
        }
        
    return 0;
}