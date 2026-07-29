/*Get a three-digit number from user.if the sum of the digits is less than 10,then print the sum,otherwise add the digits of the sum.
 if the sum of the digits is less than 10,then print the sum,otherwise add the digits of the sum, and print the sum.Note:The result should always be a single digit only.*/


 #include <stdio.h>
 int main(){
    int num,sum=0,digit,temp;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    while(num>=10){
        temp=num;
        sum=0;
        while(temp!=0){
            digit=temp%10;
            sum=sum+digit;
            temp=temp/10;
        }
        num=sum;
        sum=0;
    }
    printf("Output:%d",num);
    return 0;
 }