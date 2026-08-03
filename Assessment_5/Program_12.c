//Write a program to get a number from user and print the sum of all digits.

#include <stdio.h>
int main(){
    int x,temp=0,sum=0,y;
    printf("Enter a number:");
    scanf("%d",&x);
    temp=x;
    for(;temp>0;temp/=10){
        y=temp%10;
        sum+=y;
    }
    printf("%d",sum);
    return 0;
}