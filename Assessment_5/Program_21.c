//Write a program get number from user print the total number digits which are odd in the number.

#include <stdio.h>
int main(){
    int x,count=0,y=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for(;x>0;x/=10){
        y=x%10;
        if(y%2!=0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}