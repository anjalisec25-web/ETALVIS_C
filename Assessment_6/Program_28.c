//Write a program to get two numbers from user and print the LCM of those numbers.

#include <stdio.h>
int main(){
    int x,y,lcm;
    printf("Enter number 1:");
    scanf("%d",&x);
    printf("Enter number 2:");
    scanf("%d",&y);
    lcm=x;
    while(1){
        if(lcm%x==0 && lcm%y==0){
            printf("%d",lcm);
            break;
        }
        lcm++;
    }
    return 0;
}