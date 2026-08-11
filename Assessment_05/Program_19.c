//Write a program to get a 4-digit number from user,print whether that number's middle two digits(hundred's and ten's digit)is prime.

#include <stdio.h>
int main(){
    int x,hun=0,tho=0,y,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    hun=(x/100)%10;
    tho=x/1000;
    y=(tho*10)+hun;
    for(int i=2;i<y;i++){
        if(y%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}