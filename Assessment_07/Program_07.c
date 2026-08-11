//Write a loop program to print the two-digit odd numbers,who's sum of digits are 7.

#include <stdio.h>
void disp_2digit_odd_sum7();
int main(){
    disp_2digit_odd_sum7();
    return 0;
}
void disp_2digit_odd_sum7(){
    int i,x,y;
    for(i=11;i<100;i+=2){
        x=i/10;
        y=i%10;
        if(x+y==7){
            printf("%d\n",i);
        }
    }
}