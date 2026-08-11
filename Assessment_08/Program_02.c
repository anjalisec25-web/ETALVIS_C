//Write a loop program to print sum of 6 to 1.

#include <stdio.h>
int disp_rsum();
int main(){
    int sum;
    sum=disp_rsum();
    printf("%d",sum);
    return 0;
}
int disp_rsum(){
    int i,sum=0;
    for(i=6;i>0;i--){
        sum+=i;
    }
    return sum;
}