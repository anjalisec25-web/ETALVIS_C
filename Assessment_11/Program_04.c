#include <stdio.h>
int find_2digit_odd_sum7(int *p){
    int i,sum=0,count=0;
    for(i=10;i<=99;i++){
        if(i%2!=0){
            sum=(i/10)+(i%10);
            if(sum==7){
                *(p+count)=i;
                count++;
            }
        }
    }
    return count;
}
int main(){
    int a[10],i,count;
    int *p=a;
    count=find_2digit_odd_sum7(p);
    printf("Numbers are:\n");
    for(i=0;i<count;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}