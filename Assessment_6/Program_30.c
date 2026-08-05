//Write a program to get two numbers from user and print the HCF of those numbers.

#include <stdio.h>
int main(){
    int x,y,hcf,i=1;
    printf("Enter number 1:");
    scanf("%d",&x);
    printf("Enter number 2:");
    scanf("%d",&y);
    while(i<x && i<y){
        if(x%i==0 && y%i==0){
            hcf=i;
        }
        i++;
    }
    printf("%d",hcf);
    return 0;
}