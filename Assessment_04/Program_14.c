//Write a program to get a number from the user and interchange the first and last digits and print the result.

#include <stdio.h>
int main(){
    int x,temp=0,power=1,last=0,first=0,middle=0,result=0;
    printf("Enter a number:");
    scanf("%d",&x);
    temp=x;
    loop:
       if(temp>=10){
        temp=temp/10;
        power=power*10;
        goto loop;
       }
    last=x%10;
    first=temp;
    middle=(x%power)/10;
    result=last*power+middle*10+first;
    printf("%d",result);
    return 0;
}