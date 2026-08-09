//Get 5 numbers from user and print the smallest number.

#include <stdio.h>
int main(){
    int n=5,i,a[n],s=0;
    printf("Enter 5 numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    s=a[0];
    for(i=0;i<n;i++){
        if(a[i]<s){
            s=a[i];
        }
    }
    printf("%d",s);
    return 0;
}