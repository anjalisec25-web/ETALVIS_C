//Write a loop program to print the sum of two-digit numbers whose one's digit is 5.

#include <stdio.h>
int main(){
    int sum=0,i;
    for(i=10;i<100;i++){
        if((i%10)==5){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}