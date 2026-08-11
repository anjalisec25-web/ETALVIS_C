//Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14.

#include <stdio.h>
int main(){
    int i,temp=0,sum,count=0;
    for(i=1;i<100000;i++){
        temp=i;
        sum=0;
        for(;temp>0;temp/=10){
            sum+=temp%10;
        }
        if(sum==14){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}