#include <stdio.h>
char* strcon(char *src1,char *src2,char *dst){
    int i,j=0;
    for(i=0;src1[i]!='\0';i++){
        dst[i]=src1[i];
        j++;
    }
    while(src2[j-i]!='\0'){
        dst[j]=src2[j-i];
        j++;
    }
    dst[j]='\0';
    return dst;
}
int main(){
    char a[50],b[50],dst[100],*src1,*src2;
    printf("Enter String 1:");
    scanf("%s",a);
    printf("Enter String 2:");
    scanf("%s",b);
    src1=a;
    src2=b;
    printf("Concatenanted string:%s",strcon(src1,src2,dst));
    return 0;
}