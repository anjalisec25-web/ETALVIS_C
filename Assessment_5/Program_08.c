//Write a loop program to print the two-digit even numbers,who's sum of digits are 6.

#include <stdio.h>
int main(){
    int x,y;
    for(int i=10;i<100;i+=2){
        x=i/10;
        y=i%10;
        if(x+y==6){
            printf("%d\n",i);
        }
    }
    return 0;
}