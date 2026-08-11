//Get a four -digit number from the user and only reverse the first two digit of the number,then print the number.

#include <stdio.h>
int main(){
    int num,hundreds,thousands,tens,ones,result=0;
    printf("Enter a four digit number:");
    scanf("%d",&num);
    ones=num%10;
    tens=(num/10)%10;
    hundreds=(num/100)%10;
    thousands=num/1000;
    result=(thousands*1000)+(hundreds*100)+(ones*10)+(tens*1);
    printf("Output:%d",result);
    return 0;
}