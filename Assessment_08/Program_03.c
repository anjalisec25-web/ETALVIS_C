//Write a loop program to print the sum of two-digit numbers whose one's digit is 5.

#include <stdio.h>
int disp_2digit_ones5();
int main(){
    int sum;
    sum=disp_2digit_ones5();
    printf("%d",sum);
    return 0;
}
int disp_2digit_ones5(){
    int i,x,sum=0;
    for(i=15;i<100;i++){
        x=i%10;
        if(x==5){
            sum+=i;
        }
    }
    return sum;
}