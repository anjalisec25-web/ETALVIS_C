//Write a program to get two numbers from user and print the HCF of those numbers.

#include <stdio.h>
int disp_count_HCF2();
int main(){
    int x,y,hcf;
    printf("Enter number 1:");
    scanf("%d",&x);
    printf("Enter number 2:");
    scanf("%d",&y);
    hcf=disp_count_HCF2(x,y);
    printf("%d",hcf);
    return 0;
}
int disp_count_HCF2(int x,int y){
    int hcf=0,i;
    for(i=1;i<=x && i<=y;i++){
        if(x%i==0 && y%i==0){
            hcf=i;
        }
    }
    return hcf;
}