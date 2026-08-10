//Get 5 numbers from the user,reverse each number,create a new array, and print the sum of all numbers in the new array.

# include <stdio.h>
int main(){
    int n=5,a[n],i,j=0,b[j];
    printf("Enter 5 numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    printf("New Array,\n");
    for(i=0;i<j;i++){
        printf("%d ",b[i]);
    }
    return 0;
}