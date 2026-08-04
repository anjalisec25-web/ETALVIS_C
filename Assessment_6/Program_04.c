//Write a loop program to print sum of 6 to 1.

#include <stdio.h>
int main(){
    int i=6,sum=0;
    while(i>0){
        sum+=i;
        i--;
    }
    printf("%d",sum);
    return 0;
}