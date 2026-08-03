//Write a program to get two numbers from user and print the HCF of those numbers.

#include <stdio.h>
int main(){
    int a,b,i,hcf=0;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    printf("%d",hcf);
    return 0;
}