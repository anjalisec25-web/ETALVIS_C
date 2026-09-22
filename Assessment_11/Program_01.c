#include <stdio.h>
int main(){
    int num,*p;
    printf("Enter a Number:");
    scanf("%d",&num);
    printf("Before Changing:%d\n",num);
    p=&num;
    *p=20;
    printf("After Changing:%d",*p);
    return 0;
}