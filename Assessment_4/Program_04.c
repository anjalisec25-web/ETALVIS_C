//Write a loop program to print sum of 6 to 1.

#include <stdio.h>
int main(){
    int x=6,sum=0;
    loop:
      sum+=x;
      x--;
    if(x>0){
        goto loop;
    }
    else{
        printf("%d",sum);
    }
    return 0;
}