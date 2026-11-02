#include <stdio.h>
void strcopy(char *src,char *dst){
    int i;
    for(i=0;src[i]!='\0';i++){
        *(dst+i)=*(src+i);
    }
    *(dst+i)='\0';
}
int main(){
    char src[10]="Hello";
    char dst[10];
    printf("Copied String:\n");
    strcopy(src,dst);
    printf("%s",dst);
    return 0;
}