# Problem statement & approach
## Problem statement
- Problem Statement - Program to find sum of first n natural numbers
- Given a positive integer n, we have to find the sum of squares of first n natural numbers. 
Examples : 
```t
Input : n = 2
Output: 5
Explanation: 1^2+2^2 = 5
```

##  Approach
- [Naive Approach] Loop Based Summation
- [Expected Approach] Formula Based Method

### [Naive Approach] - Adding One By One - O(n) Time and O(1) Space
>The idea for this naive approach is to run a loop from 1 to n and sum up all the squares. 

```python
# List Comprihansion
def summation(n):
    return sum([i**2 for i in 
               range(1, n + 1)])

if __name__ == "__main__":
    n = 2
    print(summation(n))
```

```python
number = int(input("Enter number: "))

sum_of_squre = 0

for i in range(1,number+1):
    sum_of_squre += (number*number)*i

```


### [Expected Approach]- Using Mathematical Formulae - O(1) Time and O(1) Space

```t
The idea for this approach is to use the mathematical formulae for the sum of squares of first n natural numbers. 

12 + 22 + ......... + n2 = n(n+1)(2n+1) / 6

We can prove this formula using induction. We can easily see that the formula is true for n = 1 and n = 2 as sums are 1 and 5 respectively.

Let it be true for n = k-1. So sum of k-1 numbers
is (k – 1) * k * (2 * k – 1)) / 6

In the following steps, we show that it is true 
for k assuming that it is true for k-1.

Sum of k numbers = Sum of k-1 numbers + k2
           = (k – 1) * k * (2 * k – 1) / 6 + k2
           = ((k2 – k) * (2*k – 1) + 6k2)/6
           = (2k3 – 2k2 – k2 + k + 6k2)/6
           = (2k3 + 3k2 + k)/6
           = k * (k + 1) * (2*k + 1) / 6
```

>Example : Find sum of squares of the first 3 natural numbers

```t
SSolution:
= 3 * (3 + 1) * (2*3 + 1) / 6
= (3 * 4 * 7) / 6
= 84 / 6
= 14
```
#### How does this work?

```t
We can prove this formula using induction.

It is true for n = 1 and n = 2
For n = 1, sum = 1 * (1 + 1)/2 = 1
For n = 2, sum = 2 * (2 + 1)/2 = 3

Let it be true for k = n-1.

Sum of k numbers = (k * (k+1))/2
Putting k = n-1, we get
Sum of k numbers = ((n-1) * (n-1+1))/2
                 = (n - 1) * n / 2

If we add n, we get,
Sum of n numbers = n + (n - 1) * n / 2
                 = (2n + n2 - n)/2
                 = n * (n + 1)/2
```

```python


# [Expected Approach] Formula Based Method
print(f"The sume of {number} is {(number*(number+1)*(2 + number + 1))/6}, using Formula based Method")

- Time Complexity - O(1)
- Space Complexity - O(1)

```


### Divide and Conqure (Avoiding the overflow: )
>In the above method, sometimes due to large value of n, the value of (n * (n + 1) * (2 * n + 1)) would overflow. We can avoid this overflow up to some extent using the fact that n*(n+1) must be divisible by 2 and restructuring the formula as (n * (n + 1) / 2) * (2 * n + 1) / 3;

```python
def summation(n):
    #to avoid overflow 
    #n*(n + 1)*(2 * n + 1) / 6 = (n * (n + 1) / 2) * (2 * n + 1) / 3;
    return (n * (n + 1) // 2) * (2 * n + 1) // 3

def main():
    n = 10
    print(summation(n))

if __name__ == "__main__":
    main()
```


## learnings

- Use of Loop Structure
- initialization and recursive approach 


## Approach
- Functional 
- Procigral





