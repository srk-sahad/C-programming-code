#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    float i,sum=0;
    printf("enter the length of series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=(1/i);
        if(i==1)
            printf("1 +");
        else if(i==n)
            printf(" 1/%d= ",n);
        else 
            printf(" 1/%0.0f + ",i);
    }
    printf("%f",sum);
    getch();
}