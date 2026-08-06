//Write a program to get two numbers from user and print the LCM of those numbers.

# include <stdio.h>
void disp_LCM2();
int main(){
    disp_LCM2();
    return 0;
}
void disp_LCM2(){
    int x,y,lcm;
    printf("Enter number 1:");
    scanf("%d",&x);
    printf("Enter number 2:");
    scanf("%d",&y);
    lcm=x;
    while(1){
        if(lcm%x==0 && lcm%y==0){
            printf("%d",lcm);
            break;
        }
        lcm++;
    }
}