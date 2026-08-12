//Get a string and find the length of the string.

#include <stdio.h>
int main(){
    char str[100];
    int length=0,i;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[length]!='\0';i++){
        length++;
    }
    printf("%d",length-1);
    return 0;
}