# Pattern Problems

**Desclaimer** - Majority it will be not asked in Interview it for understanding about nested loops and build good foundation for concept of Dynamic Programming.

**Trick** ->
1. outer loop -> line will decide Outer loop - > n times (0 to n-1 or 0 to n)
2. inner loop -> what work should be done. logic is will written in inner loop -> 1 single row.  -> 
3. After each iteration what happen out output should be printed on the next line after updation of i so we write endl;.

- in loops we write for algorithm so we start and initialise from 0 to n-1 because array and strings it's indexing start from 0. position starts from 0.


- **Logic For Patterns** - Logic For Pattern - We always write a Generic logic for Pattern Problem n could be anything.


1) Square Pattern

- Easy with number n = 4
- Variation .

1) Using Astrisct or any symbol.
```txt
 * * * * 
 * * * *
 * * * *
 * * * *
```
2) Using Number.
```txt
 1 2 3 4
 1 2 3 4
 1 2 3 4
 1 2 3 4
```
e.g for n = 3
```txt
 1 2 3 
 1 2 3 
 1 2 3 
```
3) Continuous Loop.
e.g for n = 3
```txt
 1 2 3 
 4 5 6
 7 8 9
```

```c++
int number_;
    cout << "Enter Number of Rows: ";
    cin >> number_;
    
   
int num  = 1; // Reset to 'A' for each new line
for (int i = 0; i < number_; i++) {
    for (int j = 0; j < number_; j++) {
        cout << num << " ";
        num++; // Increment character
    }
    cout << endl;
    }
```
4) Character Form


```txt
 A B C
 D E F
 G H I
```


## character Pattern

```c++
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 0; i < n; i++)
    char ch = 'A';  // why character declare here because if we put out it will be updated in every line it will be updated if we outer declare it in outer loop. it will be updated and we want it starts from A so we put it into a loop.

    {
        for (int j = 0; j < n; j++)  // inner start => Line star
        {
            cout << ch; // it will be inner memory store as a ascii.
            ch++;
        }
        
        cout << endl;
    }
    
    return 0;
}
```

**Note:** - Inner loop which variable written is reset in next line.
- outer loop which variable which should not be reset . use according to usecase.

## Homework Problem
```txt
A B C
D E F
G H I
```

## Triangle Pattern
- Easy with stars with

```txt
i = 0   *  
i = 1   ** 
i = 2   ***
i = 3   ****
```

- **Logic**
1) Outerloop -> lines 0 to n-1
2) innerloop  -> in first line for i = 0 , one character printed.then for second for i = 1 two * printed. for i = 0,  i + 1 character i want to print.

- run  loop  from 1 to i + 1 or 0 to i



- in some loop start with space in that perticular type of problem. we decide logic for spaces.

## Homework Triangle Pattern
```txt
A
BB
CCC
DDDD
EEEEE
```



## Reverse Triangle Pattern
- n = 5
```txt
1
21
321
4321
54321
```

- **Logic** 
1) Outer loop n times
2) Inner loop will be run backwords


## Backwords loop

```c++
 for (int j = i  ; j > 0 ; j--)
        {
            cout << j;
        }
```

## Floyed's Triangle

- **Logic** -  use count variable.
```txt
1 
2 3
4 5 6
7 8 9 10
```


## Inverted Triangle Pattern

- **Logic** -  Find the spaces Use two loops.
- n = 4
```txt
i = 0 for:     1 1 1 1  for n = 4, 0 space
i = 1 for:       2 2 2  for n = 3, 1 space
i = 2 for:         3 3  for n = 2, 2 space
i = 3 for:           4  for n = 0, 3 space

```

1) for outer loop it runs n time
2) two inner loop.
- for (j = 0; j < i ; j++)  -> Spaces
- for (j = 0; j < n-i ; j++)   -> nums


## Assignment
```txt
// Inveted Triangle Pattern
AAAA
 BBB
  CC
   D
```

## Pyramid Pattern

```txt
Pyramid Pattern:

    i =  0 :      1
    i = 1 :     1 2 1
    i = 2 :   1 2 3 2 1
    i = 3 : 1 2 3 4 3 2 1
```
**Logic** - Break Loop into vertically two parts, then broken loop divide using loop into 3 parts.

1) Spaces : n - i -1 times --> " "
2) Loop1  = 1 to i+ 1 --> cout << j
3) Loop2  - j = 0 to i (i tiemes) - Backwards
- count
- what
- (o - i-1) and (i to 1)same.


## Hollow Diamond Pattern
- Breakdown patterns into part.
- **Logic** - 
```txt
Pyramid Pattern:

- Top Parts.
- n = 4

    i =  0 :      *       <-3  space , inner space 0
    i = 1 :     *   *     <- 2 space , inner space 1
    i = 2 :   *       *   <- 1 space , inner space 3
    i = 3 :  *          *   <- Breakdown from here  , inner space = 5
i =4  :       *       *  <- 3 outer space , inner space 5
    i = 1 :     *   *    <- 2 outer space , inner space 7
    i =  0 :      *  <-   0outer space , inner space 7
```
- n = 4

**📌 Notes:**
- Outer spaces: n - i - 1 in upper part, and i in lower part.
- Inner spaces: 2 * i - 1 for lines with i > 0.
- The middle row is the widest and symmetric for a hollow diamond.

### Top
1. spaces -> cout << " " , spaces - > ( n-i-1)
- cout <<"*"
2. spaces -> 2*i-1
- this for only 0 optimisation
- if (i != 0):
-    cout << "*";
### Bottom

  

