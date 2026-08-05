//Write a loop program to print 1 to 5 on one by one.

#include <stdio.h>
void disp_assend();
int main(){
    disp_assend();
    return 0;
}
void disp_assend(){
    int i;
    for(i=1;i<6;i++){
        printf("%d\n",i);
    }
}