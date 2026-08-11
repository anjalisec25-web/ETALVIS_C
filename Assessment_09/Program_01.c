//Get 5 numbers from user and print the sum of all numbers.

#include <stdio.h>
int main(){
    int n=5,i,a[n],sum=0;
    printf("Enter 5 numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}