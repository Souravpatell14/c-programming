(1) basic2d

#include <stdio.h>

int main()
{
   int arr[3][3]={{4,5,3},{7,5,7},{8,5,4}};
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


(2) user_input 

#include <stdio.h>

int main() {
    int arr[3][3];

    // Input elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);  // Corrected format specifier
        }
    }

    // Output elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");  // New line after each row
    }

    return 0;
}


(3) sum matrix 

#include <stdio.h>

int main()
{
    int arr[2][2]={1,2,3,4};
    int brr[2][2]={5,6,7,8};
    
  printf("\n");
    int res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j] = arr[i][j] + brr[i][j];
        }
    }
       for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}


(4) transpose 

#include <stdio.h>

int main()
{
    int r, c;
    
    // Taking input for rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &r);
    
    printf("Enter number of columns: ");
    scanf("%d", &c);
    
    int arr[r][c]; // Defining the array
    printf("Enter all elements:\n");
    
    // Taking input for the matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Printing the transposed matrix
    printf("Transposed matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}

(5) transpose 2nd 

#include <stdio.h>

int main() {
    int r, c;

    // Taking input for rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int arr[r][c], brr[c][r];

    // Taking input for the matrix
    printf("Enter all elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Computing the transpose
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            brr[i][j] = arr[j][i]; // Correcting the transposition
        }
    }

    // Printing transposed matrix
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


(6) transpose in place 

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of row/column");
    scanf("%d",&n);
    printf("Enter the all elements\n");
    
    int arr[n][n]; //n*n total elements
    //input 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           scanf("%d",&arr[i][j]);
        }
    }
    //transpose 
     for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int tamp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = tamp;
            
        }
     }
     //output 
          for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


(7) transpose and 90 degree Rotated 


#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of row/column");
    scanf("%d",&n);
    printf("Enter the all elements\n");
    
  int arr[n][n]; //n*n total elements
    //input 
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    //transpose 
    for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        //swap arr[i][j] = arr[j][i];
        int tamp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = tamp;
            
      }
    }
      printf("Transposed matrix is:\n");
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d ",arr[i][j]);
    }
      printf("\n");
   }

     //rotate
     for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
    //swap arr[i][j] and arr[i][k];
   int temp = arr[i][j];
    arr[i][j] = arr[i][k];
    arr[i][k] = temp;
       j++;
        k--;
  }
}
    printf("\n");
     
 //output 
    printf("Rotated matrix by 90 degree\n");
 for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    printf("%d ",arr[i][j]);
  }
    printf("\n");
}
   return 0;
}


(8) multiple by 2 matrix 


#include <stdio.h>

int main()
{
    //1 2
    //3 4
    //5 6
    int a[3][2] = {{1,2},{3,4},{5,6}};
    //1 2 3 4
    //5 6 7 8
    int b[2][4] = {{1,2,3,4},{5,6,7,8}};
    int res[3][4];
    
    //multiplying 
    int cr=2; //c=column and r= row
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            
    // I row of a[][] and j column of b[][]
    // (a[i][0],a[i][1],a[i][1],a[i][2]...) * (b[0][j],b[1][j],b[2][j]....)
    res [i][j] = 0;
     for(int k=0;k<cr;k++){
         res[i][j] += a[i][k]*b[k][j];
           }
        }
    }
    // print res
    //11 14 17 20
    //23 30 37 44
    //35 46 57 68
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}


(9) multiple 2 matrix input user's 

#include <stdio.h>

int main()
{
    int m;
    printf("enter row of 1st matrix:");
    scanf("%d",&m);
    int n;
    printf("enter column of 1st matrix:");
    scanf("%d",&n);
    
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int p;
    printf("enter row of 2nd matrix:");
    scanf("%d",&p);
    int q;
    printf("enter column of 2nd matrix:");
    scanf("%d",&q);
    int b[p][q];
    
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    // check 
    if(n!=p){
        printf("the matrix cannot multipy");
    }
    else{
        //multiplication 
      int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                 // I row of a and j column of b
                for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
           }
    }
    // print
    printf("The resultant matrix is \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

}
    return 0;
}

