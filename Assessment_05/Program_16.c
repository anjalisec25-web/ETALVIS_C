//Write a program get number from user print whether that number is prime or not.

#include <stdio.h>
int main(){
    int x,i,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x<2){
        printf("Not Prime");
    }
    else{
        for(i=2;i<x;i++){
            if(x%i==0){
                count++;
                break;
            }
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