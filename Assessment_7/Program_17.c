//Write a program to get a number from user, print whether that number is prime,and sum of digit is equal to 14.

#include <stdio.h>
void check_prime_and_sum();
int main(){
    check_prime_and_sum();
    return 0;
}
void check_prime_and_sum(){
    int i,x,y,z,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for(i=2;i<x;i++){
        if(x%i==0){
            count++;
            break;
        }
    }
    y=x/10;
    z=x%10;
    if(count==0){
        if(z+y==14){
            printf("Prime & sum of digits is 14");
        }
        else{
            printf("Prime & sum of digits is not 14");
        }
    }
    else{
        if(z+y==14){
            printf("Not Prime & sum of digits is 14");
        }
        else{
            printf("Not Prime & sum of digits is not 14");
        }
    }
}