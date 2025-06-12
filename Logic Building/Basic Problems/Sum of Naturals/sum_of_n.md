# Problem statement & approach
## Problem statement
- Problem Statement - Program to find sum of first n natural numbers
- Given a number n, find the sum of the first n natural numbers.
Examples : 
```t
Input: n = 3
Output: 6
Explanation: Note that 1 + 2 + 3 = 6
```

##  Approach
- [Naive Approach] Loop Based Summation
- [Expected Approach] Formula Based Method

### [Naive Approach] Loop Based Summation
>Calculate the sum of all integers from 1 to n by iterating through a loop.

```python
number = int(input("Enter number you want sum of: "))
sum = 0

for i in range(1,number+1):
    sum += i
```

- Time Complexity - O(n)
- Space Complexity - O(1)

### [Naive Approach] Loop Based Summation
> An efficient solution is to use the below formula.

```t
Sum of first n natural numbers = (n * (n+1)) / 2

For example: n = 5
Sum = (5 * (5 + 1)) / 2 = (5 * 6) / 2 = 30 / 2 = 15
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
print(f"The sume of {number} is {(number*(number+1))/2}, using Formula based Method")


- Time Complexity - O(1)
- Space Complexity - O(1)

```


### Divide and Conqure
>**Note:** The above program causes overflow, even if the result is not beyond the integer limit. We can avoid overflow up to some extent by dividing first.

```python
def findSum(n):
    if (n % 2 == 0):
        return (n / 2) * (n + 1)

   # If n is odd, (n+1) must be even
    else:
        return ((n + 1) / 2) * n

n = int(input("Enter number: "))
print(findSum(n))
```

## learnings

- Use of Loop Structure
- initialization and recursive approach 


## Approach
- Functional 
- Procigral

## Mistakes
- once function return something then it's not work.
- in Python indentation is important.
- in c proramming or c++ if you write another function for doing specific work write on top.







