//Get a String of numbers up to 50 digits and validate the number.

#include <stdio.h>
int main(){
    char str[51];
    int i,found=0;
    printf("Enter a number containing 50 digits:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]<'0' || str[i]>'9'){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("Invalid number.");
    }
    else{
        printf("valid number.");
    }
    return 0;
}