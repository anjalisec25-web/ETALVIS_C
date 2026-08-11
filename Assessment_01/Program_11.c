//Get a two-digit number from the user and print the sum of the digits.

#include <stdio.h>
int main(){
    int num,sum=0,digit;
    printf("Enter a two digit number:");
    scanf("%d",&num);
    while(num!=0){
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("Output:%d",sum);
    return 0;
}