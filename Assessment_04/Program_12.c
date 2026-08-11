//Write a program to get a number from user and print the sum of all digits.

#include <stdio.h>
int main(){
    int x,y,sum=0;
    printf("Enter a number:");
    scanf("%d",&x);
    loop:
      y=x%10;
      sum+=y;
      x=x/10;
    if(x>0){
        goto loop;
    }
    else{
        printf("%d",sum);
    }
    return 0;
}