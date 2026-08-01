//Write a program to get a number from the user print the total number of digits in that number.

#include <stdio.h>
int main(){
    int x,digit=0;
    printf("Enter a number:");
    scanf("%d",&x);
    loop:
      x=x/10;
      digit++;
    if(x>0){
        goto loop;
    }
    else{
        printf("%d",digit);
    }
    return 0;
}