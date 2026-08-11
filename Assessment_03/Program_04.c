//Get a number from the user and check if the number is greater than 50. If yes,then print "success",otherwise,print "Failure".

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>50){
        printf("Success");
    }
    else{
        printf("Failure");
    }
    return 0;
}