#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    float x,sum=1,t=1;
    printf("enter value of x: ");
    scanf("%f",&x);
    printf("enter value of n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=t*x/i;
        sum=sum+t;
    }
    printf("the exponational value of %f=%.4f",x,sum);
    getch();
}