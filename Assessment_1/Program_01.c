//Get a number from the user, add 2 to that number and print the result.

#include <stdio.h>
int main(){
    int num,result=0;
    printf("Input:");
    scanf("%d",&num);
    result=num+2;
    printf("Output:%d",result);
    return 0;
}