#include <stdio.h>
void inc(int *p,int n){
    for(int i=0;i<n;i++){
        *(p+i)=*(p+i)+1;
        printf("%d ",*(p+i));
    }
}
int main(){
    int n,i,*p;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    int a[n];
    p=a;
    for(i=0;i<n;i++){
        printf("Enter Numbers:");
        scanf("%d",p+i);
    }
    inc(p,n);
    return 0;
}