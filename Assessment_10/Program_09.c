//Get a string of numbers up to 50 digits and remove all leading zeros.

#include <stdio.h>
int main(){
    char str[50],b[50];
    int i=0,j=0;
    printf("Enter a number containing up to 50 digits:");
    scanf("%s",str);
    while(str[i]=='0'){
        i++;
    }
    while(str[i]!='\0'){
        b[j]=str[i];
        i++;
        j++;
    }
    b[j]='\0';
    if(j==0){
        printf("0");
    }
    else{
        printf("%s",b);
    }
    return 0;
}
