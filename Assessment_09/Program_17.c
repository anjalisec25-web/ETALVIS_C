//Adjust the carry in an integer array.(i.e.Convert the 2 digit number into single digits and add the carry to the next number)

#include <stdio.h>
int main(){
    int n,i,temp;
    printf("Enter the number of values in the array:");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        printf("Enter values:");
        scanf("%d",&a[i]);
        b[i]=0;
    }
    for(i=0;i<n;i++){
        temp=a[i];
        b[i]=b[i]+temp%10;
        b[i+1]=b[i+1]+temp/10;
    }
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}