//Write a program to print the total count of numbers which are less than 100000 and whose sum of digit is 14.

#include <stdio.h>
int disp_count_sum14();
int main(){
    int count;
    count=disp_count_sum14();
    printf("%d",count);
    return 0;
}
int disp_count_sum14(){
    int i,count=0,y,temp,sum;
    for(i=10;i<100000;i++){
        temp=i;
        sum=0;
        while(temp>0){
            y=temp%10;
            sum+=y;
            temp/=10;
        }
        if(sum==14){
            count++;
        }
    }
    return count;
}