//Get 5 numbers from user and print the biggest number.

#include <stdio.h>
int main(){
    int n=5,i,a[n],b=0;
    printf("Enter 5 numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b=a[0];
    for(i=0;i<n;i++){
        if(a[i]>b){
            b=a[i];
        }
    }
    printf("%d",b);
    return 0;
}