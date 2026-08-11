//Write a program print total number of single digit Prime numbers

#include <stdio.h>
int main(){
    int i,x=2,count,num=0;
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
    return 0;
}