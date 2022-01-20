#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,d,e,f,g,equ;
    printf("enter numbers: ");
    scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
    equ=((a-b/c*d+e)*(f+g));
    printf("solution of arithmetic expression= %f" , equ);
    getch();
}
