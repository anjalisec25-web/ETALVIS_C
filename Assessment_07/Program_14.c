//Write a program to get a number from user and interchange the first and last digits and print the result.

#include <stdio.h>
void disp_interchange_first_last_digit();
int main(){
    disp_interchange_first_last_digit();
    return 0;
}
void disp_interchange_first_last_digit(){
    int x,last=0,first=0,mid=0,power=1,num,temp;
    printf("Enter a number:");
    scanf("%d",&x);
    temp=x;
    while(x>=10){
        power=power*10;
        x=x/10;
    }
    first=x;
    last=temp%10;
    mid=(temp%power)/10;
    num=(last*power)+mid*10+first;
    printf("%d",num);
}