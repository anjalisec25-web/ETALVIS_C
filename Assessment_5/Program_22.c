//Write a program get number from user print the total number of two-digit odd numbers in the number.

# include <stdio.h>
int main(){
    int x,y=0,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for(;x>0;x/=10){
        y=x%100;
        if(y%2!=0 && (y>9 && y<100)){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}