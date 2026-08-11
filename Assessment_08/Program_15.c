//Write a program get number from user print the total number of single-digit prime numbers in the number.

#include <stdio.h>
int disp_single_digit_prime();
int main(){
    int x,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    count=disp_single_digit_prime(x);
    printf("%d",count);
    return 0;
}
int disp_single_digit_prime(int x){
    int y,i,count=0,num;
    while(x>0){
        y=x%10;
        num=0;
        if(y<=1){
            x=x/10;
            continue;
        }
        for(i=2;i<y;i++){
            if(y%i==0){
              num++;
              break;
            }
        }
        if(num==0){
            count++;
        }
        x=x/10;
    }
    return count;
}