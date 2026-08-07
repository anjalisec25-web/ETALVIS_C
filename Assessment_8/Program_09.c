/*Write a program to get a number from user and if the last digit of the number is even print the same number.
If the last digit of the number is odd,then subtract 1 from the last digit and print the number.*/

#include <stdio.h>
int check_last_digit_odd();
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
    int last,power=1,temp,result=0;
    temp=x;
    while(temp>=10){
        power=power*10;
        temp/=10;
    }
    last=temp;
    if(last%2!=0){
        last=last-1;
        result=(last*power)+(x%power);
    }
    else{
        result=x;
    }
    return result;
}