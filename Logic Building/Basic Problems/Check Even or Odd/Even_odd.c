#include <stdio.h>
#include <stdbool.h>


// Approach: Using Bitwise AND Operator

bool isEven(int n) {
         if ((n & 1) == 0)
            return true;
        else
            return false;
}

// Approach: Using Bitwise Shift Operators
int isEven_(int n) {
    if (n == (n >> 1) << 1) {
        return 1;
    } else {
        return 0;
    }
}

// functional approach
int iseven(int n);
int main()
{
    int number;
    scanf("%d", &number);

    // Procigral Approach
    // if (number%2 == 0)
    // {
    //     printf("The Given number is Even");
    // }
    // else if (number != 0)
    // {
    //     printf("The Given number is Odd");
    // }
    // else{
    //     printf("Something went Wrong!");

    // }

    // Functional Approach

    printf("if the output is true number is even else odd: %d",iseven(number));
      
    if (isEven) {
        printf("true");
    }
    else {
        printf("false");
    }


// Approach: Using Bitwise Shift Operators
     if (isEven_(number) == 1)
        printf("true");
    else
        printf("false");

    
    return 0;
}
// remender approach
int iseven(int n)
{
    if (n % 2 == 0)
    {
       return true;
    }
    else if (n % 2 != 0)
    {
      return false;
    }
    
} 