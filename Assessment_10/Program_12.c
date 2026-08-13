//Convert an integer array of up to 50 digits to a character array and print using "printf("%s,....");"

#include <stdio.h>
int main(){
    int a[50],n,i;
    char str[51];
    printf("Enter number of digits:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Values:");
        scanf("%d",&a[i]);
        str[i]=a[i]+'0';
    }
    str[i]='\0';
    printf("%s",str);
    return 0;
}