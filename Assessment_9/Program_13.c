/*Get multiple numbers from the user and store them in an array. Stop getting numbers when the number is 0.
If 4 numbers are entered and the first and last numbers are equal,print"Success" else"Failure"*/

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
    if(i==4){
        if(a[0]==a[3]){
            printf("Success");
        }
        else{
            printf("Failure");
        }
    }
    else{
        printf("Failure");
    }
    return 0;
}