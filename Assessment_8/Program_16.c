//Write a program to print biggest 4-digit number.Which is divisible by 7 and 9.

#include <stdio.h>
int disp_biggest_4digit_div7_9();
int main(){
    int num;
    num=disp_biggest_4digit_div7_9();
    printf("%d",num);
    return 0;
}
int disp_biggest_4digit_div7_9(){
    int i,num;
    for(i=9999;i>=1000;i--){
        if(i%7==0 && i%9==0){
            num=i;
            break;
        }
    }
    return num;
}