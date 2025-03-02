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


(2) puts using

#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="welcome to strings";
    
    puts(str);
    return 0;
}
