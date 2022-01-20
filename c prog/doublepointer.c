#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=11;
    int *p,*q;
    p=&a;
    q=p;
    printf("a= %d",a);
    printf("a= %d",*p);
    printf("a= %d",*q);
    getch();
    
}