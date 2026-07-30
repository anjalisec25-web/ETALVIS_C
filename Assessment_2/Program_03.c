//Get a number from the user and check if the number is less than  50. If yes, then print 1 otherwise,print 0.

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<50){
        printf("Output:1");
    }
    else{
        printf("Output:0");
    }
    return 0;
}