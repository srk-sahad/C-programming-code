//c prog for bubble sort algorithm
#include<stdio.h>
#include<conio.h>
void main()
{   int n,i,temp,j;
    printf("enter the no.of elements in array: \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements: \n");
    for ( i = 0; i < n; i++)
    {scanf("%d",&a[i]);}
    printf("entered element are: \n");
    for ( i = 0; i <n; i++)
    {printf("%d\t",a[i]);}
    for ( i = 0; i < n-1; i++)
    {   for (j = 0; j < n-1; j++)
        {   if (a[j]>a[j+1])
            {   temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }}}
    printf("\nsorted array ara\n");
    for ( i = 0; i < n; i++)
    {printf("%d\t",a[i]);}
    getch();
}