#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the 1st number");
    scanf("%d",&a);
    printf("enter the 2nd number");
    scanf("%d",&b);
    printf("enter the 3rd number");
    scanf("%d",&c);
    if(a>b)
    if(a>c)
    printf("%dis greatest",a);
    else
    printf("%d is greatest",c);
    else
    if(b>c)
    printf("%d is greatest",b);
    else
    printf("%d is greatest",c);

    return 0;
}




#include <stdio.h>

int main()
{
    int a;
    printf("enter the eligibility vote");
    scanf("%d",&a);
    if(a<18){
    printf("eligible vote\n");
    }
   else{
    printf("not eligible vote\n");
        
    }
    return 0;
}




include <stdio.h>

int main()
{
    int n;
    printf(" enter the number");
    scanf("%d",&n);
    if(n%5==0){
        printf(" divisible ");
    }
    else{
    printf(" not divisible ");
}
    return 0;
}


(3) profit loss 📉 

include <stdio.h>

int main()
{
    int sp,cp;
    printf("enter the number sp");
    scanf("%d",&sp);
    
    printf("enter the number cp ");
    scanf("%d",&cp);
    
    if(sp<cp){
        printf("profit");
    }
if(sp>cp){
    printf("loss");
}
else
    printf("no loss no profit");

    return 0;
}

(4) area of perameter 

#include <stdio.h>

int main()
{
   int l;
   printf("enter the length ");
   scanf("%d",&l);
   int b;
   printf("enter the breathe ");
   scanf("%d",&b);
   int  a = l * b;
   int  p = 2 * (l+b);
   if(a>p){
       printf("area is greater than perameter ");
   }
   else{
       printf("area is not greater than perameter ");
   }
    return 0;
}


(5) valid triangle 🔺️ 
#include <stdio.h>

int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    
    int b;
    printf("enter the number ");
    scanf("%d",&b);
    
    int c ;
    printf("enter the number ");
    scanf("%d",&c);
    
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("valid triangle ");
    }
    else{
        printf(" not valid triangle ");
    }
    return 0;
}
