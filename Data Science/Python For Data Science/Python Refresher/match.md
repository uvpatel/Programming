Match Case in Python
The match-case statement, introduced in Python 3.10, provides pattern matching similar to switch statements in other languages.

Syntax
def http_status(code):
    match code:
        case 200:
            return "OK"
        case 400:
            return "Bad Request"
        case 404:
            return "Not Found"
        case 500:
            return "Internal Server Error"
        case _:
            return "Unknown Status"
 
print(http_status(200))  # Output: OK
print(http_status(404))  # Output: Not Found

Features:
The _ (underscore) acts as a default case.
Patterns can include literals, variable bindings, and even structural patterns.
Example: Matching Data Structures
Lets try to match a tuple using Match-Case statements

point = (3, 4)
 
match point:
    case (0, 0):
        print("Origin")
    case (x, 0):
        print(f"X-Axis at {x}")
    case (0, y):
        print(f"Y-Axis at {y}")
    case (x, y):
        print(f"Point at ({x}, {y})")