//Write a program to get a number from user and print the sum of all digits.

#include <stdio.h>
int disp_sum_all_digits();
int main(){
    int sum,x;
    printf("Enter a number:");
    scanf("%d",&x);
    sum=disp_sum_all_digits(x);
    printf("%d",sum);
    return 0;
}
int disp_sum_all_digits(int x){
    int y,sum=0;
    while(x>0){
        y=x%10;
        sum+=y;
        x=x/10;
    }
    return sum;
}