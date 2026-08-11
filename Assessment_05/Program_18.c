//Write a program to get number from the user,print whether that number's first two digit's(ten's digits and one's digit) is prime.

#include <stdio.h>
int main(){
    int x,tens=0,ones=0,y,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    ones=x%10;
    tens=(x/10)%10;
    y=(tens*10)+ones;
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