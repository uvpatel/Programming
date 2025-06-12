#include <stdio.h>
int sum_of_n(int n);

int sum_of_n(int n){
    int sum_ = 0;
      for (int i = 0; i <= n; i++)
    {
        sum_ += i;
    }
    printf("The sum of %d is %d,using functions",n,sum_);
    return 1;
    
}

int main(){
    int num,sum = 0;
    scanf("%d",&num);

    // Procigral Approach
    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    // printf("The sum of %d is %d",num,sum);
    
    
    // Function Call for  programme.
    printf("The sum ",sum_of_n(num));

    
    return 0;
}

// Functional Approach

