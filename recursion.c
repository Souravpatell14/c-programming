(1)  factorial recursion 

#include <stdio.h>

int factorial(int n){
    if(n==0 || n==1) return 1;
    int recAns = n*factorial(n-1);
    return recAns;
}

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);

    return 0;
}