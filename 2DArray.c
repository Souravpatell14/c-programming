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