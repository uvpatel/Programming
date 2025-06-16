# Vectors
- vector is data structure it very like array. visualisation like array we treverse it with indexes.
- there are dynamic in nature.
- STL - Standard Templete Library (it is like toobox). so many data structures's implimantation already written in it. Stack, Hashtable, Queue are written in it.
- we can't start from skretch we pick stl as tool and use it.
- Usage is allowed.
- Vector,Queue, Stack , Set. -> Container.

## Vector Syntax
```c++
vector <int> vec;
vector <int> vec = {1,2,3}
vector <int> vec(3,0)
```

- Array is fixed but Vectors are dynamic. we can increase the size of vectors and we can't change array though change but not that efficient.

- in memory it is like array. linear.


## Vector Access

## Vector Functions

- size - return size of vector
- push_back
- pop_back
- front
- back
- at

## Static vs Dynamic Allocation

- Our Code is Run in Two Phase.
1) Compilation
2) Running

- There are two Type of Memory.
1) Static -Allocates on Compile Time
2) Dynamic -Allocate Memory on Run Time


- so in programming we really need of dynamic structure so we prefer to use vectors rather than array. array's logic and vectors logic are same.


### Type of Memory

1) Stack
- static memory allocation is done in Stack. array created stack it self.
2) Heap
- Dynamic memory allocation is done in Heap. On run time allocation.

### Diffrence
1) Compile Time & Run Time.
2) Stack & Heap
3) Examples.

### Dynamic Memory Allocation
```c++
vector <int> vec; // there is no allocation this is an empty.

vec.push_back(0); // now in vector there is added.interanlly vectors are interanally lik array.

// they double size and according push_back elements. and this work is done automatically.



```

## Property of Vector.
1) Size -> Number of Elements.
2) Capacity -> How much Space and how many element it can store.

1) **size**: Number of elements currently stored in the vector.
2) **capacity**: Number of elements the vector can store without reallocating memory.

❗ So, capacity is not always size + 1.
Instead, it's dynamically managed and usually grows by doubling.

- Capacity = size + 1, when element are insert dynamically in vectors.

- internally pushback elements and deletion done through the process of doubling size of array and programmer seems it is a magic but it is just thing how it works.

## Summary
- STL
- Vector
- Functions
- Static vs Dynamic
- vectors in memory
- Leetcode
- solved single number- bits.

## Homework
- Linear search on Vector
- WRF reverse vector 
- Pass Function as a refrence
- solve array problem on leetcode.