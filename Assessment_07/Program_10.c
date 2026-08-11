//Write a loop program to print the sum of two-digit odd numbers,whose ten's digit is 7.

# include <stdio.h>
void disp_2digit_odd_sum_tens7();
int main(){
    disp_2digit_odd_sum_tens7();
    return 0;
}
void disp_2digit_odd_sum_tens7(){
    int i,x,sum=0;
    for(i=11;i<100;i+=2){
        x=i/10;
        if(x==7){
            sum+=i;
        }
    }
    printf("%d",sum);
}