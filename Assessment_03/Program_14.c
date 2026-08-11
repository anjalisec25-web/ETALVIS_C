//Get a four-digit number from the user and check if the first 2 digits and last 2 digits are the same.If yes,print "Success",Otherwise print "Failure".

#include <stdio.h>
int main(){
    int num,tens=0,ones=0,hun=0,tho=0,x,y;
    printf("Enter a four digit number:");
    scanf("%d",&num);
    ones=num%10;
    tens=(num/10)%10;
    hun=(num/100)%10;
    tho=num/1000;
    x=(tens*10)+ones;
    y=(tho*10)+hun;
    if(x==y){
        printf("Success");
    }
    else{
        printf("Failure");
    }
    return 0;
}