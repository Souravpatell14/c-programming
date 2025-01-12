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
