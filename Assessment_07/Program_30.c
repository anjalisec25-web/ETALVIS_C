//Write a program to get two numbers from user and print the HCF of those number.

#include <stdio.h>
void disp_count_HCF2();
int main(){
    disp_count_HCF2();
    return 0;
}
void disp_count_HCF2(){
    int x,y,hcf,i;
    printf("Enter number 1:");
    scanf("%d",&x);
    printf("Enter number 2:");
    scanf("%d",&y);
    for(i=1;i<=x && i<=y;i++){
        if(x%i==0 && y%i==0){
            hcf=i;
        }
    }
    printf("%d",hcf);
}