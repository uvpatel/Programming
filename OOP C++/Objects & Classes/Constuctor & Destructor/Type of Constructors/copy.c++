#include <iostream>
using namespace std;

class A {
public:
    int val;
    
    // Parameterized constructor
    A(int x) {
        val = x;
    }
    
    // Copy constructor
    A(A& a) {
        val = a.val;
    }
};

int main() {
    A a1(20);
    
    // Creating another object from a1
    A a2(a1);
    
  	cout << a2.val;
    return 0;
}