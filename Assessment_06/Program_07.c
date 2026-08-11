//Write a loop program to print the two-digit odd numbers,who's sum of digits are 7.

#include <stdio.h>
int main(){
    int i=11,x=0,y=0;
    while(i<100){
        x=i/10;
        y=i%10;
        if(x+y==7){
            printf("%d\n",i);
        }
        i+=2;
    }
    return 0;
}