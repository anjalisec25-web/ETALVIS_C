//Write a loop program to print 5 to 1 on one by one.

#include <stdio.h>
void disp_descend();
int main(){
    disp_descend();
    return 0;
}
void disp_descend(){
    int i;
    for(i=5;i>0;i--){
        printf("%d\n",i);
    }
}