//Write a program to get a number from user and print the reverse of that number.

#include <stdio.h>
int disp_reverse_number();
int main(){
    int x,rev;
    printf("Enter a number:");
    scanf("%d",&x);
    rev=disp_reverse_number(x);
    printf("%d",rev);
    return 0;
}
int disp_reverse_number(int x){
    int rev=0;
    while(x>0){
        rev=(rev*10)+x%10;
        x=x/10;
    }
    return rev;
}