
String Formatting and f-strings
String Formatting in Python
String is arguably the most used immutable data types in Python. Python provides multiple ways to format strings, including the format() method and f-strings (introduced in Python 3.6).

1. Using format()
name = "Alice"
age = 25
print("My name is {} and I am {} years old.".format(name, age))
# Output: My name is Alice and I am 25 years old.

Positional and Keyword Arguments
print("{0} is learning {1}".format("Alice", "Python"))  # Using positions
print("{name} is learning {language}".format(name="Alice", language="Python"))

2. Using f-Strings (Recommended)
F-strings provide a cleaner and more readable way to format strings.

name = "Alice"
age = 25
print(f"My name is {name} and I am {age} years old.")
# Output: My name is Alice and I am 25 years old.

Expressions Inside f-Strings
a = 5
b = 10
print(f"Sum of {a} and {b} is {a + b}")
# Output: Sum of 5 and 10 is 15

Formatting Numbers
pi = 3.14159
print(f"Pi rounded to 2 decimal places: {pi:.2f}")
# Output: Pi rounded to 2 decimal places: 3.14

Padding and Alignment
print(f"{'Python':<10}")  # Left-align
print(f"{'Python':>10}")  # Right-align
print(f"{'Python':^10}")  # Center-align

:<10 → The < symbol means left-align the text within a total width of 10 characters.

F-strings are the most efficient and recommended way to format strings in modern Python!