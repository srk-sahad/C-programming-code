#include<stdio.h>
#include<conio.h>
void main(){
    int N,P;
    float R,SI;
    R=8.5;
    printf("enter the value of N: ");
    scanf("%d",&N);
    printf("enter the value of P: ");
    scanf("%d",&P);
    SI=N*P*R/100;
    printf("simple interest is %f",&SI);
    getch();
}