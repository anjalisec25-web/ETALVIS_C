/*Write a program to get a number from the user and if the last digit of the number is even print the same number.
If the last digit of the number is odd,then subtract 1 from the last digit and print the number.*/

#include <stdio.h>
int main(){
    int x,power=1,temp,last;
    printf("Enter a number:");
    scanf("%d",&x);
    temp=x;
    for(;temp>=10;temp/=10){
        power=power*10;
    }
    last=temp;
    if(last%2!=0){
        last=last-1;
        printf("%d",(last*power)+(x%power));
    }
    else{
        printf("%d",x);
    }
    return 0;
}