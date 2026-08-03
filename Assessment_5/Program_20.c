//Write a program print total number of single digit Prime numbrs.

#include <stdio.h>
int main(){
    int i,j,count,x=0;
    for(i=2;i<10;i++){
        count=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            x++;
        }
    }
    printf("%d",x);
    return 0;
}