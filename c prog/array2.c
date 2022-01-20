#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10];
    int i,large;
    printf("enter elements");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    large=a[0];
    for ( i = 0; i < 5; i++)
    {
        if (large<a[i])
            large=a[i];
    }
    printf("largest element is %d",large);
    getch();
}