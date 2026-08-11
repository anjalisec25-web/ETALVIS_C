//Write a program get number from user print the total number of single-digit perfect square numbers in the number.

#include <stdio.h>
void disp_single_digit_square();
int main(){
    disp_single_digit_square();
    return 0;
}
void disp_single_digit_square(){
    int x,y,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x>0){
        y=x%10;
        if(y==1||y==4||y==9){
            count++;
        }
        x=x/10;
    }
    printf("%d",count);
}