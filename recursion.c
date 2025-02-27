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



(2) print of n time


#include <stdio.h>

void greeting(int n){
    if(n==0) return;
    printf(" good morning\n");
    greeting(n-1);
    return;
}

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    
    greeting(n);

    return 0;
}



(3) decreasing value


#include <stdio.h>

void decreasing(int n){
    if(n==0) return;
    printf("%d\n",n);
   decreasing(n-1);
    return;
}

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    
   decreasing(n);

    return 0;
}