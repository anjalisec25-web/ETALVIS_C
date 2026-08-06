//Write a program to get a 4-digit number from user,print whether that number's middle two digits(hundred's digit and ten's digit) is prime.

#include <stdio.h>
void middle_2digits_prime();
int main(){
    middle_2digits_prime();
    return 0;
}
void middle_2digits_prime(){
    int i,x,hun,tho,num,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    hun=(x/100)%10;
    tho=x/1000;
    num=(tho*10)+hun;
    for(i=2;i<num;i++){
        if(num%i==0){
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
}