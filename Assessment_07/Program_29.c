//Write a program to get three numbers from user and print the LCM  of those numbers.

#include <stdio.h>
void disp_LCM3();
int main(){
    disp_LCM3();
    return 0;
}
void disp_LCM3(){
    int x,y,z,lcm,max;
    printf("Enter number 1:");
    scanf("%d",&x);
    printf("Enter number 2:");
    scanf("%d",&y);
    printf("Enter number 3:");
    scanf("%d",&z);
    max=x;
    if(y>max){
        max=y;
    }
    else if(z>max){
        max=z;
    }
    lcm=max;
    while(1){
        if(lcm%x==0 && lcm%y==0 && lcm%z==0){
            printf("%d",lcm);
            break;
        }
        lcm++;
    }
}