#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    float i;
    float sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
       sum+=(1/i);
    }
    printf("%0.0f",sum);
    getch();
}
