//Get a three-digit number from the user and print the ten's digit.

#include <stdio.h>
int main(){
    int num,result=0,digit;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    digit=num/10;
    result=digit%10;
    printf("Output:%d",result);
    return 0;
}