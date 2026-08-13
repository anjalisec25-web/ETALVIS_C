//Get a number string up to 50 digits and convert it to an integer array.

#include <stdio.h>
int main(){
    char str[51];
    int i,a[50];
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        a[i]=str[i]-'0';
    }
    for(i=0;str[i]!='\0';i++){
        printf("%d ",a[i]);
    }
    return 0;
}