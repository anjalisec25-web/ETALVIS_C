//Get a two-digit number from the user and subtract 5 from that number if the sum of the digits of the  number is odd,then print the result. Do not use "if".

#include <stdio.h>
int main(){
    int num,sum=0,temp=0,digit;
    printf("Enter a two digit number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        digit=temp%10;
        sum=sum+digit;
        temp=temp/10;
    }
    switch(sum%2==0){
        case 0:
           num=num-5;
           break;

        case 1:
           break;
    }
    printf("Output:%d",num);
    return 0;
}