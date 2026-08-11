//Write a program get number from user print the total number of two-digit perfect square numbers in the number.

#include <stdio.h>
int main(){
    int x,y,z,n,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for(;x>0;x/=10){
        y=x%10;
        z=(x/10)%10;
        n=(z*10)+y;
        if(n==16||n==25||n==36||n==49||n==64||n==81){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}