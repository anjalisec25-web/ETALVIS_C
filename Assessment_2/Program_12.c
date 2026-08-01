//Get a two-digit number from the user and check if the digit 1 is greater than or equal to the digit 0. If yes, print 1, otherwise,print 0.

#include <stdio.h>
int main(){
    int num,tens=0,ones=0;
    printf("Enter a number:");
    scanf("%d",&num);
    tens=num/10;
    ones=num%10;
    printf("%d",tens>=ones);
    return 0;
}