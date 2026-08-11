//Write a program to get a number from user and interchange the first and last digits and print the result.

#include <stdio.h>
int disp_interchange_first_last_digit();
int main(){
    int x,result;
    printf("Enter a number:");
    scanf("%d",&x);
    result=disp_interchange_first_last_digit(x);
    printf("%d",result);
    return 0;
}
int disp_interchange_first_last_digit(int x){
    int first,last,middle,power=1,result=0,temp;
    temp=x;
    while(temp>=10){
        power=power*10;
        temp/=10;
    }
    first=temp;
    last=x%10;
    middle=(x%power)/10;
    result=(last*power)+(middle*10)+first;
    return result;
}