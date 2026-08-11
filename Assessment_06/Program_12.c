//Write a program to get a number from user and print the sum of all digits.

#include <stdio.h>
int main(){
    int x,temp,sum=0;
    printf("Enter a number:");
    scanf("%d",&x);
    temp=x;
    while(temp>0){
        sum=sum+(temp%10);
        temp=temp/10;
    }
    printf("%d",sum);
    return 0;
}