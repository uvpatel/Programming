List and List Methods
A list in Python is an ordered, mutable collection of elements. It can contain elements of different types.

Creating a List:
# Empty list
my_list = []
 
# List with elements
numbers = [1, 2, 3, 4, 5]
 
# Mixed data types
mixed_list = [1, "Hello", 3.14, True]

Common List Methods
Method	Description	Example
append(x)	Adds an element x to the end of the list.	my_list.append(10)
extend(iterable)	Extends the list by appending all elements from an iterable.	my_list.extend([6, 7, 8])
insert(index, x)	Inserts x at the specified index.	my_list.insert(2, "Python")
remove(x)	Removes the first occurrence of x in the list.	my_list.remove(3)
pop([index])	Removes and returns the element at index (last element if index is not provided).	my_list.pop(2)
index(x)	Returns the index of the first occurrence of x.	my_list.index(4)
count(x)	Returns the number of times x appears in the list.	my_list.count(2)
sort()	Sorts the list in ascending order.	my_list.sort()
reverse()	Reverses the order of the list.	my_list.reverse()
copy()	Returns a shallow copy of the list.	new_list = my_list.copy()
clear()	Removes all elements from the list.	my_list.clear()
Example Usage:
fruits = ["apple", "banana", "cherry"]
fruits.append("orange")
print(fruits)  # ['apple', 'banana', 'cherry', 'orange']
 
fruits.sort()
print(fruits)  # ['apple', 'banana', 'cherry', 'orange']

