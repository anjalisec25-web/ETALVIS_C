#include <stdio.h>
void arrange_ascend(int *p){
    int i;
    for(i=0;i<5;i++){
        *(p+i)=i+1;
    }
}
int main(){
    int a[5],i;
    arrange_ascend(a);
    printf("Numbers From 1 to 5:\n");
    for(i=0;i<5;i++){
        printf("%d\n",*(a+i));
    }
    return 0;
}