//Write a loop program to print sum of 1 to 5.

#include <stdio.h>
int main(){
    int i,sum=0;
    for(i=1;i<6;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}