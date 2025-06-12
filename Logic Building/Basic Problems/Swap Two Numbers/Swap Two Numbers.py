# [Naive Approach] Using Third Variable
Num1 = int(input("Enter number "))
Num2 = int(input("Enter number "))

print(f"The value of Num1 = {Num1} and Num2 = {Num2} before swaping")


# Declaring one temprary variable and store num1's value 

temp = Num1
Num1 = Num2
Num2 = temp

print(f"The value of Num1 = {Num1} and Num2 = {Num2} after swaping")

# [Expected Approach] Without using Third Variable

# 1) Using Arithmetic Operators

a = int(input("Enter number "))
b = int(input("Enter number "))

print(f"The value of a = {a} and b = {b} before swaping")
# Store the sum of a and b in a (a = a + b).
a = a + b


# Get the original value of a, that is (sum - original value of b)and store it in b (b = a - b).
b = a - b

# Get the original value of b, that is (sum - original value of a)and store it in a (a = a - b).
a = a - b

print(f"The value of a = {a} and b = {b} after swaping")