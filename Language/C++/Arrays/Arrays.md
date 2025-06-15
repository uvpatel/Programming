# Arrays 

![Array](image.jpg)
- First Data Structure.
- Collection of Similar Data Type in c,c++.

- Data Strcuters are basically structures when we  programming to store data. out motive is to build systems. so systems like apps, softwares, Ml models,webs are storing some kind of data.so main thing Data is Fuel for development and coding. so we store data.
 
- **Real World Application** : - if we build instagramme. we want to store million of username so we can't use million variable beacause it is hactic for programmer and it's track record will be manage is very hactic too. so Array is Savior.


## Types of Data
- Linear
- Hirerichial
- Algorithms - Algorithms are the operation we perform on data. like searching, sorting.

## Array Syntax
- Creation
```c++
//  data_type array_name[size];
// data_type array_name[size] = {} // with initialisation
int array[5] = {1,2,3,4,5}; // with initialisation and 5 is size of array it is optional when initialized.

int marks[100]; // with 
int Marks[] = {100,99,16};

```
## Property of Array
- Same Type of Data Holding.
- Contiguous in memory.
- Array is Linear - one line structure.


## Accessing Data From Array
- We use index for accessing the data and index start from 0 in c++.
- here the logic why we start loop's mostly from 0. 😅 in a Programming Always 0 start the things.
- for.e.g.

```c++
// data_type array_name[size] =
int array[5] = {1,2,3,4,5}; 
cout << array[0]; // 1
cout << array[1]; // 2
cout << array[2]; // 3
cout << array[3]; // 4
cout << array[4]; // 5
```

## Loops with array.

- How can we Run loop on Array.loops are easy way to accesing data from array.
```c++
#include <iostream>
using namespace std;

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    
    return 0;
}
```

- `Size Finding Formula` => 

```c++
#include <iostream>
using namespace std;

int main()
{

    
    int array[] = {1, 2, 3, 4, 5};
    cout << sizeof(array) << endl; // total size = datatypesize * elements

    int size = sizeof(array) / sizeof(int);

    return 0;
}
```

## Loop input/output

```c++
#include <iostream>
using namespace std;

int main()
{

   int num;
   cout << "How Many Student's Marks you want to store: ";
   cin >> num;
    int Marks[num];
    // cout << sizeof(Marks) << endl; // total size = datatypesize * elements
    int size = sizeof(Marks) / sizeof(int) ;

    // Input loop for taking user input of marks
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> Marks[i] ;
       
    }
    
    // Output loop for printing  marks
    for (int i = 0; i < size; i++)
    {
        cout << "Marks of student at index "<<i << " is "<< Marks[i] <<endl;
        cout << Marks[i] ;
       
    }
    
    return 0;
}
```

## Qustions: find smallest/ largest in Array

- int smallest = +infinity = INT_MAX
- int largest = +infinity = INT_MIN
- we compare each values with loop and then print output.


## Pass By refrence
- in pass by refrence means we pass address.
- array is non primitive data type. when we pass this data structure. we pass the address of this perticular original value. implicitly array will be pass as pass by refrence

- in C++ a refrence is an alternative name for and object or function, and its address is the address of the objects of function it refers to for sake of understanding we are calling it address here.


## Pass by reference

- Array is impicityly pointer
- array store starting address.
- Array is pointer
- we add in address and we can treverse array.


## Linear Search 
- it is a one kind of algorithm for finding perticular element.it has a fix method.

- get target element and return index.

## Reverse an Array
- 












## summary
- array -> what is array ?, create , i/o
- Loops with array
- max and min
- reverse an element.


## on Coding plateform
- We should use vectors rather than array it is called qustion of arrays.

## HomeWork
- WAF to Calculate sum & product of all numbers in an array.
- WAF to swap the max & min number of an array.
- WAF to print all the unique values in an array.
- Nested loop use -> [1,2,3,1,2,3,4] -> 1 -> entire loop
- WAF to print intersection of 2 arrays.
-> print common elements
-> this is not the optimise way. we will do with hashtable.

