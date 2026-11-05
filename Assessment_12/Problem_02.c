//Get a string and a character from the user,find all the positions where the character is present, and print it.

#include <stdio.h>
int main(){
    char a[50],ch,*p;
    int pos=0,found=0;
    printf("Enter a String:");
    scanf("%s",a);
    printf("Enter a Character:");
    scanf(" %c",&ch);
    p=a;
    while(*p!='\0'){
        if(*p==ch){
            printf("%d ",pos);
            found=1;
        }
        p++;
        pos++;
    }
    if(found==0){
        printf("Character Not found.");
    }
    return 0;
}