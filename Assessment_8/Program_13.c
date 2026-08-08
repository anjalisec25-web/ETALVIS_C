//Write a program get number from user print the total number of single-digit perfect square numbers in the number.

# include <stdio.h>
int disp_single_digit_square();
int main(){
    int x,count;
    printf("Enter a number:");
    scanf("%d",&x);
    count=disp_single_digit_square(x);
    printf("%d",count);
    return 0;
}
int disp_single_digit_square(int x){
    int y,count=0;
    while(x>0){
        y=x%10;
        if(y==1||y==4||y==9){
            count++;
        }
        x=x/10;
    }
    return count;
}