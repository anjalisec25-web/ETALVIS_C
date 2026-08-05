//Write a program to get a number from user and print the reverse of that number.

# include <stdio.h>
void disp_reverse_number();
int main(){
    disp_reverse_number();
    return 0;
}
void disp_reverse_number(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    for(;x>0;x/=10){
        printf("%d",x%10);
    }
}