#include <stdio.h>

int main(){
    int n,rev,rem;
    scanf("%d",&n);

    rev = 0;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev*10 + rem;
        n /= 10;

    }
    printf("The Revese number is %d", rev);
    


    return 0;
}