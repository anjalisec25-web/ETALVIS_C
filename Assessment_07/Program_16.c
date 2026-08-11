//Write a program get number from user print whether that number is prime or not.

#include <stdio.h>
void check_prime();
int main(){
    check_prime();
    return 0;
}
void check_prime(){
    int x,i,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
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