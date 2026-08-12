//Get an integer and print it as a string.

#include <stdio.h>
int main(){
    int num;
    char str[100];
    printf("Enter a number:");
    scanf("%d",&num);
    sprintf(str,"%d",num);
    printf("%s",str);
    return 0;
}