//Write a program get number from user print whether that number is prime or not.

#include <stdio.h>
int main(){
    int x,i=2,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x<=1){
        printf("Not Prime");
    }
    else{
        while(i<x){
            if(x%i==0){
                count++;
                break;
            }
            i++;
        }
        if(count==0){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}