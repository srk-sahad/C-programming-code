#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i=1,n,sum=0;
    float avg;
    printf("enter the value of n=");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("enter the number = ");
        scanf("%d",&a);
        sum+=a;
        i++;
    }
    printf("sum is= %d",sum);
    avg=(float)sum/n;
    printf("\naverage is= %f",avg);
    getch();
}