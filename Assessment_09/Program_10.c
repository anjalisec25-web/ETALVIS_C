//Get 5 numbers from the user,remove the prime numbers,and create a new array then print the same.

#include <stdio.h>
int main(){
    int n=5,a[n],i,count,j,k=0,b[n];
    printf("Enter 5 numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        count=0;
        if(a[i]<=1){
            b[k]=a[i];
            k++;
            continue;
        }
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
                count++;
                break;
            }
        }
        if(count!=0){
            b[k]=a[i];
            k++;
        }
    }
    printf("New Array,\n");
    for(i=0;i<k;i++){
        printf("%d ",b[i]);
    }
    return 0;
}