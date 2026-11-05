//Get a string using gets function and count all the words in it.

#include <stdio.h>
int main(){
    char str[100],*p;
    int count=0;
    printf("Enter a String:");
    gets(str);
    p=str;
    while(*p!='\0'){
        if(*p!=' ' && (*(p+1)==' ' || *(p+1)=='\0')){
            count++;
        }
        p++;
    }
    printf("Number of Words:%d",count);
    return 0;
}