//Write a program to print biggest 4-digit number.Which is divisible by 7 and 9.

#include <stdio.h>
int main(){
    for(int i=9999;i>=1000;i--){
        if(i%7==0 && i%9==0){
            printf("%d",i);
            break;
        }
    }
    return 0;
}