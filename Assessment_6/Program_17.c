//Write a program to get a number from user,print whether that number is prime,and sum of digit is equal to 14.

#include <stdio.h>
int main(){
    int x,i=2,count,y,z;
    printf("Enter a number:");
    scanf("%d",&x);
    while(i<x){
        count=0;
        if(x%i==0){
            count++;
            break;
        }
        i++;
    }
    y=x/10;
    z=x%10;
    if(count==0){
        if(y+z==14){
            printf("Prime & Sum of digits is 14");
        }
        else{
            printf("Prime & sum of digits is not 14");
        }
    }
    else{
        if(y+z==14){
            printf("Not Prime & Sum of digits is 14");
        }
        else{
            printf("Not Prime &Sum of digits is not 14");
        }
        return 0;
    }
}