//Write a loop program to print 5 to 1 on one by one.

#include <stdio.h>
int main(){
    int x=5;
    loop:
      printf("%d\n",x);
      x--;
    if(x>0){
        goto loop;
    }
    return 0;
}