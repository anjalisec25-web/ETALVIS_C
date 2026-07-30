//Get a four-digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different.If yes,print 1,oth0erwise print 0.

#include <stdio.h>
int main(){
    int num,tens=0,ones=0;
    printf("Enter a four digit number:");
    scanf("%d",&num);
    ones=num%10;
    tens=(num/10)%10;
    if(ones==tens){
        printf("Output:1");
    }
    else{
        printf("Output:0");
    }
    return 0;
}