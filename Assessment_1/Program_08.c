//Get a three-digit number from the user and print the one's digit.

#include <stdio.h>
int main(){
    int num,result=0;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    result=num%10;
    printf("Output:%d",result);
    return 0;
}