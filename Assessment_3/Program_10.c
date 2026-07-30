//Get a two-digit number from the user and check if the digit 0 is greater than the digit 1.If yes,print"Success",otherwise print "Failure".

#include <stdio.h>
int main(){
    int num,ones=0,tens=0;
    printf("Enter a two digit number:");
    scanf("%d",&num);
    tens=num/10;
    ones=num%10;
    if(ones>tens){
        printf("Success");
    }
    else{
        printf("Failure");
    }
    return 0;
}