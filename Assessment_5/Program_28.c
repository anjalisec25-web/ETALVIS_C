//Write a program to get two numbers from user and print the LCM of those numbers.

#include <stdio.h>
int main(){
    int a,b,lcm=0;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    for(lcm=a;;lcm++){
        if(lcm%a==0 && lcm%b==0){
            printf("%d",lcm);
            break;
        }
    }
    return 0;
}