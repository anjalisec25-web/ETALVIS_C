//Write a program get number from user print the total number digits which are odd in the number.

#include <stdio.h>
int main(){
    int x,y,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x>0){
        y=x%10;
        if(y%2!=0){
            count++;
        }
        x/=10;
    }
    printf("%d",count);
    return 0;
}