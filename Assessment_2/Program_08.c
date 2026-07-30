//Get a two-digit number from the user and chech if the digit 0 and digit 1 are not identical. If yes,print 1,otherwise,print 0.

#include <stdio.h>
int main(){
    int num,tens=0,ones=0;
    printf("Enter a number:");
    scanf("%d",&num);
    ones=num%10;
    tens=num/10;
    if(tens!=ones){
        printf("Ouput:1");
    }
    else{
        printf("Output:0");
    }
    return 0;
}