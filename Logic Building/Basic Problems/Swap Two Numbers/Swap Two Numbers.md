# Problem statement & approach
## Problem statement
- Swap Two Numbers. 
- Given two numbers a and b, the task is to swap them.
Examples : 
```t
Input: a = 2, b = 3
Output: a = 3, b = 2
```

##  Approach
- [Naive Approach] Using Third Variable
- [Expected Approach] Without using Third Variable
- [Alternate Approach] Built-in Swap

### [Naive Approach] Using Third Variable
>The idea is to use a third variable, say temp to store the original value of one of the variables during the swap.

- Store the value of a in temp.
- Assign the value of b to a.
- Assign the value of temp to b.

```python
Num1 = int(input("Enter number "))
Num2 = int(input("Enter number "))


temp = Num1
Num1 = Num2
Num2 = temp

```
### [Expected Approach] Without using Third Variable

> The idea is to swap two numbers using Arithmetic operators or Bitwise operators. To know more about the implementation, please refer Swap Two Numbers Without Using Third Variable.


#### Swap Two Numbers Without Using Third Variable
>Given two variables a and y, swap two variables without using a third variable. 

Examples:
```t
Input: a = 2, b = 3
Output: a = 3, b = 2
```

##### Methods
- Using Arithmetic Operators
- Using Bitwise XOR
- Built-in Swap


###### 1. Using Arithmetic Operators
- Store the sum of a and b in a (a = a + b).
- Get the original value of a, that is (sum - original value of b)and store it in b (b = a - b).
- Get the original value of b, that is (sum - original value of a)and store it in a (a = a - b).

```python
a = 2
	b = 3
	print("a =", a, " b =", b)
    
	a = a + b
	b = a - b
	a = a - b
    
	print("a =", a, " b =", b)
```

- Time Complexity: O(1)
- Auxiliary Space: O(1)
 
###### 2. Using Bitwise XOR
> The idea is to use the properties of XOR to swap the two variables.

- **a = a ^ b**: Store the Bitwise XOR of a and b in a. Now, a holds the result of (a ^ b).
- **b = a ^ b**: Bitwise XOR the new value of a with b to get the original value of a. This gives us, b = (a ^ b) ^ b = a.
- **a = a ^ b**: Bitwise XOR the new value of a with the new value of b (which is the original a) to get the original value of b. This gives us, a = (a ^ b) ^ a = b.

```python
a = 2
	b = 3
	print("a =", a, " b =", b)
    
	a = a ^ b
	b = a ^ b
	a = a ^ b
    
	print("a =", a, " b =", b)
```

####  [Alternate Approach] Built-in Swap
```c++
#include <iostream>
using namespace std;

// [Alternate Approach] Built-in Swap
int main() {
    int a,b;
    cin >> a,b;
    cout << "The before swap Value of a = %d, b = %d" <<a , b;
    swap(a,b);
   cout << "The after swap Value of a is " << a << ", b is " << b << endl;
    return 0;
}
```