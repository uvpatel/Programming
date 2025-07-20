# Single Number

## Notes For Coding Problems

- First There is a boiler plate code start with easy then midium and then hard.

- c++ vector are pass value so in function we pass by refrence so we put &
- & make original vector creater aliase
- like iron man is tony stark.

- Constrain (Time & Space Complexity).
- Time & Space complexity for interview.
- linear - no nested loop.
- practically it will give understanding about bitwise operator.
- problem is not important main thing is thought process.


## Single Number
- 4 , 1 ,-4 -> eqully mangnitute cancel. num -> dubplicate
1) num -> duplicate cancel and remaining is unique. -> it is dependent on logic of bitwise

- specially on BITWISE XOR.


## How BITWISE XOR work ? (Always Remember) (n ^ n = 0) ,(n ^ 0 => n)

- 0^0 => 0 , - 0 ^ 1 => 1
- 1^1 => 0 , - 1 ^ 0 => 1

- if on Same operands it returns 0 and for diffrent it returns 1.

- for e.g. 2 ^ 2 => 10 ^ 10 => 00


```c++
class Solution {  // This is oop Concept
public:
    int singleNumber(vector<int>& nums) {
        
    }
};

```

**logic** => we run a loop on all the elements. and perform bitwise XOR on each element. so duplicate will be cancel and final it return value we get unique.
- n ^ 0 => n

## Small things are Important for doing Big Things.
