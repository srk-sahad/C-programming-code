#include<stdio.h>
#include<conio.h>
void clrscr(void);
void main(){
    int a;
    void clrscr();
    printf("enter a: ");
    scanf("%d",&a);
    if (a>0)
    printf("number is greater than zero and enter number is %d",a);
    printf("\nout of the programe is ");
    getch();
}