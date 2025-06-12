#include <stdio.h>
#include <stdbool.h>


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
    return 0;
}
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