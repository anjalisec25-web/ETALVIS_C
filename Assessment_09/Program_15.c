/*Get multiple numbers from the user and store them in an array.Stop getting numbers when the number is 0.
Add each number's digits and put them in a new array and arrange the new array in ascending order and print same.*/

#include <stdio.h>
int main(){
    int n=100,a[n],i,sum,temp=0,b[n],j,k;
    for(i=0;i<n;i++){
        printf("Enter a number:");
        scanf("%d",&a[i]);
        if(a[i]==0){
            break;
        }
    }
    for(j=0;j<i;j++){
        temp=a[j];
        sum=0;
        while(temp>0){
            sum=sum+(temp%10);
            temp/=10;
        }
        b[j]=sum;
    }
    for(j=0;j<i;j++){
        for(k=j+1;k<i;k++){
            if(b[j]>b[k]){
                temp=b[j];
                b[j]=b[k];
                b[k]=temp;
            }
        }
    }
    for(j=0;j<i;j++){
        printf("%d ",b[j]);
    }
    return 0;
}