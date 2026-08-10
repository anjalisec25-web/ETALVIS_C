/*Get multiple numbers from the user and store them in an array.Stop getting numbers when the number is 0.
if the total numbers is odd then print the middle number,otherwise print the average of the middle two numbers.*/

#include <stdio.h>
int main(){
    int n=100,a[n],i;
    for(i=0;i<n;i++){
        printf("Enter a number:");
        scanf("%d",&a[i]);
        if(a[i]==0){
            break;
        }
    }
    if(i%2!=0){
        printf("%d",a[i/2]);
    }
    else{
        printf("%d",(a[i/2-1]+a[i/2])/2);
    }
    return 0;
}