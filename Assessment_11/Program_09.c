#include <stdio.h>
int intcon(int *src1,int size1,int *src2,int size2,int dst){
    dst=*src1;
    for(int i=0;i<size2;i++){
        dst=dst*10;
    }
    dst=dst+*src2;
    return dst;

}
int main(){
    int a,b,*src1,*src2,size1=0,size2=0,result,temp;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    src1=&a;
    src2=&b;
    temp=a;
    while(temp>0){
        size1++;
        temp/=10;
    }
    temp=b;
    while(temp>0){
        size2++;
        temp/=10;
    }
    result=intcon(src1,size1,src2,size2,0);
    printf("Concatenated Number:%d",result);
    return 0;
}