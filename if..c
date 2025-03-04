(1) even and odd 

#include <stdio.h>

int main()
{
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    if(n%2==0){
    printf("even number");
    }
    if(n%2!=0){
        printf("odd number ");
    }

    return 0;
}



(2) absolute value
 
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n<0){
      n = n * (-1);
    }
        printf(" the absolute value is:%d",n);

    return 0;
}


