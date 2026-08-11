//Get a number from the user and check if the number equals 50. If yes,then print 1, otherwise print 0.

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("%d",num==50);
    return 0;
}