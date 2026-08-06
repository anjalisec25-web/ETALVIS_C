//Write a program get number from user print the total number of single-digit prime numbers in the number.

#include <stdio.h>
void disp_single_digit_prime();
int main(){
    disp_single_digit_prime();
    return 0;
}
void disp_single_digit_prime(){
    int x,y,i,count,num=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x>0){
        count=0;
        y=x%10;
        if(y<=1){
            x=x/10;
            continue;
        }
        for(i=2;i<y;i++){
            if(y%i==0){
                count++;
                break;
            }
        }
        if(count==0){
            num++;
        }
        x=x/10;
    }
    printf("%d",num);
}