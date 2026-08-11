//Write a loop program to print the two-digit odd numbers,who's sumof digits are 7.

#include <stdio.h>
int main(){
    int x,y;
    for(int i=11;i<100;i+=2){
        x=i%10;
        y=i/10;
        if(x+y==7){
            printf("%d\n",i);
        }
    }
    return 0;
}