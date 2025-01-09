(1) function 

#include <stdio.h>

void England(){
    printf("you are England \n");
     return;
}
void America (){
    printf("you are america\n");
    England();
    return;
}
void India(){
    printf("you are India\n");
    America();
}
 

int main()
{
  India();

    return 0;
}
