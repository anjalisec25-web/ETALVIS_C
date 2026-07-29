//Get a number from the user, multiply 3 by that number, and print the result.

#include <stdio.h>
int main(){
    int num,result=0;
    printf("Input:");
    scanf("%d",&num);
    result=num*3;
    printf("Output:%d",result);
    return 0;
}