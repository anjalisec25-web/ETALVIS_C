//Get a two-digit number from the user and check if the digit 1 is greater than or equal to the digit 0.If yes,print"Success",otherwise print "Failure".

#include <stdio.h>
int main(){
    int num,ones=0,tens=0;
    printf("Enter a two digit number:");
    scanf("%d",&num);
    tens=num/10;
    ones=num%10;
    if(tens>=ones){
        printf("Success");
    }
    else{
        printf("Failure");
    }
    return 0;
}