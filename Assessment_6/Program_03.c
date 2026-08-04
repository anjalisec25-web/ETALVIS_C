//Write a loop program to print sum of 1 to 5.

#include <stdio.h>
int main(){
    int i=1,sum=0;
    while(i<6){
        sum+=i;
        i++;
    }
    printf("%d",sum);
    return 0;
}