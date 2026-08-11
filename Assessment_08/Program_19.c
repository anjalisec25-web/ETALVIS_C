//Write a program to get three numbers from user and print the LCM of those numbers.

#include <stdio.h>
int disp_LCM3();
int main(){
    int x,y,z,lcm;
    printf("Enter number 1:");
    scanf("%d",&x);
    printf("Enter number 2:");
    scanf("%d",&y);
    printf("Enter number 3:");
    scanf("%d",&z);
    lcm=disp_LCM3(x,y,z);
    printf("%d",lcm);
    return 0;
}
int disp_LCM3(int x,int y,int z){
    int lcm,max;
    max=x;
    if(y>max){
        max=y;
    }
    else if(z>max){
        max=z;
    }
    while(1){
        if(max%x==0 && max%y==0 && max%z==0){
            lcm=max;
            break;
        }
        max++;
    }
    return lcm;
}