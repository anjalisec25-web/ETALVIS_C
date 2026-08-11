//Get a number from the user and subtract 5 from that number if the number is odd,then print the result. Do not use "if".

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    switch(num % 2){
        case 1:
           num=num-5;
           break;

        case 0:
           break;
    }
    printf("Output:%d",num);
    return 0;
}