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
