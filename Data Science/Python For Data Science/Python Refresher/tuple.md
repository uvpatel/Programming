Tuples and Tuple Methods
A tuple in Python is an ordered, immutable collection of elements. It is similar to a list, but once created, its elements cannot be modified.

Creating a Tuple:
# Empty tuple
empty_tuple = ()
 
# Tuple with elements
numbers = (1, 2, 3, 4, 5)
 
# Mixed data types
mixed_tuple = (1, "Hello", 3.14, True)
 
# Single element tuple (comma is necessary)
single_element = (42,)

Common Tuple Methods
Method	Description	Example
count(x)	Returns the number of times x appears in the tuple.	my_tuple.count(2)
index(x)	Returns the index of the first occurrence of x.	my_tuple.index(3)
Tuple Characteristics
Immutable: Once created, elements cannot be changed.
Faster than lists: Accessing elements in a tuple is faster than in a list.
Can be used as dictionary keys: Since tuples are immutable, they can be used as keys in dictionaries.
Accessing Tuple Elements
my_tuple = (10, 20, 30, 40)
 
# Indexing
print(my_tuple[1])  # 20
 
# Slicing
print(my_tuple[1:3])  # (20, 30)

Tuple Packing and Unpacking
# Packing
person = ("Alice", 25, "Engineer")
 
# Unpacking
name, age, profession = person
print(name)  # Alice
print(age)   # 25

When to Use Tuples?
When you want an unchangeable collection of elements.
When you need a faster alternative to lists.
When storing heterogeneous data (e.g., database records, coordinates).
Resources