# this Pointer
>In C++, this pointer is a pointer that points to the current instance of a class. It is used within the member functions of a class to refer to the object of that class. This pointer allows access to the calling object's data and methods within its own member functions.

```c++
class A{
    int n;
    A(int n) {
        this->n = n;
    }
}
```