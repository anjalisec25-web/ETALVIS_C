//Write a program to get a number from user print the total number of digits in that number.

#include <stdio.h>
int main(){
    int x,digit=0,temp=0;
    printf("Enter a number:");
    scanf("%d",&x);
    temp=x;
    for(;temp>0;temp/=10){
        digit++;
    }
    printf("%d",digit);
    return 0;
}