//Write a loop program to print the two-digit even numbers,who's sum of digits are 6.

#include <stdio.h>
int main(){
    int i=10,x,y;
    while(i<100){
        x=i/10;
        y=i%10;
        if(x+y==6){
            printf("%d\n",i);
        }
        i+=2;
    }
    return 0;
}