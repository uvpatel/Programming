#include <iostream>
using namespace std;

int main() {
    float num;
    cin >> num;
    cout << "Enter Number Check for Wheter it is Positive or Negative: " << endl;

    (num >= 0) ? cout << "The Number is Positive" : cout << "The Number is Negative " << endl;

    return 0;
}