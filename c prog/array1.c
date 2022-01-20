#include<stdio.h>
#include<conio.h>
void main ()
{
    int arr[5];
    int i;
    printf("enter elements of array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("entered element are : \n");
    for ( i = 0; i < 5; i++)
    {
       printf("%d\n",arr[i]);
    }
    getch();
}