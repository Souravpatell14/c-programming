(1)  row &  column 


#include <stdio.h>

int main()
{
    int n;
    printf("enter no of row");
    scanf("%d",&n);
    
    int m;
    printf("enter no of column");
    scanf("%d",&m);
    
    for(int i=1;i<=n;i++){     // no of row
      for(int i=1;i<=m;i++){   // no of column 
    printf("*");
    }
    printf("\n");
    }
    return 0;


(2)  numbersqure 

#include <stdio.h>

int main()
{
    int n;
    printf("enter on of row");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}


(3) row and column 


#include <stdio.h>

int main()
{
    int n;
    printf("enter on of row");
    scanf("%d",&n);
    
    int m;
    printf("enter on of column ");
    scanf("%d",&m);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}


(4) start⭐️ triangle 🔺️ 

#include <stdio.h>

int main()
{
    int n;
    printf("enter on of row");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

(5) start triangle 🔺️ ulta.c

#include <stdio.h>

int main()
{
    int n;
    printf("enter on of row");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;


(6) numbertriangle.c


#include <stdio.h>

int main()
{
    int n;
    printf("enter no of row");
    scanf ("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}


(7)  numbertriangle ulta.c 

#include <stdio.h>

int main()
{
    int n;
    printf("enter no of row");
    scanf ("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;


(8) odd number 
#include <stdio.h>

int main()
{
    int n;
    printf("enter no of row");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      int  a=1;
        for(int j=1;j<=i;j++){
            printf("%d",a);
           a = a+2;
        }
        printf("\n");
    }
    return 0;
}


(9) alphabet.c

#include <stdio.h>

int main()
{
    int n;
    printf("enter no of row");
    scanf ("%d",&n);
    for(int i=1;i<=n;i++){
        int a = 1;
        
        for(int j=1;j<=n;j++){
            int d=a+64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }

    return 0;
}