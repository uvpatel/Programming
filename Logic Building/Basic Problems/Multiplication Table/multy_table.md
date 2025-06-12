# Problem statement & approach
- Program to print multiplication table of a number
- Given a number n, we need to print its table. 
```t
Example:
Input:  5
Output: 
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
```
## Approach
- Functional 

- Procigral

### Iterative Approach
>The iterative approach for printing a multiplication table involves using a loop to calculate and print the product of a given number and the numbers in range from 1 to 10. In this method, you begin with the number whose table you want to print and use a loop to multiply it with increasing values.

- Time Complexity - O(1)
- Space Complexity - O(1)
```t
Illustration
Step by step execution of loop for the multiplication table of n = 5.

We have n = 5, and the loop will iterate from i = 1 to i = 10.

First Iteration (i = 1):

The loop multiplies n = 5 by i = 1.
Result: 5 * 1 = 5.
Output: 5 * 1 = 5.
Second Iteration (i = 2):

The loop multiplies n = 5 by i = 2.
Result: 5 * 2 = 10.
Output: 5 * 2 = 10.
Third Iteration (i = 3):

The loop multiplies n = 5 by i = 3.
Result: 5 * 3 = 15.
Output: 5 * 3 = 15.
....
....

Tenth Iteration (i = 10):

The loop multiplies n = 5 by i = 10.
Result: 5 * 10 = 50.
Output: 5 * 10 = 50.
```
```python
n = int(input("Enter n: "))
for i in range (1, 11): 
    # multiples from 1 to 10
    print ("%d * %d = %d" % (n, i, n * i))


```


### Recursive Approach
>In this method, we pass i as an additional parameter with initial value as 1. We print n * i and then recursively call for i+1. We stop the recursion when i becomes 11 as we need to print only 10 multiples of given number and i.

- Time Complexity - O(1)
- Space Complexity - O(1)
```python
# printTable() prints table of number and takes
# 1 required value that is number of whose teble to be printed
# and an optional input i whose default value is 1
def printTable(n, i=1):

    if (i == 11):  # base case
        return
    print(n, "*", i, "=", n * i)
    i += 1  
    printTable(n, i)

if __name__ == "__main__":
  n = 5
  printTable(n)
```

## learnings

- Use of Loop Structure



## Mistakes
- once function return something then it's not work.
- in Python indentation is important.


1) First Code will be give perfact output
```python
def multy_table(n):
    for i in range(1,11):
        print(f"{n} x {i} = {n*i}")
    return n*i # return type is optional for this programme.

```

2) Second code will be executed only once,because it return the value in first iteration

```python
def multy_table(n):
    for i in range(1,11):
        print(f"{n} x {i} = {n*i}")
        return n*i

```


