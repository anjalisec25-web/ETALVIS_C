#include <stdio.h>
char* memcomp(int *src,int *dst){
    if(*src==*dst){
        return "Success";
    }
    return "Failure";
}
int main(){
    int a,b;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    int *src=&a;
    int *dst=&b;
    printf("%s",memcomp(src,dst));
    return 0;
}