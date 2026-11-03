#include <stdio.h>
char* strcomp(char *src,char *dst){
    int i;
    for(i=0;src[i]!='\0' || dst[i]!='\0';i++){
        if(src[i]!=dst[i]){
            return "Failure";
        }
    }
    return "Success";
}
int main(){
    char src[50],dst[50],*a,*b;
    printf("Enter String 1:");
    scanf("%s",src);
    printf("Enter String 2:");
    scanf("%s",dst);
    a=src;
    b=dst;
    printf("%s",strcomp(a,b));
    return 0;
}