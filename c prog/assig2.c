//sum of 1st and last digit of 4 digit number
#include<stdio.h>
#include<conio.h>
void main(){
    int num,first,last,sum;
    printf("enter the 4 digit number: ");
    scanf("%d", &num);
    first=num/1000;
    last=num%10;
    sum=first+last;
    printf("sum of first and last digit %d",sum);
    getch();
}