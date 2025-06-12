# Our First Program

## Learn How to Output the Things.

- We write function like this using syntax:
```c++
cout << "string(output statement/ grp of character.)" << endl;
```


**Notes:**

- For just printing some statement we have to write some kind of additional code we called boilerplate code which is same for every code.
- In Boiler Plate Code firstly we write a main function. main function is the point where start the code execution.

- **Syntax:**
```c++
#include <iostream>  // Preprocessive directive - statement which is the thing which now's the iostream file where the logic of cout is written.
logic of cout is not known by c++ but we have to include iostream so it can know everything.


using namespace std; // we have multyple cin or cout so namespace is like file we can imagine so compiler can understand in which file which statement should be executed. here we use namespace std. if we haven't include

// we have to write like this std::cout <<"Hello";


int main() {  // main function, execution start's from here.
   
   // Do work

    return 0;  // always done some work then we write return type it is optional but function's type is int so it should be return and integer value.

// boilder plate code
}

```
- Semicolon is Statement terminator like . full stop.we write after end of the statement.

- syntax:- set of rules develop in programming.

- C++ is Case sensitive so "Hello" and "hello" is diffrent, java,python, c , javascript are case sensitive.

- HTML - HyperTextMarkupLanguage.,SQL- Structure Query Language etc Case Insensitive Language.

- C++ file's Exetansion - c++
- Python .py , Java has .java , text has .txt like wise etc.

## Comments in C++
```c++
// Comments in C++
// ctrl + / for comment the code.
```

- Comments are not part of code it is for human. it for understanding which code does which task and other newby developer can understand it for code sharing.it is a good practice to write comments.



## How does code run?

- code.cpp (Source Code) -> Compiler -> code.exe (Executable File)

1. Compile the Code - g++ invokes compiler.
- run command
```terminal
g++ code.cpp
```

2. After Compiling Process it converts into .exe file and generates.
- a.out (mac,linux) or .exe(for windows)

- ```terminal
g++ filename.cpp -o filename.exe; .\filename.exe

```

> endl; - end of line after this all other line which will be printed in next line and other way is eascape sequence character * \n* (newline character). *\n* is faster than endl;in CP use this.



