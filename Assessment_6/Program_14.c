//Write a program to get a number from user and interchange the first and last digits and print the result.

#include <stdio.h>
int main(){
    int x,first,last,temp,power=1,middle,y;
    printf("Enter a number:");
    scanf("%d",&x);
    temp=x;
    while(temp>=10){
        temp=temp/10;
        power=power*10;
    }
    first=temp;
    last=x%10;
    middle=(x%power)/10;
    y=(last*power)+(middle*10)+first;
    printf("%d",y);
    return 0;
}