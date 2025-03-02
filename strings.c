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


(3) reverse strings 

#include <stdio.h>
#include <string.h>
int main()
{
   char str[40];
  puts("Enter a string");
    scanf("%[^\n]s",str);
// size
   int size = 0;
  int k=0;
  while(str[k]!='\0'){
 size++;
  k++;
  }
  for(int i=0,j=size-1;i<=j;i++,j--){
      char tamp = str[i];
      str[i] = str[j];
      str[j] = tamp;
  }
  puts("the reverse strings is:");
  puts(str);
    return 0;
}


(4) strings as points 

#include <stdio.h>
#include <string.h>
int main()
{
  char str[]="welcome to strings ";
  char*ptr=str;
  int i=0;
  while(*ptr!='\0'){
      printf("%c",*ptr);
      ptr++;
      i++;
  }
    return 0;
}

(5) copy string

#include <stdio.h>
#include <string.h>
int main()
{
  char s1[]="welcome to strings ";
  char*s2=s1;
  s1[0]='s';
  
      printf("%s",s2);
     
    return 0;
}

