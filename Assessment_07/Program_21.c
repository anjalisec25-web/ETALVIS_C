//Write a program get number from user print the total number digits which are odd in the number.

#include <stdio.h>
void disp_total_odd_digits();
int main(){
    disp_total_odd_digits();
    return 0;
}
void disp_total_odd_digits(){
    int x,y,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x>0){
        y=x%10;
        if(y%2!=0){
            count++;
        }
        x=x/10;
    }
    printf("%d",count);
}