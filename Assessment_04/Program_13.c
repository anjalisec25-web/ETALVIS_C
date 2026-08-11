//Write a program to get a number from the user and print the reverse of that number.

#include <stdio.h>
int main(){
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    loop:
      y=x%10;
      printf("%d",y);
      x=x/10;
    if(x>0){
        goto loop;
    }
    return 0;
}