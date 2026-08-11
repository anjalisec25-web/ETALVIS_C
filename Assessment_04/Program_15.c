/*Write a program to get a number from the user and if the last digit of the number is even print the same number.
If the last digit of the number is odd,then subtract 1 from the last digit and print the number.
*/

#include <stdio.h>
int main(){
    int x,last=0,temp=0,power=1;
    printf("Enter a number:");
    scanf("%d",&x);
    temp=x;
    loop:
      if(temp>=10){
        temp=temp/10;
        power=power*10;
        goto loop;
      }
    last=temp;
    if(temp%2!=0){
        last=last-1;
        x=x%power;
        printf("%d",last*power+x);
    }
    else{
        printf("%d",x);
    }
    return 0;
}