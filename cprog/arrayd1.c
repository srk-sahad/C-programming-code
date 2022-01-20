#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[2][3];
    int i,j;
    printf("enter element of matrix\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is:\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    getch();
}