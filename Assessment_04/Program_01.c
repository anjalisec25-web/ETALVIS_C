//Write a loop program to print 1 to 5 on one by one.

#include <stdio.h>
int main(){
    int x=1;
    loop:
      printf("%d\n",x);
      x++;
    if(x<6){
        goto loop;
    }
    return 0;
}