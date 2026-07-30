//Get a two-digit number from the user and check if the digit 0 and digit 1 are not identical.If yes,print"Success",otherwise print "Failure".

#include <stdio.h>
int main(){
    int num,tens=0,ones=0;
    printf("Enter a two digit number:");
    scanf("%d",&num);
    ones=num%10;
    tens=num/10;
    if(tens!=ones){
        printf("Success");
    }
    else{
        printf("Failure");
    }
    return 0;
}