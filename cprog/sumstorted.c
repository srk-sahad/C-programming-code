#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100];
    int i,n,sum=0;
    int *ptr;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("enter array element: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        ptr=a;
    }
    for ( i = 0; i < n; i++)
    {
        sum+=*ptr;
        ptr++;
    }
    printf("the sum is= %d",sum);
    getch();
}