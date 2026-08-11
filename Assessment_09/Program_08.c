//Get 5 numbers from user,remove the odd numbers and create a new array then print the same.

#include <stdio.h>
int main(){
    int n=5,a[n],i,j=0,b[j];
    printf("Enter 5 numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            b[j]=a[i];
            j++;

        }
    }
    printf("New Array,\n");
    for(i=0;i<j;i++){
        printf("%d ",b[i]);
    }
    return 0;
}