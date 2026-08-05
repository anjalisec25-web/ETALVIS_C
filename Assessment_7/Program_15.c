/*Write a program to get a number from user and if the last digit of the number is even print the same number.
If the last digit of the number is odd,then subtract 1 from the last digit and print the number.*/

#include <stdio.h>
void check_last_digit_odd();
int main(){
    check_last_digit_odd();
    return 0;
}
void check_last_digit_odd(){
    int x,power=1,last,temp;
    printf("Enter a number:");
    scanf("%d",&x);
    temp=x;
    while(temp>=10){
        power=power*10;
        temp/=10;
    }
    last=temp;
    if(last%2!=0){
        last=last-1;
        printf("%d",(last*power)+(x%power));
    }
    else{
        printf("%d",x);
    }
}