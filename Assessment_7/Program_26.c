//Write a program to print biggest 4-digit number which is divisible by 7 and 9.

#include <stdio.h>
void dsip_biggest_4digit_div7_9();
int main(){
    dsip_biggest_4digit_div7_9();
    return 0;
}
void  dsip_biggest_4digit_div7_9(){
    int i;
    for(i=9999;i>=1000;i--){
        if(i%5==0 && i%7==0){
            printf("%d",i);
            break;
        }
    }
}