//Write a loop program to print the sum of two-digit odd numbers,whose ten's digit is 7.

#include <stdio.h>
int main(){
    int x=11,y,sum=0;
    loop:
      if(x>99){
        goto stop;
      }
      y=x/10;
      if(y==7){
        sum+=x;
      }
      x+=2;
      goto loop;
    stop:
      printf("%d",sum);
      return 0;
}