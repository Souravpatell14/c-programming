0 (1). marks less than 35:

#include <stdio.h>

int main()
{
    int marks [10] = {10,38,18,77,28,17,49,33,74,34};
    for(int i=0;i<10;i++){
      if(marks[i]<35)  
    printf("%d ",marks[i]);
}
    return 0;
}



(2).  sum of array 

#include <stdio.h>

int main()
{
    int arr[5] = {3,5,6,3,6};
    int sum = 0;
    for(int i=0;i<=4;i++){
        sum = sum + arr[i];
    }
    printf("%d ",sum);

    return 0;
}


(3). sub. of array 

#include <stdio.h>

int main()
{
    int arr[5] = {3,5,6,3,6};
    int sum = 0;
    for(int i=0;i<=4;i++){
        sum = sum - arr[i];
    }
    printf("%d ",sum);

    return 0;
}

(4). maximum value 

#include <stdio.h>

int main()
{
    int arr[5] = {4,3,63,7,6};
    int max = -1;

    for(int i=0;i<=4;i++){
        if(max<arr[i])
        max=arr[i];
    }

    printf("%d",max);

    return 0;
}


(5)  odd even increment 

#include <stdio.h>

int main()
{
    int arr[7] = {1,2,3,4,5,6,7,};
    for(int i=0;i<=6;i++){
    if(i%2!=0) arr[i]*=2;
    else arr[i]+=10;
    }
    for(int i=0;i<6;i++)
    printf("%d ",arr[i]);

    return 0;


(6)  sum even and odd

#include <stdio.h>

int main()
{
    int arr[7] = {1,2,3,4,5,6,7,};
    int sumeven =0;
    int sumodd =0;
    for(int i=0;i<=7;i++)
        if(i%2==0) {
      sumeven += arr[i];}
      else{
          sumodd += arr[i];
      }
      int res = sumeven-sumodd;
      printf("%d",res);
    return 0;




(7)  totaltriplets number 


#include <stdio.h>

int main()
{
    int arr [8]={1,2,3,4,5,6,7,8};
    int totaltriplets = 0;
    int x=12;
    for(int i=0;i<=7;i++){
    for(int j=i+1;j<=7;j++){
    for(int k=j+1;k<=7;k++){
        if(arr[i]+arr[j]+arr[k]==x){
            totaltriplets++;
            printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
        }
    }
    }
    }
    printf("%d",totaltriplets);
    return 0;
}



(8) maximum number.c

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[7] = {-10,-4,-200,-80,-19,-5,-12};
    int max = INT_MIN;
  for(int i=0;i<=6;i++){
   if (max<arr[i]){
          max = arr[i];
   }
  }
  printf("%d",max);

    return 0;
}


(9) reverse number 


#include <stdio.h>

int main()
{
  int arr[7]={1,2,3,4,5,6,7};
  int brr[7];
  for (int i=0;i<=6;i++){
      brr[i]=arr[6-i];
  }
  for(int i=0;i<=6;i++)
  printf("%d ",brr[i]);

    return 0;
}
