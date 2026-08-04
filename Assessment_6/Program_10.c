//Write a loop program to print the sum of two-digit odd numbers,whose ten's digit is 7.

#include <stdio.h>
int main(){
    int i=11,x,sum=0;
    while(i<100){
        x=i/10;
        if(x==7){
            sum+=i;
        }
        i+=2;
    }
    printf("%d",sum);
    return 0;
}