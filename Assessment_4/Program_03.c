//Write a loop program to print sum of 1 to 5.

#include <stdio.h>
int main(){
    int x=1,sum=0;
    loop:
      sum+=x;
      x++;
    if(x<6){
        goto loop;
    }
    else{
        printf("%d",sum);
    }
    return 0;
}