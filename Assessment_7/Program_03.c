//Write a loop program to print sum of 1 to 5.

#include <stdio.h>
void disp_sum();
int main(){
    disp_sum();
    return 0;
}
void disp_sum(){
    int i,sum=0;
    for(i=1;i<6;i++){
        sum+=i;
    }
    printf("%d",sum);
}