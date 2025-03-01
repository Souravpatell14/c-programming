(1) stringbasic

#include <stdio.h>

int main()
{
    char arr[]="welcome to strings\0";
    int i=0;
    while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
}
    return 0;
}