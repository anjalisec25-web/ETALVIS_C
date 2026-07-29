//Get a three-digit number from the user, make the one's digit 2,and then print it.

#include <stdio.h>
int main(){
    int num,hundreds,tens,result=0;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    hundreds=(num/10)/10;
    tens=(num/10)%10;
    result=(hundreds*100)+(tens*10)+2;
    printf("Output:%d",result);
    return 0;
}