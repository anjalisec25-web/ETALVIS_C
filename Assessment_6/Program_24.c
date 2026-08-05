//Write a program get number from user print the total number of two-digit perfect square numbers in the number.

# include <stdio.h>
int main(){
    int x,y,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x>0){
        y=x%100;
        if(y==16||y==25||y==36||y==49||y==64||y==81){
            count++;
        }
        x=x/10;
    }
    printf("%d",count);
    return 0;
}