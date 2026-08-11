//Write a program get number from user print whether the number is prime or not

#include <stdio.h>
int main(){
    int x,temp=0,i=1,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    temp=x;
    loop:
      if(i<temp){
        if(temp%i==0){
          count++;
        }
        i++;
        goto loop;
      }
    if(count==1){
        printf("Prime.");
    }
    else{
        printf("Not Prime.");
    }
    return 0;
}