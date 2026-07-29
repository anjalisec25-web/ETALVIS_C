//Get a three-digit number from the user and subtract five from that number if one's digit number and 100's digit number are odd,then print the result.Do not use "if".

#include <stdio.h>
int main(){
    int num,ones,hundreds;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    ones=num%10;
    hundreds=(num/10)/10;
    switch(ones%2!=0 && hundreds%2!=0){
        case 0:
           break;
        
        case 1:
           num=num-5;
           break;
    }
    printf("Output:%d",num);
    return 0;
}