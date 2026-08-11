//Get a number as a string and print the integer value of the string.

#include <stdio.h>
int main(){
    char str[100];
    int i=0,num=0;
    printf("Enter a number:");
    scanf("%s",str);
    while(str[i]!='\0'){
        num=num*10 + (str[i]-'0');
        i++;
    }
    printf("%d",num);
    return 0;
}