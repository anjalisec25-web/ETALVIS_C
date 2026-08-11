//Write a loop program to print the sum of two-digit numbers whose one's digit is 5.

#include <stdio.h>
int main(){
    int i=15,x,sum=0;
    while(i<100){
        x=i%10;
        if(x==5){
            sum+=i;
        }
        i+=10;
    }
    printf("%d",sum);
    return 0;
}