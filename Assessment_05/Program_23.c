//Write a program get number from user print the total number of single-digit perfect square numbers in the number.

#include <stdio.h>
int main(){
    int x,y,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for(;x>0;x/=10){
        y=x%10;
        if(y==0 || y==1 || y==4 || y==9){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}