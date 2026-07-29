//Get a number from the user, divide the number by 8, and print the remainder.

#include <stdio.h>
int main(){
    int num,result=0;
    printf("Input:");
    scanf("%d",&num);
    result=num%8;
    printf("Output:%d",result);
    return 0;
}