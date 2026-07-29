//Get a number from the user, subtract 5 from that number, and print the result.

#include <stdio.h>
int main(){
    int num,result=0;
    printf("Input:");
    scanf("%d",&num);
    result=num-5;
    printf("Output:%d",result);
    return 0;
}