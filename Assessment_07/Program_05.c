//Write a loop program to print odd  number between 1 and 9.

#include <stdio.h>
void disp_odd();
int main(){
    disp_odd();
    return 0;
}
void disp_odd(){
    int i;
    for(i=1;i<10;i+=2){
        printf("%d\n",i);
    }
}