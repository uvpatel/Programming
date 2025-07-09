Variables, Data Types and Typecasting
In this video, we will learn about variables, data types, and typecasting in Python to store and convert data effectively.

Variables
Containers for storing data values.
No need to declare data type explicitly.
name = "Alice"
age = 25
is_student = True

Data Types
Type	Example	Description
int	10, -5	Integer numbers
float	3.14, -0.5	Decimal numbers
str	"hello"	Text (string)
bool	True, False	Boolean values
list	[1, 2, 3]	Ordered, mutable collection
tuple	(1, 2, 3)	Ordered, immutable collection
dict	{"a": 1}	Key-value pairs
Typecasting (Type Conversion)
Convert data from one type to another using built-in functions:
# str to int
x = int("10")      # 10
 
# int to str
y = str(25)        # "25"
 
# float to int
z = int(3.9)       # 3 (truncates, not rounds)
 
# list from string
lst = list("abc")  # ['a', 'b', 'c']

Quick Tips
Use type(variable) to check a variable’s data type.

Typecasting errors can happen if the value isn't compatible:

int("hello")  # ValueError