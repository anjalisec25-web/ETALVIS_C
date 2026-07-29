//Get a two-digit from the user,make the one's digit 0, then print it.

#include <stdio.h>
int main(){
    int num,tens,result=0;
    printf("Enter a two digit number:");
    scanf("%d",&num);
    tens=(num/10)%10;
    result=tens*10;
    printf("Output:%d",result);
    return 0;
}