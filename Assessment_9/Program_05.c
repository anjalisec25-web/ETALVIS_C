//Get 5 numbers from the user and print the arrange in ascending order and print the same.

#include <stdio.h>
int main(){
    int n=5,i,a[n],temp,j;
    printf("Enter 5 numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}