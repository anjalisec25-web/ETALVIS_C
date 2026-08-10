/*Get multiple numbers from the user and store them in an array.Stop when the number is 0.
Print the total numbers entered by the user and print the sum of numbers.*/

#include <stdio.h>
int main(){
    int n=100,a[n],i,sum=0;
    for(i=0;i<n;i++){
        printf("Enter a number:");
        scanf("%d",&a[i]);
        sum+=a[i];
        if(a[i]==0){
            break;
        }
    }
    printf("%d\n",i);
    printf("%d",sum);
    return 0;
}