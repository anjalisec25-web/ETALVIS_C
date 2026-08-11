//Write a loop program to print odd number between 1 and 9.

#include <stdio.h>
int main(){
    int x=1;
    loop:
      printf("%d\n",x);
      x+=2;
    if(x<10){
        goto loop;
    }
    return 0;
}