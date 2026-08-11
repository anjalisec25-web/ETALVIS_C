//Get a number from the user, divide the number by 6, and print the result.

#include <stdio.h>
int main(){
    int num,result=0;
    printf("Input:");
    scanf("%d",&num);
    result=num/6;
    printf("Output:%d",result);
    return 0;
}