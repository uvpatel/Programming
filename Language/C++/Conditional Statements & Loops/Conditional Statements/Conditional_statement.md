# Conditional Statements

- in real life we have some kind of situaltion condition so with that concept also impliment in Programming also.

- e.g. if age > 18 you can drive. else not, voting software building , login page check user is logged in or not.

##  if, else Conditional.

## Small Problem
- We are Engineer Smart Peoples.

1) Find n is positive or nagetive.
**Logic** - n >= 0 Positive and n < 0 negative.
2) User can Vote or not.
**Logic** - Age is Greater than 18 or not.
3) Number is odd or even
**Logic** - Number % 2 == 0 means it number is even else odd.

## Syntax:

```c++
#include <iostream>
using namespace std;

int main() {
    // Put condition and give programme a flow. we use relational operator in Condtional Statements.
    if(condition){
        // do work if condition become true.
       
    } else  // for convention you can write else in next line in programming main thing is readability.
    {
        // do work if condition become false.
    }
    
    return 0;
}
```

##  if, else and else-if Conditional.

- if - True. executes if block
- else if - if condition become false we write multyple condition executes else if block
- else - if and else if condtion become false. then it will be executed.

## Syntax:

```c++
#include <iostream>
using namespace std;

int main() {
    // Put condition and give programme a flow. we use relational operator in Condtional Statements.
    if(condition){
        // do work if condition become true.
       
    } 
    else if(condition){
        // Do Some work else if condtion 
    }
    else  // for convention you can write else in next line in programming main thing is readability. we can write multiple else if statements.
    {
        // do work if condition become false.
    }
    
    return 0;
}
```

##  if, else , else if Conditional.

4) Make a Grading system.
**Logic** - n >= 0 Positive and n < 0 negative.

5) Find character lowercase or uppercase.
**Logic** - ASCII Value.


## Ternary Statement
- when we want to write simple if else we can use. ternary statements. Not prefrable because less readabilty but you should know about it.

### Syntax:

```c++
#include <iostream>
using namespace std;

int main() {
    
    condtion ? str1 : str2;

    return 0;
}
```


## Nested Condition

- In Real Life Scinario we are have so many conditon and on base of one condition. there are other condition as well.

- for e.g.  Age is greter than 18 or not and you are a programmer or not. 
```c++
#include <iostream>
using namespace std;

int main() {
    int age, isProgrammer;

    cout << "Enter Age: " ;
    cin >> age;

    cout << "You are Programmer or not( 1 , 0)): ";
    cin >> isProgrammer;

    if (age >= 18)
    {
        cout << "You are above 18" << endl;
        if (isProgrammer)
        {
            cout << "You Are a Programmer." << endl;
        }
        else
        {
            cout << "You Are not a Programmer." << endl;
        }
        
    }else{
        cout << "You are Below 18" <<endl;
    }
    
    return 0;
}    
    

```
