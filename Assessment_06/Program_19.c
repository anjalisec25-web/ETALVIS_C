//Write a program to get a 4-digit number from user,print whether that number's middle two digits(hundred's digit and ten's digit) is prime.

#include <stdio.h>
int main(){
    int x,hun,tens,count=0,num,i=2;
    printf("Enter a 4 digit number:");
    scanf("%d",&x);
    tens=(x/10)%10;
    hun=(x/100)%10;
    num=(hun*10)+tens;
    while(i<num){
        if(num%i==0){
            count++;
            break;
        }
        i++;
    }
    if(count==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}