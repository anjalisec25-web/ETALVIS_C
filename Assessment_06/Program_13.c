//Write a program to get a number from user and print the reverse of that number.

#include <stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x>0){
        printf("%d",x%10);
        x=x/10;
    }
    return 0;
}