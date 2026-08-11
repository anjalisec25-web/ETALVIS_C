//Get a four-digit number from user and only reverse the last two digits of the number,then print the number.

#include <stdio.h>
int main(){
    int num,hun=0,tho=0,ones=0,tens=0,result;
    printf("Enter a four digit number:");
    scanf("%d",&num);
    ones=num%10;
    tens=(num/10)%10;
    hun=(num/100)%10;
    tho=num/1000;
    result=(hun*1000)+(tho*100)+(tens*10)+ones;
    printf("Output:%d",result);
    return 0;
}