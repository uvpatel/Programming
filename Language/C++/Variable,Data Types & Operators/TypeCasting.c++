#include <iostream>
using namespace std;

int main() {

    // Conveting character into integer value.implicity convertion

    char grade = 'A';  // 65

    int value = grade;
    cout << value << endl;


    // Explicit convertion

    float marks = 99.9;

    cout << int(marks) << endl;  // returns 99 always give before decimal.

    cout << (5 / (double)2) << endl;  // it returns 2.5

    // Another thing to remeber

    int ans = (5 / (double)2);
    cout << ans << endl;  // it returns 2 

    return 0;
}