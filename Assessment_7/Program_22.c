//Write a program get number from user print the total number of two-digit odd numbers in the number.

#include <stdio.h>
void disp_total_2digit_odd();
int main(){
    disp_total_2digit_odd();
    return 0;
}
void disp_total_2digit_odd(){
    int x,y,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x>=10){
        y=x%100;
        if(y%2!=0){
            count++;
        }
        x=x/10;
    }
    printf("%d",count);
}