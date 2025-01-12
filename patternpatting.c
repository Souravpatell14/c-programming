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
      for(int i=1;i<=m;i++){    //no of column 
    printf("*");
    }
    printf("\n");
    }
    return 0;
