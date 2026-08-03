//Write a program get number from user print the total number of single-digit prime numbers in the number.

#include <stdio.h>
int main(){
    int x,y,count,z=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for(;x>0;x/=10){
        y=x%10;
        if(y<2){
            continue;
        }
        count=0;
        for(int i=2;i<y;i++){
            if(y%i==0){
                count++;
                break;
            }
        }
        if(count==0){
            z++;
        }
    }
    printf("%d",z);
    return 0;
}