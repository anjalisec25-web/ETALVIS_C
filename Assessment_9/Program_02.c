//Get 5 numbers from user and print the average of all numbers.

#include <stdio.h>
int main(){
    int n=5,i,a[n];
    float sum=0,avg=0;
    printf("Enter 5 numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
    return 0;
}