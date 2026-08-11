//Write a program to get a number from user print the total number of digits in that number.

# include <stdio.h>
int main(){
    int x,temp,digit=0;
    printf("Enter a number:");
    scanf("%d",&x);
    temp=x;
    while(temp>0){
        temp=temp/10;
        digit++;
    }
    printf("%d",digit);
    return 0;
}