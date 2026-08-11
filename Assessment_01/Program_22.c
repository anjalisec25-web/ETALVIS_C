//Get a number from the user and subtract 5 from that number if the number's ten's position digit is odd,then print the result.Do not use "if".

#include <stdio.h>
int main(){
    int num,tens=0;
    printf("Enter a number:");
    scanf("%d",&num);
    tens=(num/10)%10;
    switch(tens%2==0){
        case 0:
           break;

        case 1:
           num=num-5;
           break;
    }
    printf("Output:%d",num);
    return 0;
}