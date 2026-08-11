//Get a four-digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different.If yes,print "success",otherwise print "Failure".

#include <stdio.h>
int main(){
    int num,ones=0,tens=0;
    printf("Enter a four digit number:");
    scanf("%d",&num);
    ones=num%10;
    tens=(num/10)%10;
    if(ones==tens){
        printf("Success");
    }
    else{
        printf("Failure");
    }
    return 0;
}