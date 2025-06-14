#include <iostream>
using namespace std;

// 10 10 10 <- 2pow multiply and add.


    /*For 50:
    - 2^5 + 2^4 + 2^3 + 2^2 + 2^1 => 50*/

    // convert 1 1 0 0 1 0 1 into Decimal
    // -> 2^7 + 2^6 + 2^ 3+ 2^1  -> 128 + 56 + 8 +2 ->194
    // 194

int bintodecimal(int binNum){
    int anwer = 0, pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 10;
        anwer = rem * pow;
        binNum /= 10;
        pow *= 2;
    }
}

int main() {
    int binNum,rem;
    cin >> binNum;
    cout << "Enter Binary Number: ";

    cout << "The number to Decimal number: " << bintodecimal(binNum) << endl;
    return 0;
}