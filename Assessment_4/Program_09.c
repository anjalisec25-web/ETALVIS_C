//Write a loop program to print the two-digit even numbers,who's sum of digits are 6.

#include <stdio.h>
int main(){
    int x=10,sum=0;
    loop:
      if(x>99){
        goto stop;
      }
      sum=(x/10)+(x%10);
      if(sum==6){
        printf("%d\n",x);
      }
      x+=2;
      goto loop;
    stop:
      return 0;

}