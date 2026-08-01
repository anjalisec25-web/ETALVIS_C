//Write a loop program to print the two-digit odd numbers,who's sum of digits are 7.

#include <stdio.h>
int main(){
    int x=11,sum=0;
    loop:
      if(x>99){
        goto stop;
      }
      sum=(x/10)+(x%10);
      if(sum==7){
        printf("%d\n",x);
      }
      x+=2;
      goto loop;
    stop:
      return 0;
}