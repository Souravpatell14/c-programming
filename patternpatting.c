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


(10) alphabet triangle 🔺️ 



#include <stdio.h>

int main()
{
    int n;
    printf("enter no of row");
    scanf ("%d",&n);
    for(int i=1;i<=n;i++){
        int a = 1;
        
        for(int j=1;j<=i;j++){
            int d=a+64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }

    return 0;
}


(11)  start plus ➕️ oddnumber 


#include <stdio.h>

int main()
{
    int n;
    printf("enter no of row");
    scanf ("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        int a = n/2 + 1;
        if(j==a || i==a)  printf("*");
        else printf(" ");
        }
        printf("\n");
        
    }

    return 0;
}


(12)  hollow patting 

#include <stdio.h>

int main() {
    int n; 
    printf("Enter no of row");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


(12) 🌟 star cross ×


#include <stdio.h>

int main() {
    int n; 
    printf("Enter no of row");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || i+j == n+1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

(13) floy patting 


#include <stdio.h>

int main()
{
    int n;
    printf("enter no of row");
    scanf("%d",&n);
    
      int a = 1;
      for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
             printf("%d ",a);
             a++;
         }
         printf("\n");
         
    }

    return 0;
}

(14) floy odd number 

#include <stdio.h>

int main()
{
    int n;
    printf("enter no of row");
    scanf("%d",&n);

      int a = 1;
      for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
             
         printf("%d ",a);
             a=a+2;
         }
         printf("\n");

    }

    return 0;
}

(15) 0 and 1 patting.c

#include <stdio.h>

int main()
{
    int n;
    printf("enter no of row");
    scanf("%d",&n);

      for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
             if((i+j)%2==0) printf("1 ");
             else printf("0 ");
         }
         printf("\n");

    }

    return 0;
}


(16) 🌟 star side  *
                  **
                 ***


#include <stdio.h>

int main()
{ int n;
    printf("enter no of line");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
       for(int k=1;k<=i;k++){
           printf("*");
       }
       printf("\n");
    }

    return 0;
}


(17) rhombus patting 


#include <stdio.h>

int main() {
    int n,i,j,k;

    // Input number of rows for the rhombus
    printf("Enter the number of rows for the rhombus: ");
    scanf("%d", &n);

    // Printing the rhombus pattern
    for (i = 1; i <= n; i++) { // Upper part of the rhombus
        // Printing spaces
        
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Printing stars
        for (k = 1; k <= n; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}