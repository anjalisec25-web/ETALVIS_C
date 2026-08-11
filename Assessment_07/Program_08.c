//Write a loop program to print the two-digit even numbers,who's sum of digits are 6.

#include <stdio.h>
void disp_2digit_even_sum6();
int main(){
    disp_2digit_even_sum6();
    return 0;
}
void disp_2digit_even_sum6(){
    int i,x,y;
    for(i=10;i<100;i+=2){
        x=i/10;
        y=i%10;
        if(x+y==6){
            printf("%d\n",i);
        }
    }
}