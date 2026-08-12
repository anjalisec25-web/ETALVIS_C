//Add two integer arrays up to 50 digits and store the result in a 51-digit array.

#include <stdio.h>
int main(){
    int n=50,a[n],b[n],m=51,c[m],i,j,sum=0,carry=0;
    for(i=0;i<n;i++){
        printf("Enter number %d",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("Enter number %d",i+1);
        scanf("%d",&b[i]);
    }
    for(i=n-1;i>=0;i--){
        sum=a[i]+b[i]+carry;
        c[i+1]=sum%10;
        carry=sum/10;
    }
    c[0]=carry;
    printf("New Array,\n");
    for(i=0;i<m;i++){
        printf("%d",c[i]);
    }
    return 0;
}