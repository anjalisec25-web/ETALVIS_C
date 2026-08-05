//Write a program to get a number from user print the total number of digits in that number.

#include <stdio.h>
void count_total_digits();
int main(){
    count_total_digits();
    return 0;
}
void count_total_digits(){
    int x,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for(;x>0;x/=10){
        count++;
    }
    printf("%d",count);
}