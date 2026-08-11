//Write a program to get number from user,print whether that number's first two digits(ten's digits and one's digit) is prime.

#include <stdio.h>
int main(){
    int x,ones,tens,num,count=0,i=2;
    printf("Enter a number:");
    scanf("%d",&x);
    ones=x%10;
    tens=(x/10)%10;
    num=(tens*10)+ones;
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