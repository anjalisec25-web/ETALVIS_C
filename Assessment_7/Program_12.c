//Write a program to get a number from user and print the sum of all digits.

#include <stdio.h>
void disp_sum_all_digits();
int main(){
    disp_sum_all_digits();
    return 0;
}
void disp_sum_all_digits(){
    int x,sum=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for(;x>0;x/=10){
        sum=sum+(x%10);
    }
    printf("%d",sum);
}