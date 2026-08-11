/*Write a Program to get a number from the user,print whether that number is prime,
and sum of digit is equal to 14.*/

#include <stdio.h>
int main(){
    int x,y=0,z=0,i,count=0;
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
        if(y+z==14){
            printf("Prime & sum of digits is 14");
        }
        else{
            printf("Prime & sum of digits is not 14");
        }
    }
    else{
        if(y+z==14){
            printf("Not Prime & sum of digits is 14");
        }
        else{
            printf("Not Prime & sum of digits is not 14");
        }
    }
    return 0;
}