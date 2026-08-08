//Write a program get number from user print the total number of two-digit odd numbers in the number.

#include <stdio.h>
int disp_total_2digit_odd();
int main(){
    int x,count;
    printf("Enter a number:");
    scanf("%d",&x);
    count=disp_total_2digit_odd(x);
    printf("%d",count);
    return 0;
}
int disp_total_2digit_odd(int x){
    int y,count=0;
    while(x>10){
        y=x%100;
        if(y%2!=0){
            count++;
        }
        x=x/10;
    }
    return count;
}