//Write a program to get number from user,print whether that number's first two digits(ten's digits and one's digit) is prime.

#include <stdio.h>
void check_first_2digits_prime();
int main(){
    check_first_2digits_prime();
    return 0;
}
void check_first_2digits_prime(){
    int x,tens,ones,num,i,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    ones=x%10;
    tens=(x/10)%10;
    num=(tens*10)+ones;
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