#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0,t;
    printf("enter the armstrong number or not:");
    scanf("%d",&n);
    t=n;
    while (n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(t==sum)
    printf("entered is number is a armstrong number ");
    else
    printf("number is not a armstrong number");
    getch();
}