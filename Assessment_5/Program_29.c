//Write a program to get three numbers from user and print the LCM of those numbers.

#include <stdio.h>
int main(){
    int a,b,c,lcm,max;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    printf("Enter number 3:");
    scanf("%d",&c);
    max=a;
    if(b>max){
        max=b;
    }
    else if(c>max){
        max=c;
    }
    for(lcm=max;;lcm++){
        if(lcm%a==0 && lcm%b==0 && lcm%c==0){
            printf("%d",lcm);
            break;
        }
    }
    return 0;
}