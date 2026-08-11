//Get a two-digit number from the user and check if the digit 0 and digit 1 are identical. If yes,print1,otherwise,print 0.

#include <stdio.h>
int main(){
    int num,ones=0,tens=0;
    printf("Enter a number:");
    scanf("%d",&num);
    tens=num/10;
    ones=num%10;
    printf("%d",tens==ones);
    return 0;
}