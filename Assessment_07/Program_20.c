//Write a program print total number of single digit prime numbers.

#include <stdio.h>
void disp_2digit_even_sum6();
int main(){
    disp_2digit_even_sum6();
    return 0;
}
void disp_2digit_even_sum6(){
    int x=2,i,count,num=0;
    while(x<10){
        count=0;
        i=2;
        while(i<x){
            if(x%i==0){
                count++;
                break;
            }
            i++;
        }
        if(count==0){
            num++;
        }
        x++;
    }
    printf("%d",num);
}