//Write a program to get two numbers from user and print the LCM of those numbers.

#include <stdio.h>
int disp_LCM2();
int main(){
    int x,y,lcm;
    printf("Enter number 1:");
    scanf("%d",&x);
    printf("Enter number 2:");
    scanf("%d",&y);
    lcm=disp_LCM2(x,y);
    printf("%d",lcm);
    return 0;
}
int disp_LCM2(int x,int y){
    int lcm,num;
    num=x;
    while(1){
        if(num%x==0 && num%y==0){
            lcm=num;
            break;
        }
        num++;
    }
    return lcm;
}