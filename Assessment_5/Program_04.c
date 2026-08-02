//Write a loop program to print sum of 6 to 1.

#include <stdio.h>
int main(){
    int i,sum=0;
    for(i=6;i>0;i--){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}