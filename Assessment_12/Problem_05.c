//Write a program to multiply up to two 50 digit numbers.

#include <stdio.h>
#include <string.h>
void getnumbers(char *num1,char *num2) {
    printf("Enter First Number: ");
    scanf("%50s", num1);
    printf("Enter Second Number: ");
    scanf("%50s", num2);
}
void multiplenumbers(char *num1,char *num2,int *result) {
    int i, j, n1, n2, sum;
    n1 = strlen(num1);
    n2 = strlen(num2);
    for(i = n1 - 1; i >= 0; i--) {
        for(j = n2 - 1; j >= 0; j--) {
            sum = (*(num1 + i) - '0') * (*(num2 + j) - '0') + *(result + i + j + 1);
            *(result + i + j + 1) = sum % 10;
            *(result + i + j) += sum / 10;
        }
    }
}
int main() {
    char num1[51], num2[51];
    int result[101] = {0};
    int i, n1, n2;
    getnumbers(num1, num2);
    multiplenumbers(num1, num2, result);
    n1 = strlen(num1);
    n2 = strlen(num2);
    printf("Multiplication Result: ");
    i = 0;
    while(i < n1 + n2 - 1 && *(result + i) == 0) {
        i++;
    }
    for(; i < n1 + n2; i++) {
        printf("%d", *(result + i));
    }
    return 0;
}