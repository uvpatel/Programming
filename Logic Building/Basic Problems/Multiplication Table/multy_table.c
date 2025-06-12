#include <stdio.h>


int multy_table(int n);  // prototype

// defination
int multy_table(int n){

    for (int i = 0; i < 11; i++)
    {
        printf("The multyplication using function: ");
        printf("%d x %d = %d\n",n,i,n*i);
    
    }
}

int main(){
    // Procigral Programming
    int num;
    scanf("%d",&num);

    for (int i = 0; i < 11; i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
        
    }

    
    // functional Approach
    multy_table(num);



    
    return 0;
}