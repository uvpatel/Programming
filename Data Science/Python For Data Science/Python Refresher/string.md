String & String Methods in Python
In this video, we will learn about strings and string methods in Python to work with and manipulate text data.

What is a String?
A string is a sequence of characters enclosed in single (') or double (") quotes.
name = "Alice"
greeting = 'Hello'

Multiline Strings
Use triple quotes (''' or """) for multiline text.
message = """This is
a multiline
string."""

String Indexing and Slicing
Indexing starts at 0.
text = "Python"
text[0]    # 'P'
text[-1]   # 'n' (last character)
text[0:2]  # 'Py'
text[:3]   # 'Pyt'
text[3:]   # 'hon'

String Immutability
Strings cannot be changed after creation.
text[0] = 'J'  # Error

Common String Methods
Method	Description
str.lower()	Converts to lowercase
str.upper()	Converts to uppercase
str.strip()	Removes leading/trailing spaces
str.replace(old, new)	Replaces substring
str.split(sep)	Splits string into a list
str.join(list)	Joins list into string
str.find(sub)	Returns index of first occurrence
str.count(sub)	Counts occurrences of substring
str.startswith(prefix)	Checks if string starts with value
str.endswith(suffix)	Checks if string ends with value
str.isdigit()	Checks if all chars are digits
str.isalpha()	Checks if all chars are letters
str.isalnum()	Checks if all chars are letters/digits
Examples
"hello".upper()           # 'HELLO'
" Hello ".strip()         # 'Hello'
"hello world".split()     # ['hello', 'world']
"-".join(["2025", "04", "14"])  # '2025-04-14'
"python".find("th")       # 2

String Formatting (f-strings)
name = "Alice"
age = 30
f"Hello, {name}. You are {age} years old."
# 'Hello, Alice. You are 30 years old.'