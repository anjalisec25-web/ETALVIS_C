#include <stdio.h>
void getnumber(int *a,int *b){
    printf("Enter Number 1:");
    scanf("%d",a);
    printf("Enter Number 2:");
    scanf("%d",b);
}
int addnumber(int a,int b){
    return a+b;
}
int main(){
    int num1,num2,result;
    getnumber(&num1,&num2);
    result=addnumber(num1,num2);
    printf("%d",result);
    return 0;
}