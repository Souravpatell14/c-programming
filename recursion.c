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


(4) increasing 

#include <stdio.h>

void increasing(int n){
   if(n==0) return;
   increasing(n-1);
   printf("%d\n",n);
    return;
}

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    
   increasing(n);

    return 0;



(4) sum return type


#include <stdio.h>

int sum(int n){
    if(n==0 || n==1) return 1;
    int recAns = n+sum(n-1);
    return recAns;
}

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int add = sum(n);
    printf("%d",add);

    return 0;
}



(5)  power recursion 


#include <stdio.h>

int power(int a, int b){
    if(b==0) return 1;
    int recAns = a*power(a,b-1);
    return recAns;
}

int main()
{
    int a;
    printf("enter a base");
    scanf("%d",&a);
    int b;
    printf("enter a power");
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d raised to the power %d is %d",a,b,p);

    return 0;
}

