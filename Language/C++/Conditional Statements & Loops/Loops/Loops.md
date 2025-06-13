# Loops

- In Programming which Task are Repetive and We want to do repetively we use loops.

## Type of Loops
1) while
2) for
3) do-while

**Note* - We Can use any loop for solving a problem but here i give you some points where you should use which loop according to problem.
1) while loop - When you don't know the iteration (How many time i want to perform the task) and know the condition use while loop.
2) for loop - when you know the iteration you should always go with the for loop
3) do-while loop - you should use do - while loop when you want the programme execution atleast once. whether condition is false or true.


## small Problem for e.g
1) Print numbers 1 to 5
- Q.s : Print numbers 1 to 5 but 5 it can be anything 100000000000000 or maybe more than that . that time loops are use in the Programming. this is the magic of loop simple line of code can do so many work and makes Programming Easy for us.



## While Loop

**Syntax:**
```c++
#include <iostream>
using namespace std;

int main() {
   
    int i;  // i is iterable and initiaklisation
    while (condition)
    {
        // do work untill the condition become false.
        i++;  // i += 1; or i = i + 1; // Updation
    }
    

    return 0;
}

```

## Infinite Loop

-  if we forget to put condition when programme should be terminate.in this loop condition never become false.
- eventualy they Full the memory and our system get problem. it maybe shut down or programme crash.

## Syntax:
```c++
#include <iostream>
using namespace std;

int main() {
    // 1) while true - infinite loop
    int i = 1;  // i is iterable or counter variable. variable name should be meaningful on usecase this is the good convention and good sign of experience programmer. we can write cammelcase like if one word sum ,mul but totalsum like name we should write like this totalSum.

    while (true)
    {
        cout << i << endl;
        i++;
    }
    
   // 2) without updation - infinite loop
   int j = 1;
   while(i < 5){
       cout << j << endl;
    
   }

   /*
   
   dry run:
   1 1 .... 1 infinitely.
   ctrl + c or cmd + c for terminate the programme
   */
  
    return 0;
}
```


## For Loop


## Syntax:
```c++
#include <iostream>
using namespace std;

int main() {
    for (initialisation; condition; updation)
    {
       // Work
    }
    
    return 0;
}
```

## Small Problem

1) Find the sum of n.
**Logic** - initialise sum with 0 and then add i into that use loop.




## Keyword
- Keywords are some special reserve words. which present in compiler for doing specific task and we can't use keyword name  for naming the identifier.

### Break Statement
- use break keyword
- At perticular iteration if you want terminate and exit the loop so we use break statement.

### Syntax:
```c++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Break Statement.
    for (int i = 0; i < n; i++)
    {
        if (n == 5)
        {
            break;  // break statement generally use for terminate the loop at perticular iterantion
        }
        
    }
    
    return 0;
}
```

### Continue Statement
- use coutinue keyword
-**Use Case** : At perticular iteration if you want skip the iteration in loop so we use continue statement.

### Syntax:
```c++
#include <iostream>
using namespace std;

int main()
 {
     int n;
    cin >> n;

    // Break Statement.
    for (int i = 0; i < n; i++)
    {
        if (n == 5)
        {
            continue;  // we use for skip the perticular iteration. we want at some iteration our code should not be execute we write continue.
        }
    }
    return 0;
}
```


## Small Problem releted to continue and break

1) Find the sum of all odd number from 1 to N.
**Logic** - initialise sum with 0 and then add i into that use loop.and skip the iteration for even number.
**Note** - Always remember that initialise sum with 0 if you don't it will throw an Garbage value.

2) Finding even and odd number
- n%2 == 0 - even
- n%2 != 0 - odd.

## Assignment 

1) Use while loop for finding sum of all odd number 1 to N
2)  use forloop - even sum

## Do While Loop

## Syntax:
```c++
#include <iostream>
using namespace std;

int main() {
    do
    {
        // Do some work
    } while (condition);
    
    return 0;
}
```

## Small Problem

1) Find the sum of n.
**Logic** - initialise sum with 0 and then add i into that use loop.




## Do - while


## Syntax:
```c++
#include <iostream>
using namespace std;

int main() {
    do
    {
        // Do some work
    } while (condition);
    
    return 0;
}
```


## Diffrence between while and do while

- while loop is pretest loop (First it checks condition and then executes the output) and do-while loop is post test loop   (First it executes and then checks the condition)

- do-while works first then checks the condition

- it will be execute once.

```c++
#include <iostream>
using namespace std;

int main() {
    // do
    // {
    //     // Do some work
    // } while (condition);
    
    // return 0;



    // Diffrence between while and do while

    // Do while
    do
    {
        cout << "Hello , I am Do while" << endl;
    } while (3 > 6);  // it will be executed whether condition is true or false.
    
    //  while
    
    while (3 > 6)
    {
        cout << "Hello , I am in while" << endl;
        
    }
    // it will be not executed it depends on  condition is true or false.
    


    return 0;

}
```

## Problem

1) Check if a number is prime or not.
- **Maths** - input n, prime number are in it's own table or 1's table. or prime has only 2 factors.
- **Logic** - take input n, and checks from 2 to n-1 it is divible or not by counter var (i).

- e.g. 2,3,5 etc are prime and 2 is only even prime. so we should check 


```c++
  // ---------------------------------------------
    // 5) Check if a number is Prime or Not
    // ---------------------------------------------
    int prime_or_not;
    cout << "\nEnter a number to check if it is prime or not: ";
    cin >> prime_or_not;

    bool isPrime = true;

    if (prime_or_not <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i < prime_or_not; i++) {
            if (prime_or_not % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    
    if (isPrime) {
        cout << prime_or_not << " is a Prime Number." << endl;
    } else {
        cout << prime_or_not << " is NOT a Prime Number." << endl;
    }


    // isPrime -> true  - > prime -> cout
    // isPrime -> false  - > prime -> cout
    
    // Third Approch factors.   - > Optimise Way
    // Run Your loop till 2 to root n
    // i * i <= n
    
    //  1 to root n it will be unique factors.
    // After root n into root n -> factors will be repetive.
    // Prime        ->  only two factors.
    //  Non - Prime ->   it can be anything and it can be reptive
    /*
    number = 12
    1 *  12
    2 * 6
    3 * 4
    -------- repeat.
    4 * 3
    6 * 2
    12 * 1
    
    // root n * root n
    e.g. n = 25
    1 * 25
    5 * 5
    25 * 1
    
    
    
    */
   if (prime_or_not <= 1) {
       isPrime = false;
   } else {
       for (int i = 2; i*i <= prime_or_not; i++) {
           if (prime_or_not % i == 0) {
               isPrime = false;
               break;
           }
       }
   }

```


## Nested Loops
- Loop inside Loop

- for e.g. i want to print pattern in 5 line.
1. * * * * * 
2. * * * * * 
3. * * * * * 
4. * * * * * 
5. * * * * * 

**Logic**:
- Number of line will decide Outer loop.(n line) in other words rows.
- In each line what should be done it decide out inner loop. in other words coloumn.

```c++
#include <iostream>
using namespace std;

int main() {
    int row,col;
    cout << "Enter Number of Rows: ";
    cin >> row;
    cout << "Enter Number of Coloumn: ";
    cin >> col;
    for (int i = 0; i <= row; i++)  // outer loop one iteration line = iteration
    {
        for (int j = 0; j <= col; j++)  // inner line row * col
        {  
            cout << "* ";
        }
        cout  << endl;
    }
    
    return 0;
}
```

## Summary:

 - if- else -elseif - ternary
 - loops - for,while, do while
 - break / prime
 - Nested Loops.