# Problem statement & approach
- Find the number closest to n and divisible by m
- Given two integers n and m (m != 0). Find the number closest to n and divisible by m. If there is more than one such number, then output the one having maximum absolute value.

```t
Example:
Input: n = 13, m = 4
Output: 12
Explanation: 12 is the closest to 13, divisible by 4.
```
## Approach
- [Naive Approach] Iterative Checking


### [Naive Approach] Iterative Checking
>The basic idea is to start checking from n - m to n + m one by one and tack the closest number.

```python
# Python implementation to find the number closest to n
# and divisible by m
def closest_number(n, m):
    # find the quotient
    closest = 0
    min_difference = float('inf')

    # Check numbers around n
    for i in range(n - abs(m), n + abs(m) + 1):
        if i % m == 0:
            difference = abs(n - i)

            if difference < min_difference or \
            			(difference == min_difference and abs(i) > abs(closest)):
                closest = i
                min_difference = difference
    return closest

  
if __name__ == "__main__":
  n = 13
  m = 4
  print(closest_number(n, m))
```


##### c++
```c++
// C++ implementation to find the number closest to n
// and divisible by m
#include <bits/stdc++.h>
using namespace std;

int closestNumber(int n, int m) {
    // find the quotient
   int closest = 0;
    int minDifference = INT_MAX;

    // Check numbers around n
    for (int i = n - abs(m); i <= n + abs(m); ++i) {
        if (i % m == 0) {
            int difference = abs(n - i);

            if (difference < minDifference || 
               (difference == minDifference && abs(i) > abs(closest))) {
                closest = i;
                minDifference = difference;
            }
        }
    }
    return closest;
}

int main() {
    int n = 13, m = 4;
    cout << closestNumber(n, m) << endl;
    
    return 0;
}
```

- Time Complexity - O(m)
- Space Complexity - O(1)


### [Expected Approach] By finding Quotient
>We find the value of n/m. Then we find closest of two possibilities. One is q * m other is (m * (q + 1)) or (m * (q - 1)) depending on whether one of the given two numbers is negative or not.



##### c++
```c++
// C++ implementation to find the number closest to n
// and divisible by m
#include <bits/stdc++.h>
using namespace std;

int closestNumber(int n, int m) {
    // find the quotient
    int q = n / m;
    
    // 1st possible closest number
    int n1 = m * q;
    
    // 2nd possible closest number
    int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));
    
    // if true, then n1 is the required closest number
    if (abs(n - n1) < abs(n - n2))
        return n1;
    
    // else n2 is the required closest number    
    return n2;    
}

int main() {
    int n = 13, m = 4;
    cout << closestNumber(n, m) << endl;
    
    return 0;
}
```



##### 
- Time Complexity - O(1)
- Space Complexity - O(1)

