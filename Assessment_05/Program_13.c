//Write a program to get a number from user and print the reverse of that number.

#include <stdio.h>
int main(){
    int x,temp=0;
    printf("Enter a number:");
    scanf("%d",&x);
    temp=x;
    for(;temp>0;temp/=10){
        printf("%d",temp%10);
    }
    return 0;
}