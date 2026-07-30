//Get a four-digit number from the user and check if the first 2 digits and last 2 digits are the same. If yes,print 1,otherwise,print 0.

#include <stdio.h>
int main(){
    int num,ones=0,tens=0,hun=0,tho=0;
    printf("Enter a number:");
    scanf("%d",&num);
    ones=num%10;
    tens=(num/10)%10;
    hun=(num/100)%10;
    tho=num/1000;
    if(ones==hun && tens==tho){
        printf("Output:1");
    }
    else{
        printf("Output:0");
    }
    return 0;
}