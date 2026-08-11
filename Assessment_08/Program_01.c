//Write a loop program to print sum of 1 to 5.

#include <stdio.h>
int disp_sum();
int main(){
    int sum=0;
    sum=disp_sum();
    printf("%d",sum);
}
int disp_sum(){
    int i,sum=0;
    for(i=1;i<6;i++){
        sum+=i;
    }
    return sum;
}