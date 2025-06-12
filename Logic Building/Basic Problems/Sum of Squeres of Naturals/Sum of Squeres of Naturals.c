#include <stdio.h>

int  sum_of_squre(int number);
int  sum_of_squre(int number) {
    int sum_ = 0;
    for (int i = 0; i <= number; i++)
    {
        sum_ += (number*number)*i;
    }
    printf("The sum of Squre using function is %d",sum_);
}
int main(){
    int n,sum = 0;
    scanf("%d",&n);

    // for (int i = 0; i <= n; i++)
    // {
    //     sum += (n*n)*i;

    // }
    // printf("The sum %d of squre is %d",n,sum);

    // sum_  =  (n * (n + 1) * (2 * n + 1)) / 6[formula approach]
    sum_of_squre(n);
    return 0;
}

