//Get an integer and print each digit as a character.Print one character on one line.

#include <stdio.h>
int main(){
    int num,digit,i=0,str[i];
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0){
        digit=num%10;
        str[i]=digit+'0';
        i++;
        num/=10;
    }
    i--;
    while(i>=0){
        printf("%c\n",str[i]);
        i--;
    }
    return 0;
}