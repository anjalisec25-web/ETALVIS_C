//Write a loop program to print the two-digit odd numbers,below 20.

#include <stdio.h>
int main(){
    int x=11;
    loop:
      printf("%d\n",x);
      x+=2;
    if(x<20){
        goto loop;
    }
    return 0;
}
