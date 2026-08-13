#include <stdio.h>
int main(){
    int num,digit,rev=0;
    printf("Enter a number containing 50 digits:");
    scanf("%d",&num);
    while(num>0){
        digit=num%10;
        rev=(rev*10)+digit;
        num/=10;
    }
    printf("%d",rev);
    return 0;
}