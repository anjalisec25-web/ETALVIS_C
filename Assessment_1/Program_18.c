//Get a two-digit from the user,make the ten's digit 1, and then print it.

#include <stdio.h>
int main(){
    int num,ones,result;
    printf("Enter a two digit number:");
    scanf("%d",&num);
    ones=num%10;
    result=(1*10)+ones;
    printf("Output:%d",result);
    return 0;
}