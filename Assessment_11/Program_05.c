#include <stdio.h>
void memcopy(int *src,int *dst,int size){
    int i;
    for(i=0;i<size;i++){
        *(dst+i)=*(src+i);
    }
}
int main(){
    int src[5]={10,20,30,40,50};
    int dst[5],size=5,i;
    printf("Copied Numbers:\n");
    memcopy(src,dst,size);
    for(i=0;i<size;i++){
        printf("%d\n",*(dst+i));
    }
    return 0;
}