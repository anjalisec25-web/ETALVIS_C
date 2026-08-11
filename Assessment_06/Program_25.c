//Write a program get number from user print the total number of single-digit prime numbers in the number.

#include <stdio.h>
int main(){
    int x,y,num=0,count,i;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x>0){
        y=x%10;
        count=0;
        i=2;
        if(y<=1){
            x=x/10;
            continue;
        }
        while(i<y){
            if(y%i==0){
                count++;
                break;
            }
            i++;
        }
        if(count==0){
            num++;
        }
        x=x/10;
    }
    printf("%d",num);
    return 0;
}