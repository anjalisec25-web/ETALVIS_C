//Write a program print total number of single digit prime numbers.

#include <stdio.h>
int disp_2digit_even_sum6();
int main(){
    int count;
    count=disp_2digit_even_sum6();
    printf("%d",count);
    return 0;
}
int disp_2digit_even_sum6(){
    int count=0,i,j,num;
    for(i=2;i<10;i++){
        num=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                num++;
                break;
            }
        }
        if(num==0){
            count++;
        }
    }
    return count;
}