#include<stdio.h>
#include<conio.h>
void main ()
{
    int a,b,sum,*p,*q;
    printf("enter the munbers");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    sum=*p+*q;
    printf("sum=%d",sum);
    getch();

}