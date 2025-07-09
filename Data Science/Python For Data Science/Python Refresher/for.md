Loops in Python
Python has two main loops: for and while.

1. For Loop
Used to iterate over sequences like lists, tuples, and strings.

fruits = ["apple", "banana", "cherry"]
 
for fruit in fruits:
    print(fruit)

Using range()
for i in range(3):
    print(i)  # Output: 0, 1, 2

2. While Loop
Runs as long as a condition is True.

count = 0
while count < 3:
    print(count)
    count += 1

Output:
0
1
2

3. Loop Control Statements
break → Exits the loop.
continue → Skips to the next iteration.
pass → Does nothing (used as a placeholder).
for i in range(5):
    if i == 3:
        break  # Stops the loop at 3
    print(i)

