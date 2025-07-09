Dictionary & Dictionary Methods
A dictionary in Python is an unordered, mutable, and key-value pair collection. It allows efficient data retrieval and modification. Dictionaries in Python are ordered as of Python 3.7

Creating a Dictionary:
# Empty dictionary
empty_dict = {}
 
# Dictionary with key-value pairs
student = {
    "name": "Alice",
    "age": 25,
    "grade": "A"
}
 
# Using dict() constructor
person = dict(name="John", age=30, city="New York")

Accessing Dictionary Elements
# Using keys
print(student["name"])  # Alice
 
# Using get() (avoids KeyError if key doesn't exist)
print(student.get("age"))  # 25
print(student.get("height", "Not Found"))  # Default value

Common Dictionary Methods
Method	Description	Example
keys()	Returns all keys in the dictionary.	student.keys()
values()	Returns all values in the dictionary.	student.values()
items()	Returns key-value pairs as tuples.	student.items()
get(key, default)	Returns value for key, or default if key not found.	student.get("age", 0)
update(dict2)	Merges dict2 into the dictionary.	student.update({"age": 26})
pop(key, default)	Removes key and returns its value (or default if key not found).	student.pop("grade")
popitem()	Removes and returns the last inserted key-value pair.	student.popitem()
setdefault(key, default)	Returns value for key, else sets it to default.	student.setdefault("city", "Unknown")
clear()	Removes all items from the dictionary.	student.clear()
copy()	Returns a shallow copy of the dictionary.	new_dict = student.copy()
Example Usage:
student = {"name": "Alice", "age": 25, "grade": "A"}
 
# Adding a new key-value pair
student["city"] = "New York"
 
# Updating an existing value
student["age"] = 26
 
# Removing an item
student.pop("grade")
 
# Iterating over a dictionary
for key, value in student.items():
    print(key, ":", value)
 
# Output:
# name : Alice
# age : 26
# city : New York

Dictionary Comprehension:
# Creating a dictionary using comprehension
squares = {x: x**2 for x in range(1, 6)}
print(squares)  # {1: 1, 2: 4, 3: 9, 4: 16, 5: 25}

Key Properties of Dictionaries:
Unordered (Python 3.6+ maintains insertion order).
Keys must be unique and immutable (e.g., strings, numbers, tuples).
Values can be mutable and of any type.
Resources