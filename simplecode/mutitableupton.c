#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("enter the number:");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {   
        printf("\n\n");
        for ( i = 1; i <=10;i++)
        {
            printf("\n%d*%d=%d",j,i,j*i);
        }
        
    }

    getch();
}