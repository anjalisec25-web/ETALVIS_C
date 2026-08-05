//Write a loop program to print the sum if two-digit numbers whose one's digit is 5.

#include <stdio.h>
void disp_2digit_ones5();
int main(){
    disp_2digit_ones5();
    return 0;
}
void disp_2digit_ones5(){
    int i,x,sum=0;
    for(i=15;i<100;i+=5){
        x=i%10;
        if(x==5){
            sum+=i;
        }
    }
    printf("%d",sum);
}