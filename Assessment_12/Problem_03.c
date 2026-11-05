//Get a main string and substring.Check the substring in the main string and print the position.

#include <stdio.h>
int main(){
    char str[100],sub[100],*p,*q,*temp;
    int pos=0,found=0;
    printf("Enter a String:");
    scanf("%s",str);
    printf("Enter a Substring:");
    scanf("%s",sub);
    p=str;
    while(*p!='\0'){
        q=sub;
        temp=p;
        while(*q!='\0' && *temp==*q){
            temp++;
            q++;
        }
        if(*q=='\0'){
            printf("Substring found at position:%d\n",pos);
            found=1;
            break;
        }
        pos++;
        p++;
    }
    if(found==0){
        printf("Substring not found.");
    }
    return 0;
}