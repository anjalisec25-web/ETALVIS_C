//Get a two-digit number from the user and check if the digit 0 is less than the digit 1. If yes,print 1,otherwise,print 0.

#include <stdio.h>
int main(){
    int num,tens=0,ones=0;
    printf("Enter a number:");
    scanf("%d",&num);
    tens=num/10;
    ones=num%10;
    if(ones<tens){
        printf("Output:1");
    }
    else{
        printf("Output:0");
    }
    return 0;
}