//Write a loop program to print the sum of two-digit odd numbers,whose ten's digit is 7.

#include <stdio.h>
int main(){
    int i,sum=0;
    for(i=11;i<99;i+=2){
        if((i/10)==7){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}