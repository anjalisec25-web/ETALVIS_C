//Get a two-digit number from the usere and check if the digit 0 is less than the digit 1..If yes,print "Success",otherwise,print"Failure".

#include <stdio.h>
int main(){
    int num,tens=0,ones=0;
    printf("Enter a two digit number:");
    scanf("%d",&num);
    ones=num%10;
    tens=num/10;
    if(ones<tens){
        printf("Success");
    }
    else{
        printf("Failure");
    }
    return 0;
}