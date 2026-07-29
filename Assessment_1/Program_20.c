//Get a three-digit number from the user and make the ten's digit as 0,then print it.

#include <stdio.h>
int main(){
    int num,hundreds=0,ones=0,result;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    hundreds=(num/10)/10;
    ones=num%10;
    result=(hundreds*100)+(ones*1);
    printf("Output:%d",result);
    return 0;
}