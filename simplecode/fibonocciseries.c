//print fibonacci series
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1=0,n2=1,n3,i,number;
    printf("enter the number of elements:");
    scanf("%d",&number);
    printf("fibonacci series:%d %d",n1,n2);
    for(i=3;i<number;++i)
    {
        n3=n1+n2;
        printf(" %d",n3);
        n1=n2;
        n2=n3;
    }
    getch();
}