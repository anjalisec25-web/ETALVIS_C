//Write a program get number from user print the total number digits which are odd in the number.

#include <stdio.h>
int disp_total_odd_digits();
int main(){
    int x,count;
    printf("Enter a number:");
    scanf("%d",&x);
    count=disp_total_odd_digits(x);
    printf("%d",count);
    return 0;
}
int disp_total_odd_digits(int x){
    int y,count=0;
    while(x>0){
        y=x%10;
        if(y%2!=0){
            count++;
        }
        x=x/10;
    }
    return count;
}